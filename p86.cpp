#include<iostream>
using namespace std;
int main()
{
int idum=0;

    for(int i=100;i<=160;i++)
    {

        if((i%3==0)&&(i%5==0))
        {
            idum=idum+i;
        }
    }

    cout<<idum;
    return 0;
}