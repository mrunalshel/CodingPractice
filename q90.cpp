#include<iostream>
using namespace std;
int main()
{
    //code 3
    int ino=123;
int i=0;

int arr[3]={0};
while(ino>0)
{
    int d=ino%10;
    arr[i]=d;
    ino=ino/10;
    i++;
}
//
int brr[10]={0};
int p=i-1;
int y=0;
while(y!=i)
{
brr[p]=arr[y];
y++;
p--;
}
cout<<arr[0];
cout<<arr[1];
cout<<arr[2];
return 0;
}