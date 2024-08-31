#include<iostream>
using namespace std;
int main()
{

    char arr[300]={'\0'};
    int brr[300]={0};
char ch='A';
int ino=10;

    for(int i=10;i<=36;i++)
    {
arr[i]=ch;
brr[i]=ino;
ch++;
ino++;
}

int grr[3]={11,4,12};
int po=0;
while(po!=4)
{
    if(grr[po]>=10)
    {
int ff=grr[po];    //char array arr ycha    char int mdhe kra

char n1=(char)arr[ff];
char n2=n1;
grr[po]=n2;
    }


po++;
}

cout<<grr[0];
cout<<grr[1];
cout<<grr[2];

}//shevt