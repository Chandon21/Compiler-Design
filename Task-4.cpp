#include <iostream>
using namespace std;
int main()
{
   int i,factorial=1,number;

  cout<<"Enter a Number: ";
cin>>number;
  for(i=1;i<=number;i++)
    {
      factorial=factorial*i;
  }
  cout<<"Factorial of " <<number<<" is: "<<factorial<<endl;
  return 0;
}
