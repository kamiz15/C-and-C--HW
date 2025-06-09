/*CH-230-A
A13p4.c
Kamila Ziza
kziza@constructor.university
*/

#include<iostream>
using namespace std;
 
class A {
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A {
public:
    B() { setX(10); } 
};
 
class C : virtual public A {
public:
    C() { setX(20); } 
};
 
class D : public B, public C {};
 
int main() {
    D d;
    d.print();
    
    return 0;
}

/*
ERROR MESSAGE:

error: non-static member 'print' found in multiple base-class subobjects of 
type 'A':
    class D -> class B -> class A
    class D -> class C -> class A
    d.print();
      ^
minheritance1.cpp:17:14: note: member found by ambiguous name lookup
        void print() { cout << x; }
             ^
1 error generated.

*/

/*
REASONING:

Class B and class C both inherit the print() method from the common base class A,
leading to ambiguity when class D inherits from both B and C. To resolve this,
the inheritance from A in classes B and C is made virtual. This ensures that there
is only one instance of class A in the hierarchy, resolving the ambiguity and 
addressing the diamond problem. The order of inheritance in class D also determines
which version of print() will be called. In this case, since class C is inherited
after class B, the print() method from class C will be used.
*/
