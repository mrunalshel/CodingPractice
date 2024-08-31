#include<iostream>

using namespace std;

class fir
{
 public:
bool fun(int arr[],int n)
{
int alpha=0,digitval=0,capital=0;
int *p;
p=arr;
for(int i=0;i<n;i++)
{

if((*p>='a')&&(*p<='z'))
{
alpha++;
}

if((*p>=0)&&(*p<=9))
{
digitval++;
}


if((*p>='A')&&(*p<='Z'))
{
capital++;
}

if((p[0]>=0)&&(p[0]<=9))
{
return false;
}

}

if((alpha>=4)&&(capital>=1)&&(digitval>=1))
{
return true;
}

else
{

return false;
}

}
};


int main()
{


int isize=0;


int arr[isize];
int *q=arr;
q=new int (4);



cout<<"enter array value";
for (int i=0;i<isize;i++)
{
cout<<"enter arrray";
cin>>arr[i];

}
fir obj;
bool bs=obj.fun(arr,isize);
cout<<bs;
return 0;
}
