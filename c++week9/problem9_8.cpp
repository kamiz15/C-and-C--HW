/*CH-230-A
A9p8.c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
using namespace std;


void subtract_max(int *&a, int n){

    int max = a[0];
    //we find the max value in the array.
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << "The max value is: " << max << endl;
    cout << "The max value minus everything else is:\n" << endl;
    //we substract the max from everything.
    for(int i = 0; i < n; i++){
        a[i] -= max;
        cout << a[i] << endl;
    }
    cout << endl;
}
// we deallocate the dynamically created array.
void deallocate(int *&b){
    delete [] b;
    cout << "The dynamic array is deallocated!" << endl;
}
int main(){
    
    int n;
    cin >> n;
    // we do dynamic allocation using C++.
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << endl;
    // we call the functions.
    subtract_max(a, n);
    deallocate(a);
    cout << endl;
    return 0;
}