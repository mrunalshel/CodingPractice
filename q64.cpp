#include<iostream>
using namespace std;
int main()
{
    int icnt=0;
    string bf={"hi jii jiii ji hi"};//bf[0]=h  string len paryant successs
 
   
    for(int j=0;j<bf.length();j++)
    {
        if((bf[j]=='h')&&(bf[j+1]=='i')&&(bf[j+2]!='i'))
        {
            icnt++;
        }
    }
   
cout<<icnt;
    return 0;
}