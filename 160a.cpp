#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s1=0,s2=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    s1=s1/2;
    sort(a,a+n);
    for(int j=n-1;j>=0;j--)
    {
        s2=s2+a[j];
        c++;
        if(s1<s2)break;
    }
    cout<<c;
}
