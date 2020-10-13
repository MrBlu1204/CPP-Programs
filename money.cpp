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
    void operator-()
    {
     r= -r;
     p = -p;
    }
    money operator+(money m)
    {
     money temp;
     temp.r = r + m.r +((100+p+m.p)/100)-1;
     temp.p = (100+p + m.p)%100;
     return(temp);
    }
};

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





