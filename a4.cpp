#include<iostream>
using namespace std;
int main()
{
int arr[900]={0};
int ino1,ino2,imod,k;
cout<<"enter no then first then secon";  

cin>>ino1;
cin>ino2;

for(int i=ino1;i<=ino2;i++)
{
while(i!=0)
{
imod=i%10;
i=i/10;

arr[k]=imod;
k++;
}

k=0;
for(int j=0;j<k;k++)
{
for(int g=0;g<k;g++)
{
arr[j]!=arr[g];
{
cout<<"not palindrfom";
}
}
}


}

cout<<"palindrom";


}