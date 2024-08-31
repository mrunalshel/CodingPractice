#include<iostream>
using namespace std;

int fun()
{
int arr[5]={1,2,2,4,4};
int pair=0,icnt=0;
for(int i=0;i<5;i++)
{

    for(int j=0;j<5;j++)
    {
        if((arr[i]==arr[j])&&(i!=j))
        {
            icnt++;
        }
    }

    
}

pair=icnt/2;
return pair;
}
int main()
{
cout<<fun();
return 0;
}