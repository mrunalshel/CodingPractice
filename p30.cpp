#include<iostream>
using namespace std;
int main()
{
 int sum=0, no=0;
  while(no!=3+1)
  {
    if((no%3)==0)
    {
      sum=sum+no;
    }
    no++;
  }
  cout<<sum;
}