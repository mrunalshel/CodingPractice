#include<iostream>      
using namespace std;   
int main()          
{
    
char arr[50]="mru----nal";
char *p;
char brr[800]={'\0'};
p=arr;
int k=0;
p=new char(90);
for(int i=0;i<50;i++)
{
if(arr[i]=='-')
{
    brr[k]='-';
    k++;
}

}
for(int j=0;j<50;j++)
{
if(arr[j]!='-')
{
    brr[k]=arr[j];
    k++;
}

}
cout<<brr;

}