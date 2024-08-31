
#include<iostream>
using namespace std;

int main()
{
int arr[34][23];


for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<"enter no";
cin>>arr[i][j];
}
}

for(int k=0;k<3;k++)
{
for(int l=0;l<3;l++)
{
cout<<arr[k][l];
cout<<"  ";
}
cout<<"\n";
}

return 0;
}