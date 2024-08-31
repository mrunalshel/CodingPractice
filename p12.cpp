
#include<iostream>
using namespace std;
int fun()
{
char arr[80]={"a98A"};
char sl='/';
char space=' ';
int icnt=0,icapital=0,inum=0;

for(int i=0;i<6;i++)
{

if((arr[i]>='0')&&(arr[i]<='9'))
{
    inum++;
    icnt++;
}

else if((arr[i]>='A')&&(arr[i]<='Z'))
{
    icnt++;
    icapital++;
}

else if((arr[i]>='a')&&(arr[i]<='z'))
{
    icnt++;
}

else if((arr[0]>='0')&&(arr[0]<='9'))
{
    
    break;
}

else if((arr[i]==space)||(arr[i]==sl))
{
    
   break;

}
}

if((icnt>=4)&&(inum>=1)&&(icapital>=1))
{
    return 1;
}

else{
    return 0;
}

}
int main()
{
int r=0;
cout<<fun();

}