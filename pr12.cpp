#include<iostream>
using namespace std;
int main()
{

int ino,ino2=0,i=0;
cout<<"enter array row size";
cin>>ino;
cout<<"enter array column size";
cin>>ino2;
int arr[ino][ino2]=;
for(int i=0;i<ino;i++)
{
for(int j=0;j<ino2;j++)
{
cout<<"enter array number";
cin>>arr[i][j];

}
}

for(int i=0;i<ino;i++)
{
for(int j=0;j<ino2;j++)
{
cout<<arr[i][j];
cout<<"\t";
}
cout<<"\n";
}
return 0;
}