#include<iostream>

using namespace std;


int main()
{

int arr[7]={'\0'};
    int ino=718;
    int idivi=12,i=0;

    int idu=ino;//ino cha duplicate

while(ino>0)
{
  int  d=ino%12;
arr[i]=d;     //i mhnje total no int the of array
ino=ino/12;
i++;  //1 2 3        
}

int fg=0;
while(fg!=i)
{
  if(arr[fg]>=10);
{

for(int j=0;j<27;j++)
{
    int ni=10;
char cc='A';
    while(ni!=arr[fg])
    {
        cc++;
        ni++;
    }

    arr[fg]=(char)cc;
    cout<<arr[fg];
}
}
fg++;
}

cout<<arr[0];
cout<<arr[1];

return 0;
 }


 




