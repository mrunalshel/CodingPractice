#include<iostream>
using namespace std;
bool chk(int ino)
{
int icnt=0;
for(int i=1;i<=ino;i++)
{
if(ino%2==0)
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

int main()
{

bool iret=chk(28);
if(iret==true)
{
cout<<"no is prime";
}
else
{
cout<<"no is not prime";
}
return 0;
}