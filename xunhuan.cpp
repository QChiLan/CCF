#include<iostream>
#define max 50
using namespace std;
int main()
{
    int n,num[max],*p;
    int k=0,m=0,i=0;//k����ɾ����m����ʣ��һ���ˣ�i����ѭ��
    cin>>n;
    p=num;
    for(int j=0; j<n; j++)
    {
//        cin>>x;
        *(p+j)=j+1;
    }
    while(m<n-1)
    {
        if(*(p+i)!=0)
            k++;
        if(k==3)
        {
            *(p+i)=0;
            k=0;
            m++;
        }
        i++;
        if(i==n)
            i=0;
    }
    while(*p==0)
    {
        p++;
//        cout<<*p<<endl;
    }
    cout<<*p<<endl;
    return 0;
}
