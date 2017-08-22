#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char isbn[20];
    int num[10];
    int sum;
    char ch;
    while(~scanf("%s",isbn))
    {
        sum=0;
        num[0]=isbn[0]-'0';
        num[1]=isbn[2]-'0';
        num[2]=isbn[3]-'0';
        num[3]=isbn[4]-'0';
        num[4]=isbn[6]-'0';
        num[5]=isbn[7]-'0';
        num[6]=isbn[8]-'0';
        num[7]=isbn[9]-'0';
        num[8]=isbn[10]-'0';
        num[9]=isbn[12]-'0';
        for(int i=0,j=1; i<9; i++,j++)
            sum+=num[i]*j;
    }
    sum%=11;
    if(sum<10)
        ch=sum+'0';
    else
        ch='X';
    if(ch==isbn[12])
        puts("Right");
    else
    {
        isbn[12]=ch;
        puts(isbn);
    }
    return 0;
}



