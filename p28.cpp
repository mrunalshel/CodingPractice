#include<iostream>
using namespace std;
int main()
{

  
    int t=0;
char arr[5]={'a','y','n','e'};
char brr[5]={'\0'};
for(int i=0;i<5;i++)
{

    if((arr[i]=='a')||(arr[i]=='i')||(arr[i]=='u')||(arr[i]=='o')||(arr[i]=='e'))
    {
        continue;
    }

    else
    {
        brr[t]=arr[i];
        t++;
    }
}

for(int j=0;j<t;j++)

{
    arr[j]=brr[j];
}

cout<<arr[0];
cout<<arr[1];
cout<<arr[2];
cout<<arr[3];
return 0;
}