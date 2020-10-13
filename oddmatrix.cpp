#include<iostream>
using namespace std;
#define MAX 20
class matrix
{ 
  int m;
  int n;
  int arr[MAX][MAX];
 public:

  matrix(int x, int y)
  {
   this->m=x;
   this->n=y;
  }
  
  void enter()
  {
   cout<<"Enter Elements: \n";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    cin>>arr[i][j];
   }
  }
  
  void display()
  {
   cout<<"New Matrix \n";
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<"\t";
    cout<<"\n";
   }
  }
  
  void countOdd()
  {
   int odd=0;
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
     if(arr[i][j]%2!=0)
      odd++;
    }
   }
   cout<<"There are "<<odd<<"numbers in the Matrix \n";
  }
};
     
int main()
{ 
 int m,n;
 cout<<"Enter size of Array: ";
 cin>>m>>n;
 matrix *a = new matrix(m,n);
 a->enter();
 a->display();
 a->countOdd();
 return 0;
}
