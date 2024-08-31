#include<iostream>
#include<stdbool.h>
using namespace std;
class prime
{
public:
bool check(int ino)
{
int icnt=0;
for(int i=1;i<=ino;i++)
{
if(ino%i==0)
{
icnt++;
}
}

if(icnt>2)
{
return false;
}

else
{
return true;
}
}
};

int main()
{
prime obj;
bool ans=obj.check(13);
if(ans==true)
{
cout<<"no is prime";
}
else
{
cout<<"no is not prime";
}
return 0;
}