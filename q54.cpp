#include<iostream>
using namespace std;
int main()
{
 int ino=198,p=0,q=0,ino2=199,icnt=0;
 int arr[3]={0};
  int brr[3]={0};
 /* 7 8 9    9  9  1    icnt++ 7 & 9 mul aani arr[i]+1 --krne  if n==size-1 asel trr cou n krne*/


 while(ino>0)
 {
    int d=ino%10;
    arr[p]=d;//p mhnje arr chya last paryant janar
    ino=ino/10;
    p++;
 }

 while(ino2>0)
 {
    int d=ino2%10;
    brr[q]=d;//q mhnje brr chya last paryant janar
    ino2=ino2/10;
    q++;
 }

//cout<<arr[2];
//cout<<brr[2];
int s=0;
while(s!=p)
{       
    if((arr[s]-brr[s]<0)&&(s!=2))
    {
icnt++;
arr[s+1]=arr[s]-1;
//cout<<arr[p];
//cout<<brr[p];
//cout<<q;
    }


s++;
}
cout<<icnt;
return 0;
}