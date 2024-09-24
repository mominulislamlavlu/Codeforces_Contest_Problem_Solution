#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int open=0,close=0;
    int n= s.size();

    if(n%2!=0)
    {
        cout<< "NO"<<endl;
        return;
    }
    if(s[0]== ')'  || s[n-1]=='(')
    {
        cout<< "NO"<<endl;
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='(' ))
        {
            open++;
            close++;
        }
        else if(s[i]==')')
        {
            open=max(0,open-1);
            close--;
        }
        else
        {
             open=max(0,open-1);
             close++;

        }
            if(close<0)
    {
        cout<< "NO"<<endl;
        return;
    }
    }


    if(open==0)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }


}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}
