
#include<iostream>
using namespace std;


int main()
{
    int icnt=0,e=3;
string st={"di, dif difd"};

    for(int j=0;j<st.length();j++)
    {
        if((st[j]=='d')&&(st[j+1]=='i')&&(st[j+2]=='f'))
        {
icnt++;

        }
    }

cout<<icnt;
return 0;
}
 