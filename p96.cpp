#include<iostream>
using namespace std;
int main()
{


int brr[40]={0};
char crr[40]={'\0'};
char ch='A';

for(int i=10;i<=36;i++)
{

    brr[i]=i;//int array
    crr[i]=ch;//char array
    ch++;
}


int ino=876,sum=0,w=0;
int irr[40]={10,23,17};

char ch1[8]={'\0'};


for(int k=0;k<10;k++)
{
    if(irr[k]>=10)
    {
        int p=irr[k];
        ch1[k]=crr[p]; //char int madhe kraych 
    }
}

cout<<ch1;

}