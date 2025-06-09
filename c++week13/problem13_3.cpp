/*CH-230-A
A13p3.c
Kamila Ziza
kziza@constructor.university
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    int n;
    char fileName[50];

    cout << "Enter the number of files you want to open: ";
    cin >> n;

    ifstream myFile;
    ofstream myConcat;
    string line;

    // Open the new file for concatenation in binary mode and check for success.
    myConcat.open("concatn.txt", ios::binary | ios::out);
    if (!myConcat) {
        cout << "Error opening the file." << endl;
        myConcat.close();
        getchar();
        exit(1);
    } else {
        // Input file names to concatenate.
        for (int i = 0; i < n; i++) {
            cin >> fileName;

            // After all files are entered, process each file.
            // Open the pre-existing file in binary mode.
            myFile.open(fileName, ios::binary | ios::in);

            if (!myFile) {
                cout << "Error opening the file." << endl;
                myFile.close();
                getchar();
                exit(1);
            } else {
                int size = 0;
                char buf[100];

                myFile.seekg(0, ios::end);
                size = (int)myFile.tellg();
                myFile.seekg(0, ios::beg);

                // Copy from each file using a buffer.
                for (int i = 0; i < size; i++) {
                    myFile.read(buf, size);
                    myConcat.write(buf, myFile.gcount());
                }

                // Separate the files with a newline.
                myConcat << endl;
            }

            // Close after the objective is complete.
            myFile.close();
        }

        myConcat.close();
    }

    cout << "The files have been successfully concatenated to concatn.txt" << endl;

    return 0;
}