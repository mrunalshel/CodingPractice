#include<iostream>
using namespace std;

int main()
{
int i=0;
char arr[50];
char brr[390]="hgty";
while(brr[i]!='\0')
{

if((brr[i]>='a')&&(brr[i]<='z'))
{
brr[i]=brr[i]-32;
}
i++;
}
cout<<brr;
return 0;
}