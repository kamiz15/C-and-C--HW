/*CH-230-A
A9p4.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include <string>

using namespace std;
// we do both overload functions
int mycount(int k, int z){
    return z-k;
}
int mycount(char c, string s){
    int count = 0; 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] ==  c)
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char *argv[]){
    int k,z;
    char ch;
    string str;
    // this loop seperates each function
    if(cin >> k && cin >> z){
        cout << "The difference is :" << mycount(k,z) << endl;
    } 
    cout  << endl;
    if(cin >> ch){
        getchar();
        getline(cin,str);
        cout<< "The count is:" << mycount(ch,str) << endl;
    }
    return 0;
}