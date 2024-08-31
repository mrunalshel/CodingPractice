#include<iostream>
using namespace std;

void pro(char ch[])
{
cout<<ch;
}

int main()
{
int icnt=0;
char ch[890];
cout<<"enter string";
scanf("%[^'\n']s",ch);
pro(ch);

return 0;

}