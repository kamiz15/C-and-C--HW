/*CH-230-A
A13p1.c
Kamila Ziza
kziza@constructor.university
*/


#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){

    //Input File.
    ifstream myFile;
    //Output File.
    ofstream myFileCopy;

    //Take filename from user.
    string fileName;

    //Make a new file and copy.
    string beforeDOT;
    string copy = "_copy";
    string extension;
    string newFile;

    //To get lines from the input file.
    string line;

    cout << "Input  the parent file name: ";
    getline(cin, fileName);

    //Opening the preexisting input file.
    myFile.open(fileName);

    //Check if the opening process worked or not.
    if(!myFile){

        cout << "Error in opening the file." << endl;
        myFile.close();
        getchar();
        exit(1);

    }
    else{

        //Go to the position where there is a dot in the filename.
        size_t pos = fileName.find_first_of('.');

        //Get the string before the dot.
        beforeDOT = fileName.substr(0, pos);

        //Get the string(extension) after the dot
        extension = fileName.substr(pos, fileName.size());

        //Concatenate so that a new file is created.
        //This new file will be opened and copied to.
        newFile = beforeDOT + copy + extension; 

        //Creates a new file as output file.
        myFileCopy.open(newFile);

        if(!myFileCopy){
            cout << "Error creating the file." << endl;
            myFileCopy.close();
            getchar();
            exit(1);
        }
        else{
            //good() function checks until EOF.
            while(myFile.good()){
                
                //Gets the text including white spaces.
                getline(myFile, line);

                //Printing it onto the new file.
		        myFileCopy << line << endl;
	        }
        } 
    }
    cout << "File has been successfully copied to " << newFile << endl;
    //Closing the file once the objective is completed.
    myFileCopy.close();
    myFile.close();

    return 0;
}