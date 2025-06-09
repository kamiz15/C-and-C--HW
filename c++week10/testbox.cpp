/*CH-230-A
A11p1 .c
Kamila Ziza
kziza@constructor.university
*/
#include <iostream>
#include <cstdlib>
#include "Box.h"
using namespace std; 

int main (int argc, char** argv){
    int n;
    double height, width, depth, volume;
    
    cout << "Enter the number of boxes: "<< endl;
    cin >> n;

    // Dynamically allocate memory for an integer array
    Box *BoxArray = new Box[2*n];
    // getting the sizes from the user 
    for (int i = 0;i < n; i++){
        cout << "Enter the height of box: "<< endl;
        cin >> height;
        BoxArray[i].setHeight(height);
        cout << "Enter the width of box: "<< endl;
        cin >> width;
        BoxArray[i].setWidth(width);
        cout << "Enter the depth of box: "<< endl;
        cin >> depth;
        BoxArray[i].setDepth(width);

        BoxArray[n + i] = Box(BoxArray[i]);
    }
    // print the volume
    for(int i = 0; i < n; i++){
        BoxArray[i].print();
    }
     for(int i = n; i < 2*n; i++){
        volume = BoxArray[i].getHeight() * BoxArray[i].getWidth() * 
        BoxArray[i].getDepth();
        cout << "The volume of the box is " << volume << endl;
    }

    //Deallocating dynamic memory allocation.
    delete []BoxArray;
    return 0;

}