#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define M 1000000007
const int M=998244353;

#define pb push_back
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define all(x) (x).begin(), (x).end()
#define ll             long long
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            ll x; cin>>x; while(x--)
#define google cout << "Case #" << test_num << ": "
#define hi(x)           cout<<"hi"<<x<<endl;
#define ACC(v)          accumulate(v.begin(),v.end(),0ll)

#ifndef ONLINE_JUDGE
#include "debug.hpp"
#else
#define pr(...){}
#define debarr(a,n){}
#define debmat(mat,row,col){}
#endif

long long mod(long long x){
   return ((x%M + M)%M);
}
long long add(long long a, long long b){
   return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
   return mod(mod(a)*mod(b));
}
    
ll modPow(ll a, ll b){
   if(b==0)
         return 1LL;
   if(b==1)
         return a%M;
   ll res=1;
   while(b){
         if(b%2==1)
            res=mul(res,a);
         a=mul(a,a);
         b=b/2;
   }
   return res;
}

const int N=2e5+2;
int fact[N];

void precalc(){
   fact[0]=1;
   for(int i=1;i<N;i++){
         fact[i]=mul(fact[i-1],i);
   }
}

ll inv(ll x){
   return modPow(x,M-2);
}

ll divide(ll a, ll b){
   return mul(a,inv(b));
}

ll nCr(ll n, ll r){
   precalc();
   return divide(fact[n], mul(fact[r], fact[n - r]));
}


void solve()
{
   
}

int32_t main()
{
  fast;
  #ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  //w(t)
  solve();
  
}
 

