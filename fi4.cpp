#include<iostream>
using namespace std;
int main()
{
int i=0;
char c[]="hhhhh";
char  *p=c;
while(*p!='\0')
{
i++;
p++;

}
cout<<i;
return 0;
}