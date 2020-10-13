#include<iostream>
using namespace std;
class complex{
              public:
               complex()
               {
                real=0;
                imaginary=0;
               }
               complex(float r, float i)
               {
                real=r;
                imaginary=i;
               }
               complex(complex &c)
               {
                real=c.real;
                imaginary=c.imaginary;
               }
               complex add(complex ,complex);
               void display();
               float real,imaginary;
               };
               complex complex :: add(complex c1, complex c2)
               {
                complex C(c1);
                C.real=c1.real +c2.real;
                C.imaginary=c1.imaginary +c2.imaginary;
                return C;
               }
               void complex :: display()
               {
                cout<<real<<"+ "<<imaginary<<"i\n";
               }
int main()
{
 float r1,i1,r2,i2;
 cout<<"Enter Real and Imaginary part of 1st Complex Number: ";
 cin>>r1>>i1;
 complex A(r1,i1);
 cout<<"A: ";
 A.display();
 cout<<"Enter Real and Imaginary part of 2nd Complex Number: ";
 cin>>r2>>i2;
 complex B(r2,i2);
 cout<<"B: ";
 B.display();
 complex C(B);
 complex Sum;
 Sum = Sum.add(A, C);
 cout<<"Sum of the two Complex Numbers A & B is ";
 Sum.display();
 
 
 return 0;
}
