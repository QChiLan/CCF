#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    if(T<=3500)
    {
        cout<<T<<endl;
        return 0;
    }
    for(i=3600; i<=200000; i+=100)
    {
        int s=0;
        if(i>=3600&&i<5000)
            s=s+(i-3500)*0.03;
        if(i>=5100&&i<=8000)
            s=s+(i-5000)*0.1+45;
        if(i>=8100&&i<=12500)
            s=s+(i-8000)*0.2+45+300;
        if(i>=12600&&i<=38500)
            s=s+(i-12500)*0.25+45+300+900;
        if(i>=38600&&i<=58500)
            s=s+(i-38500)*0.3+45+300+900+6500;
        if(i>=58600&&i<=83500)
            s=s+(i-58500)*0.35+45+300+900+6500+6000;
        if(i>=83600)
            s=s+(i-83500)*0.45+45+300+900+6500+6000+8750;
        if(i-s==T)
            cout<<i<<endl;
    }
    return 0;
}
