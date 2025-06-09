/*CH-230-A
A9p2.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    double x;
    string s;
    cin >> n;
    cin >> x;
    cin.ignore();   // we use this line to get rid of the newline 
                    //that is found at the end of the previous function
    getline(cin, s);
    // we use this loop to print it n times.
    for(int i = 0; i < n; i++){
        cout << s << ":" << x << endl;
    }
    return 0;

}