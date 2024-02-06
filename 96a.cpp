#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1] && s[i]==1 )
        {
          count1++;
        }
        if(s[i]==s[i+1] && s[i]==0 )
        {
          count2++;
        }


    }
    if(count1>=7 )
    {
        cout<<"YES";
    }
    else if(count2>=7 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
