#include<iostream>
using namespace std;
class dist
{
 int km;
 int m;
 int cm;
 public:
  void setvalue()
  {
   cout<<"Enter km: ";
   cin>>km;
   cout<<"Enter m: ";
   cin>>m;
   cout<<"Enter cm: ";
   cin>>cm;
  }
  friend dist operator+(dist &, dist &);
  void display()
  {
   cout<<km<<"kilometers, "<<m<<"meters & "<<cm<<"centimeters\n";
  }
};

dist operator+(dist & a, dist & b)
{
 dist temp;
 temp.km=a.km +b.km+((a.m+b.m+((a.cm+b.cm)/100))/1000);
 temp.m=(a.m+b.m+((a.cm+b.cm)/100))%1000;
 temp.cm=(a.cm+b.cm)%100;
 return(temp);
}

int main()
{
 dist d1,d2,d3;
 cout<<"Enter Distance 1:\n";
 d1.setvalue();
 cout<<"Enter Distance 2:\n";
 d2.setvalue();
 d3=d1+d2;
 
 cout<<"Distance 1= ";
 d1.display();  
 cout<<"Distance 2= ";
 d2.display();  
 cout<<"Distance 3(sum of distance 1 and 2) is ";
 d3.display();
 return 0;  
}


  
