//## Shakib Hossen Shanto
//## CSE,BRUR 

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define frn(n)      for(ll i=0;i<n;i++)
#define flp(a,b)    for(ll i=a;i<=b;i++)
#define test        ll tes; cin>>tes; while(tes--)
#define nn          "\n"
#define yes         cout<<"Yes\n"
#define no          cout<<"No\n"
#define csn(cas)    cout<<"Case "<<cas<<": "

ll ncr(ll n,ll r){
    //first read the Combination part from
    //Mahbubul Hasan Shanto's Book
    ll a=1,b=1;
    r = min(r,n-r);

    //nC0 = 1 ,so
    if(r==0) a =1;
    else{
        //katakati
        while(r>0){
            a*=n; b*=r;
            ll kata = __gcd(a,b);
            a/=kata;
            b/=kata;
            // we know the flow , n*(n-1)*(n-2).....*1
            n--; r--;
        }
    }
    //If every elemnent cuts, ans is the remaining upperside.
    //Because downside all elements will be vanished,So
    return a;
}

void solve()
{
    ll n,m;
    while(true){
        cin>>n>>m;
        if(n==0 && m==0) break;
        else {
            cout<<n;
            cout<<" things taken "<<m;
            cout<<" at a time is "<<ncr(n,m);
            cout<<" exactly."<<nn;
        }
    }
}

//####  Main Function

int main()
{
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();    return 0;
}
