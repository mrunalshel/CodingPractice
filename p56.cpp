#include<iostream>
using namespace std;
int main()
{
    int ino=16,t=0,i=0,y=0,idu=16;
    

    int arr[4]={0};
while(ino>0)
{
int d=ino%10;
arr[i]=d;
i++;
    ino=ino/10;
}
int p=i;

int squ=idu*idu;
//625

  int brr[4]={0};

  i=0;
while(squ>0)
{
int d=squ%10;
brr[i]=d;
i++;
    squ=squ/10;
}
        

while(y!=p)
{
if(arr[y]!=brr[y])
{
    t=9;
    break;
}
    y++;
}
 

 if(t==9)
 {
    cout<<"fail";

 }

 else{
    cout<<"true";
 }
 return 0;
}