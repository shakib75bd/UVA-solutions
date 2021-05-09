//## Shakib Hossen Shanto
//## CSE,BRUR 

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define frn(n)      for(int i=0;i<n;i++)
#define flp(a,b)    for(int i=a;i<=b;i++)
#define test        ll tes; cin>>tes; while(tes--)
#define nn          "\n"
#define yes         cout<<"YES\n"
#define no          cout<<"NO\n"
#define csn(cas)    cout<<"Case "<<cas<<": "

int bgm(int a, int n, int b){
    if(n==0) return 1%b;

    if(n%2==0){
        int ans = bgm(a,n/2,b);
        return (ans*ans)%b;
    }
    else{
        int ans = bgm(a,n-1,b);
        return (ans*(a%b))%b;
    }
}

void solve()
{
    int a,n,b;
    while(cin>>a>>n>>b){
        cout<<bgm(a,n,b)<<nn;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();    return 0;
}
