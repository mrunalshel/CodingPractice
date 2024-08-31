
#include<iostream>
using namespace std;


int main()
{
    
char arr[20]={"jjjhhkkkk"};
char icnar;
int icnt=0,imin=10;

for(int i=0;i<20;i++)
{
    icnt=0;
    for(int j=0;j<20;j++)
    {
        if((arr[i]==arr[j])&&(i!=j))
        {
            icnt++;
        }
    }
    
    if((icnt%2!=0)&&(imin>icnt))
    {

        
        icnar=arr[i];
        imin=icnt;
        
    }

}

    cout<<icnar;
return 0;
}
 