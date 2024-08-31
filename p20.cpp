#include<iostream>
using namespace std;

int fun()
{
 
 int arr[5]={1,2,3,4,5};
 int brr[5]={11,11,11,11,11};
 int temp[5]={'0'};
 
for(int i=0;i<5;i++)
 {
temp [i]=arr[i];
   
}

for(int i=0;i<5;i++)
 {
arr[i]=brr[i];
   
}


for(int i=0;i<5;i++)
 {
brr[i]=temp[i];
   
}






  cout<<brr[0];
  cout<<brr[1];
  cout<<brr[2];
  cout<<brr[3];
  cout<<brr[4];

}



int main()
{
fun();
return 0;
}