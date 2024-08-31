#include<iostream>
//count digit addition
using namespace std;
int main()
{
    int ino1=45;
    int ino2=34;                     
    int ur=0,icnt=0,sumn=0,imod1=0,imod2=0;
    while((ino1>0)&&(ino2>0))
    {


imod1=ino1%10;
imod2=ino2%10;

int sum= imod1+imod2+ur;

if((sum>9)&&(ino1>=10)&&(ino2>=10))
{
  icnt++;
  ur=(imod1+imod2)/10;
}

ino1=ino1/10;
ino2=ino2/10;
    }

      
    

    cout<<icnt;
}