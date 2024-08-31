#include<iostream>
using namespace std;


int main()
{
    string ab="cPd";
    string bb="Cgh";
int icnt=0,i=0,j=0;




if((bb[j]-32==ab[i])||(bb[j]+32==ab[i]))
{
    icnt++;
    i++;
    j++;
}

cout<<icnt;
}
