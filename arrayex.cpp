#include<iostream>
using namespace std;

int main()
{ 
 int n,i;
 cout<<"Enter size of Array: ";
 cin>>n;
 int a[n];
 cout<<"Enter Elements: ";
 for(i=0;i<n;i++)
  cin>>a[i];
 
 cout<<"Enter a index: ";
 cin>>i;
 try
 {
  if(i>=0&&i<n)
   throw(i);
  else
   cout<<"Invalid Index\n";
 }
 catch(int e)
 {
  cout<<a[i]<<" is present at index "<<i<<endl;
 }
  
 return 0;
}
  
  
 
