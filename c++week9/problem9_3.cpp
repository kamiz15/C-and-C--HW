#include <iostream>
/*CH-230-A
A9p3.c
Kamila Ziza
kziza@constructor.university
*/
#include <string>

using namespace std;
// this function returns the absolute value
float absolute(float  n){

    if (n < (float) 0){
        return n * -1;
    } 
    else{
        return n * 1;
    }
}
int main(){
    float n;
    cin >> n;
    // we use this to call the function
    cout << "The absolute value of " << n 
         << " is " << absolute(n) << endl;
    return 0;
}