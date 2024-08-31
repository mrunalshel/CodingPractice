//find no of specific char in string//

#include<iostream>
using namespace std;
class hii
{
public:

int find (char ch[])
{
int co=0;
while (*ch!='\0')
{
if(*ch=='s')
{
co++;
}
ch++;
} 

return co;
}
};
int main()
{
char ch[]={'\0'};
int iret=0;
cout<<"enter string";
scanf(" %[^'\n']s",&ch);
hii obj;
iret=obj.find(ch);
cout<<iret;
}