#include<iostream>
using namespace std;

class money{
    int r;
    int p;
public:
    void setvalue()
    {
     cout<<"Enter Rs.: ";
     cin>>r;
     cout<<"Enter Paise: ";
     cin>>p;
    }
    void display()
    {
     cout<<r<<"Rupees & "<<p<<"Paise\n";
    }
    friend void operator-(money &);
    friend money operator+(money &, money &); 
   
};

void operator-(money & a)
    {
     a.r= -a.r;
     a.p = -a.p;
    }
money operator+(money & a, money & b)
    {
     money temp;
     temp.r = a.r + b.r +((100+a.p+b.p)/100)-1;
     temp.p = (100+a.p + b.p)%100;
     return(temp);
    }

int main()
{
    money m1, m2, m3;
    cout<<"\tAmount1\n"; 
    m1.setvalue();
    cout<<"\tAmount2\n"; 
    m2.setvalue();
    cout<<"Amount1:"; 
    m1.display();
    cout<<"Amount2:"; 
    m2.display();
    -m2;
    m3 = m1 + m2;
    cout<<"Amount3(difference of amount1 & amount2):"; 
    m3.display();

    return 0;
}





