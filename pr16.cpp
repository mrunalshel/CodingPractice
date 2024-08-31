#include<iostream>
using namespace std;
void rev(char arr[])
{
char ch[]={'\0'};
int i,it=0;
char *p=arr;
while(arr[i]='\0')
{
i++;
p++;
}

while(i>0)
{
ch[it]=*p;
it++;
cout<<*p;
p--;
i--;
}
cout<<ch;
}

int main()
{

char ch[]="mrunal";
rev(ch);
return 0;
}