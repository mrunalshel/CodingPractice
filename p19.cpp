#include<iostream>
using namespace std;

int fun()
{
 
 int arr[5]={1,2,3,4,5};
 int brr[5]={0};
 int icnt=0;

 for(int i=0;i<5;i++)
 {
for(int j=0;j<5;j++)
{
    if(j==4)
    {
        brr[j]=arr[i];
    }

    else{
        brr[j]=arr[j+1];
    }

   
}




for(int h=0;h<5;h++)
{
    arr[h]=brr[h];
}
icnt++;
 if(icnt==2)
    {
        break;
    }
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