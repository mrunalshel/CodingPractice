#include<iostream>
using namespace std;
int main()
{
/*123  abc */
int ino=993,n=0;
int arr[3]={0};

while(ino>0)
{
int d=ino%10;
arr[n]=d;

n++;
ino=ino/10;   // n contain tatal digit of no
}

//int b will go till 26
int b=1;
char a='A';
char ch[26]={'\0'};
while(b!=26)
{
ch[b]=a;
b++;
a++;
}

//  ch mdhe char arrr mdhe no  int y=arr[]=num (no char mdhe krne arr )
int t=0,init=0;
char fina[10]={'\0'};

while(t!=n)
{
int y=arr[t];
fina[init]=(char)y+'0';
fina[init+1]=ch[y];
init=init+2;
t++;


}
cout<<fina[0];
cout<<fina[1];
cout<<fina[2];
cout<<fina[3];
cout<<fina[4];
cout<<fina[5];
cout<<fina[6];
}