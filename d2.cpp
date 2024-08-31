#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
public:
int arr[][];
int ino=0,icol=0;

cout<<"enter size of array";
cin>>ino;

cout<<"enter column of array";
cin>>icol;
 
arr=new[ino][icol];

for(int i=0;i<ino;i++)
{
for(int j=0;j<icol;j++)
{
cout<<"enter no in array";
cin>>arr[i][j];
}
}


for(int i=0;i<ino;i++)
{
for(int j=0;j<icol;j++)
{
cout<<"no in array";
cout<<arr[i][j];
}
}

return 0;

}