#include<iostream>
using namespace std;
class person
            {
             protected:
             char name[20];
             char code[5];
             public:
             person()
             {
              cout<<"Enter Name: ";
              cin>>name;
              cout<<"Enter Code: ";
              cin>>code;
             }
             void displayP()
             {
              cout<<"Name: "<<name<<endl;
              cout<<"Code: "<<code<<endl;
             }
             void updateP()
             {
              cout<<"Enter New Name: ";
              cin>>name;
              cout<<"Enter New Code: ";
              cin>>code;
             }
            };
            
class account:virtual public person
{
 protected:
 int pay;
 public:
  account()
  {
   cout<<"Enter Pay: ";
   cin>>pay;
  }
  void displayA()
  {
   cout<<"Pay: "<<pay<<endl;
  }
  void updateA()
  {
   cout<<"Enter New Pay: ";
   cin>>pay;
  }
};

class admin:virtual public person
{
 protected:
 int exp;
 public:
  admin()
  {
   cout<<"Enter Experience(in years): ";
   cin>>exp;
  }
  void displayE()
  {
   cout<<"Experience: "<<exp<<" years\n";
  }
  void updateE()
  {
   cout<<"Enter New Experience(in years): ";
   cin>>exp;
  }
};

class master:public account,public admin
{
 public:
  void display()
  {
   displayP();
   displayA();
   displayE();
  }
  void update()
  {
   updateP();
   updateA();
   updateE();
   cout<<"\n\nNew Updated Data: \n";
   display();
  }
};

int main()
{
 master M;
 int key;
 label:
 cout<<"\n\t\tPress 1 to Display\n\t\tPress 2 to Update\n\t\tPress any other key to exit\n\t\t";
 cin>>key;
 if(key==1)
 {
  M.display();
  goto label;
 }
 if(key==2)
 {
  M.update();
  goto label;
 }
 return 0;
}
 
         

