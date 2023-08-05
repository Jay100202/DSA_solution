#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")
using namespace std;

//define shortcuts
typedef long long ll;
#define PI 3.141592653589793238462643383279502884L
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL);
#define pb push_back
#define fo(i, a, n) for (ll i = a; i < n; i++)
#define rfo(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ro(i,n) for (ll i = 0;i<n;i++)
#define endl "\n"
#define all(a) a.begin(), a.end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz size
#define fi first
#define se second
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define si set<int>
#define sll set<ll>
#define spii set<pii>
#define vi vector<int>
#define vd vector<double>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define vvi vector<vector<int>>
#define vvpii vector<vector<pii>>
#define vb vector<bool>
#define vvb vector<vb>
#define mp make_pair
#define vvll vector<vll>
#define vsi vector<si>
#define ite(a) for (auto &x : a)
#define read(a) ite(a) cin >> x;
#define in(x)              \
    ;                      \
    {                      \
        for (auto &to : x) \
            cin >> to;     \
    }
#define out(x)                 \
    ;                          \
    {                          \
        for (auto &to : x)     \
            cout << to << " "; \
        cout << '\n';          \
    }

#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define cp2(x)          (__builtin_popcountll(x)==1)
#define lp2(x)          (__builtin_ctzll(x))

// DEBUG FUNCTIONS START
void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void deb() {cerr << "\n";}
template <typename T, typename... V> void deb(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; deb(v...);}
// DEBUG FUNCTIONS END

// Operator overloads 
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){ for (auto &it : v)  cin >> it;  return istream; }
 
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args) { cout << t << " ";  print(forward<Args>(args)...); }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

template<typename T>void __p(std::vector<T> v);
template<typename T>void __p(T a){cout<<a;}
template<typename T, typename F>void __p(pair<T, F> a){cout<<"{";__p(a.first);cout<<",";__p(a.second);cout<<"}";}
template<typename T>void __p(std::vector<T> a) {cout<<"{";for(auto it=a.begin(); it<a.end(); it++)__p(*it),cout<<",}"[it+1==a.end()];}
template<typename T>void __p(std::set<T> a){cout<<"{";for(auto it=a.begin(); it!=a.end();){__p(*it); cout<<",}"[++it==a.end()];}}
template<typename T>void __p(std::multiset<T> a){cout<<"{";for(auto it=a.begin(); it!=a.end();){__p(*it); cout<<",}"[++it==a.end()];}}
template<typename T, typename F>void __p(std::map<T,F> a){cout<<"{\n";for(auto it=a.begin(); it!=a.end();++it){__p(it->first);cout << ": ";__p(it->second);cout<<"\n";}cout << "}\n";}
template<typename T, typename ...Arg>void __p(T a1, Arg ...a){__p(a1);__p(a...);}
template<typename Arg1>void __f(const char *name, Arg1 &&arg1){cout<<name<<" : ";__p(arg1);cout<<endl;}
template<typename Arg1, typename ... Args>void __f(const char *names, Arg1 &&arg1, Args &&... args) {int bracket=0,i=0;for(;; i++)if(names[i]==','&&bracket==0)break;else if(names[i]=='(')bracket++;else if(names[i]==')')bracket--;const char *comma=names+i;cout.write(names,comma-names)<<" : ";__p(arg1);cout<<" | ";__f(comma+1,args...);}

//********CLOCK********
ll begtime = clock();
#define time() cerr << "\n\nTime elapsed: " << (clock() - begtime)*1000/CLOCKS_PER_SEC << " ms\n\n";
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//********CLOCK********
 


//functions
ll min(ll x, ll y)
{
    if (x > y)
        return y;
    else
        return x;
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void google(int t) { cout << "Case #" << t << ": "; }
/*
vector<bool> checkIfPrime(1e5+2, true);
vector<ll> allPrimes;
void sieve(int n)
{
checkIfPrime[0] = 0;
    checkIfPrime[1] = 0;
    for (int i = 2; i <= n; i++)
        if (checkIfPrime[i] == true)
        {
            allPrimes.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
            {
                checkIfPrime[j] = false;
            }
        }
    //out(allPrimes);
}*/

ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll ceiling(ll n, ll m)
{
    if (n % m == 0)
        return n / m;
    else
        return n / m + 1;
}
ll fact(ll n)
{
     ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll nCr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
bool isprime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
bool cmpair(const pair<int, int> &a,
         const pair<int, int> &b)
{
    if(a.second != b.second)
        return a.first < b.first;
    else
    {
        return a.second < b.second;
    }
}
ll gcd(ll a, ll b)
{
    while (b != 0) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

const ll INFLL = 1e18;
const int MAXN = 1e6 + 100;
const ll INF = 1e9;
const int M = 1e9 + 7;
const int N = 1e5 + 1;


ll minSteps(string& a, string& b)
{
    ll n = a.length(), ans = 0;
    ll count[256];
    memset(count, 0, sizeof(count));
    for(ll i = 0; i < n; i++)
    {
       count[b[i]]++;
    }
    for (ll i = 0; i < n; i++)   
    {
       count[a[i]]--;        
    }
    for (ll i = 0; i< 256; i++)  
    {
      if (count[i])
         return -1;
    }
    for (ll i = n - 1, j = n - 1; i >= 0; )
    {
        while (i >= 0 && a[i] != b[j])
        {
i--;
            ans++;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return ans;
}
class Solution {
public:

    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0,high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &arr, int n, int x){
        int low = 0,high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int lb = lowerBound(nums,n,target);
        if(lb == n || nums[lb] != target){
            return {-1,-1};
        }
        else{
            return {lb, upperBound(nums,n,target) - 1};
        }

        // linear search
        // int first = -1,last = -1;
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[i] == target){
        //         if(first == -1){
        //             first = i;
        //         }
        //         last = i;
        //     }
        // }
        // return {first,last};
    }
};