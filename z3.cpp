
#include<iostream>
using namespace std;
class hii
{
public:
int first (int arr[2][2])
{
int sum=0;

for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{

sum=sum+(arr[i][j]);
}
}

return sum;
}
};
int main()
{
int arr[2][2];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<"enter no";
cin>>arr[i][j];
}
}
hii obj;
int iret=obj.first(arr);
cout<<iret;




}

