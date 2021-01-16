#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================


//To count numbers of digits in a number
ll countDigits(ll n)
{
    return floor(log10(n) + 1);
}

//To find greatest common divisor of two numbers
ll gcd (ll a, ll b)
{
   if(b==0)
     return a;
   else
     return gcd(b,a%b);
}

//To find LCM of two numbers
ll lcm(ll a, ll b)
{
   return (a*b)/gcd(a,b);
}

//To check if a number is prime or not
bool isPrime(ll n)
{
   if(n==1)
     return false;
   if(n==2||n==3||n==5)
     return true;
   if(n%2==0||n%3==0)
     return false;
   for(ll i=5;i*i<=n;i=i+6)
   {
      if(n%i==0||n%(i+2)==0)
        return false;
   }
   return true;
}

//To find power n of x
ll power(ll x, ll n)
{
   if(n==0)
     return 1;
   ll temp = power(x,n/2);
   temp = temp*temp;
   if(n%2==0)
     return temp;
   else
     return temp*x;
   
}

//To count no. of set bits in a number
ll setBits(ll n)
{
   ll res=0;
   while(n>0)
   {
     n=(n&(n-1));
     res++;
   }
  return res;
}

vi g[N];
ll A[N];
ll n, m, k;
//=======================

void solve() {
  cin >> n >> m;
  
    
  int i=0;
  fo(i,n)
  {
     
  }
  
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
} 
