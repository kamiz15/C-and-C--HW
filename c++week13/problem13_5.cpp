/*CH-230-A
A13p5.c
Kamila Ziza
kziza@constructor.university
*/
#include<iostream>
using namespace std;
 
class A {
    int x;

public:
    A() : x(20) {}
    A(int i) : x(i) {}

    void print() { cout << x; }
};

class B : virtual public A {
public:
    B() : A(10) {}
};

class C : virtual public A {
public:
    C() : A(10) {}
};

class D : public B, public C {
public:
    D() {}
};

int main() {
    D d;
    d.print();

    return 0;
}

/*

ERROR MESSAGE:

error: implicit default constructor for 'D' must explicitly initialize the 
base class 'A' which does not have a default
      constructor
class D: public B, public C {};
      ^
minheritance2.cpp:39:5: note: in implicit default constructor for 'D' first 
required here
  D d;
    ^
minheritance2.cpp:11:7: note: 'A' declared here
class A{
      ^
1 error generated.

*/


/*

REASONING:

Simply declaring an object of class D without providing any arguments
invokes the default constructor. Since class D inherits from the grandparent 
class A, and class A does not have a default constructor in its public, an 
error is thrown.

The solution is to add a default constructor in the grandparent class (class A) 
and also a default constructor in the grandchild class (class D) so that the 
object creation in the main function can be achieved without errors.

*/
