#include<iostream>
using namespace std;
int main()
{


    int ino1=2,ino2=4,gcd=0;

    for(int i=1;i<=ino1*10;i++)
    {

        if((i%ino1==0)&&(i%ino2==0)>gcd)
        {
            gcd=i;
            break;
        }
    }

    cout<<gcd;
}