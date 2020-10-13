#include<iostream>
using namespace std;
class Account
{
 char cname[20];
 int accno;
 public:
  float balance=0;
  char *acctype;
  void getdata()
  {
   cout<<"Enter Customer Name: ";
   cin>>cname;
   cout<<"Enter Account Number: ";
   cin>>accno;
  }
  void display()
  {
   cout<<"Customer Name: "<<cname<<"\n";
   cout<<"Account Number: "<<accno<<"\n";
   cout<<"Account Type: "<<acctype<<"\n";
   cout<<"Balance: Rs."<<balance<<"\n";
  }
  void deposit()
  {
   float amt;
   cout<<"Enter Amount to be Deposited: Rs.";
   cin>>amt;
   balance=balance+amt;
   cout<<"New Updated Balance: Rs."<<balance<<"\n";
  }
  void withdraw()
  {
   float amt;
   cout<<"Enter Amount you want to Withdraw: Rs.";
   cin>>amt;
   if(amt<=balance)
   {
    balance=balance-amt;
    cout<<"New Updated Balance: Rs."<<balance<<"\n";
   }
   else
    cout<<"Insufficient Balance\n";
  }
};

class sav_acc: public Account
{
 float i=0.035;
 public:
  sav_acc()
  {
   acctype="SavingsAccount";
  }
  void interest()
  {
   cout<<"You Got an Interest Amount of Rs."<<balance*i<<"\n";
   balance=balance+(balance*i);
   cout<<"New Updated Balance: Rs."<<balance<<"\n";
  }
};

class cur_acc: public Account
{
 float minbal=3000;
 float penalty=120.23;
 public:
  cur_acc()
  {
   acctype="CurrentAccount";
  }
  void check()
  {
   if(balance<minbal)
   {
    cout<<"Your Balance is Below Minimum Balance, so a penalty of Rs.120.23 has been imposed.\n(Please try to maintain the required Minimum Balance to avoid future penalties)\n";
    balance=balance-penalty;
    cout<<"New Updated Balance: Rs."<<balance<<"\n";
   }
   else
    cout<<"No Need to worry your balance is above required Minimum balance, Please maintain it to avoid penalties\n";
  }
};


int main()
{
 cout<<"\t \t \t Welcome to SBI Online Bank \t \t\n";
 int cusid;
 int Scount=0;
 int Ccount=0;
 int key;
 int type;
 sav_acc S[10];
 cur_acc C[10];
 label:
 cout<<"What would you like to do:\nPress 1 to open an Account\nPress 2 to make a Deposit\nPress 3 for Withdrawal\nPress 4 to Compute Interest\nPress 5 to check Minimum Balance\nPress 6 for Account Summary\n";
 cin>>key;
 switch(key){
             case 1:cout<<"What type of account would you like to Open\nPress 1 for Savings Account\nPress 2 for Current Account\n";
                    cin>>type;
                    switch(type){
                                 case 1:if(Scount<10)
                                        {
                                         S[Scount].getdata();
                                         cusid=Scount;
                                         cout<<"Your Account has been Created and your Customer id is "<<cusid<<"\n";
                                         Scount++;
                                         S[cusid].display();
                                         cout<<"Cheque Book will not be issued\n";
                                        }
                                        else
                                         cout<<"No more Savings Account can be Created,Sorry! for your Inconvenience\n";
                                        break;
                                 case 2:if(Ccount<10)
                                        {
                                         C[Ccount].getdata();
                                         cusid=Ccount+10;
                                         cout<<"Your Account has been Created and your Customer id is "<<cusid<<"\n";
                                         Ccount++;
                                         C[cusid-10].display();
                                         cout<<"Cheque Book will be issued within in 7 days\n";
                                        }
                                        else
                                         cout<<"No more Current Account can be Created,Sorry! for your Inconvenience\n";
                                        break;
                                 default:cout<<"Invalid Input\n";
                                         break;
                                }
                    break;        
             case 2:cout<<"Enter your Customer id: ";
                    cin>>cusid;
                    if(cusid<10)
                     S[cusid].deposit();
                    else
                     C[cusid-10].deposit();
                    break;
             case 3:cout<<"Enter your Customer id: ";
                    cin>>cusid;
                    if(cusid<10)
                     S[cusid].withdraw();
                    else
                     C[cusid-10].withdraw();
                    break;
             case 4:cout<<"Enter your Customer id: ";
                    cin>>cusid;
                    S[cusid].interest();
                    break;                                                                      
             case 5:cout<<"Enter your Customer id: ";
                    cin>>cusid;
                    C[cusid-10].check();
                    break;                                            
             case 6:cout<<"Enter your Customer id: ";
                    cin>>cusid;
                    if(cusid<10)
                     S[cusid].display();
                    else
                     C[cusid-10].display();
                    break;
             default:cout<<"Invalid Input\n";
                    break;        
            }
 cout<<"Press any number to Continue or 0 to Exit\n";
 cin>>key;
 if(key==0)
  cout<<"Thank You for choosing us\n";
 else
  goto label;
  
 return 0;
}            
     
