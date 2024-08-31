
#include<iostream>
using namespace std;
void fun()
{
int ino[3]={87,64,95};
int brr[6]={0};
int vrr[6]={0};
int y=0;
for(int i=0;i<3;i++)
{
while((ino[i])>0)
{
int d=ino[i]%10;

brr[y]=d;
ino[i]=ino[i]/10;
y++;
}

} 

for(int k=0;k<y;k++)
{
    for(int z=0;z<y;z++)
    {
    if(brr[k]>brr[z])
    {
        int temp=brr[k];
        brr[k]=brr[z];
        brr[z]=temp;
    }
    }
    
}

cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];
cout<<brr[5];

}









int main()
{
fun();
}