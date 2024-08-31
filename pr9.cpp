#include<iostream>
using namespace std;
class fina
{
public:
void rev(char arr[])
{
char *p=arr;
char brr[50];
int a=0;
int i=0;
while(arr[i]!='\0')
{
p++;
i++;

}


while(i>0)
{
brr[a]=arr[i];
a++;
p--;
i--;
}

}

};
int main()
{
char arr[10];
printf("enter string");

scanf(" %[^'\n']s",&arr);
fina obj;
obj.rev(arr);


return 0;
}