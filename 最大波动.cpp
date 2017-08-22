#include<iostream>
#include<algorithm>
int a[1005];
using namespace std;
int main()
{
    int n,Max=0,maxx=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<=n-1; i++)
    {
         maxx=max(maxx,abs(a[i]-a[i-1]));
    }
    cout<<maxx<<endl;
    return 0;
}
