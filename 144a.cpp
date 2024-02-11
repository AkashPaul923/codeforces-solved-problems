#include<iostream>
using namespace std;
int main()
{

    int a,mx=0,mn=101,maxi,mini;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
            maxi=i;
        }
        if(arr[i]<=mn)
        {
            mn=arr[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(a-1)-mini;
}
