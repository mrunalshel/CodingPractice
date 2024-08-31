#include<iostream>
using namespace std;
int main()
{
    int arr[90]={99,56,70};
    int icnt=0;
    for(int i=0;i<=2;i++)
    {
        if((arr[i]%10)==0)
        {
            icnt++;
        }
    }

    cout<<icnt;
}