#include<iostream>
using namespace std;
int main()
{
    int n=10;
    char ch='A';
int arr[50];
char brr[50];
    for(int i=10;i<=90;i++)
    {
        arr[i]=n;
        brr[i]=ch;
        
        cout<<brr[i];
        cout<<arr[i];
        ch++;
        n++;
    }

   cout<<arr[10];
   cout<<brr[10];

   return 0;
}