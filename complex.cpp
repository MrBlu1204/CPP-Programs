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
               friend void add(complex ,complex);
               friend void sub(complex ,complex);
               void display();
               float real,imaginary;
               };
             void add(complex c1, complex c2)
             {
              complex C;
              C.real=c1.real + c2.real;
              C.imaginary=c1.imaginary + c2.imaginary;
              cout<<"Sum of the two Complex Numbers A & B is "<<C.real<<"+ "<<C.imaginary<<"i\n";
             }
             void sub(complex c1, complex c2)
             {
              complex C;
              C.real=c1.real - c2.real;
              C.imaginary=c1.imaginary - c2.imaginary;
              cout<<"Difference of the two Complex Numbers A & B is "<<C.real<<"+ "<<C.imaginary<<"i\n";
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
 add(A, B);
 sub(A, B);
 
 return 0;
}




