#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
   ll n,k;
   cin>>n>>k;
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   } 
   deque<ll>mn,mx;
   ll j=0,cnt=0;
   for(int i=0;i<n;i++)
   {
     while (!mx.empty() && a[mx.back()]<=a[i])
     {
        /* code */
        mx.pop_back();
     }
     mx.push_back(i);
     while (!mn.empty() && a[mn.back()]>=a[i])
     {
        /* code */
        mn.pop_back();
     }
     mn.push_back(i);
     while (a[mx.front()] -a[mn.front()]>k) 
     {
        /* code */
        j++;
        if(mx.front()<j)mx.pop_front();
        if(mn.front()<j)mn.pop_front();
     }
     cnt+=(i-j+1);

     
     
     
   }
   cout<< cnt<<endl;
   

}
int main()
{
    int t=1;
    while (t--)
    {
       solve();
    }
    
}
