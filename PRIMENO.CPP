#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int prime(int x,int num);
int i,n;
cout<<endl<<"Enter the range: ";
cin>>n;
for(i=2;i<=n;i++)
{
if(prime(2,i)==0)
{
cout<<i<<",";
}
}
getch();
}
int prime(int x,int num)
{
if(x==num)
{
return 0;
}
else
{
if(num%x==0)
{
return 1;
}
else
{
return prime(x+1,num);
}
}
}
