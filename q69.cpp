
#include<iostream>
using namespace std;
int main()
{
int icnt=0;
string bh{"  h   i i nkkko kkk   "};
for(int i=0;i<bh.length();i++)
{
    if(bh[i]!=' ')
    {
        icnt++;
        while(bh[i]!=' ')
        {
            
            i++;
        }
    }
}
cout<<icnt;

return 0;
}
