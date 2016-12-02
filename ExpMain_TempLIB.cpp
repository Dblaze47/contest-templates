/*Contestant Name: Manosh Talukder
Template Purpose: For general contest & speed testing.*/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <map>
#include <set>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <bitset>
using namespace std;

#define pf printf
#define sf scanf
#define sqr(x) ((x)*(x))
#define root(x_) sqrt((double)x_)
#define itr iterator


/* FOR INPUT : */
#define RI(x_) sf("%d", &x_)
#define RLL(n_) sf("%lld", &n_)
#define RCH(a_) sf("%c", &a_)
#define RFL(d_) sf("%lf", &d_)
#define GOT(s_) getline(cin , s)
#define FGET(st_, n_) fgets(st_, n_, stdin)
#define RF() freopen("in.txt", "r", stdin);

/* FOR OUTPUT : */
#define NL pf("\n")
#define endl pf("\n")
#define PS(t_) cout << t_ << endl
#define SET(x_ , i_) memset((x_), (i_), sizeof(x_))
#define STOI(_s, x) istringstream ss (_s); ss >> x;
#define PSLF(d_, n)  cout<<fixed<<setprecision(d_)<<n<<endl;
#define WF() freopen("out.txt", "w", stdout);

/* LOOPS :*/
#define loop(a , n_) for(i = (a); i < n; i++)
#define rloop(i, a, b) for(i = (b); i >= (a); i--)

/* FOR DEBUGGING : */
#define DBUG(x_) cout << x_ << endl
#define CHK cout << "Running Code...." << endl
#define TIMER high_resolution_clock::time_point
#define TIMEON high_resolution_clock::now()

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef map<int,int> MPII;
typedef map<string,int> MPSI;
typedef map<string,string> MPSS;
typedef map<int,bool> MPIB;
typedef stringstream SS;
typedef priority_queue<int> PQMX;
typedef priority_queue<int , vector<int> , greater<int>> PQMN;
typedef multiset<int> MSI;
typedef multiset<string> MSS;

const double PI = (2 * acos(0.0));
const int NINF = ((1<<29)*(-1));
const int INF = (1<<29);
const long long MOD = ((1e9) + 7);
const double EPS = (1e-9);

namespace MANOSH{
template <class T> inline void PARR(T* arr, int n){for(int i = 0; i<n; i++){cout << arr[i] << " ";} NL;}
template <class T> inline void SCAR(T* a, T* b){for(; a < b; a++){cin >> *a;}}
template <class T> inline T ABS(T& a){return a < 0 ? (a * (-1)) : (a) ;}
template <class T> inline T MAX(T& a, T& b){return (a) > (b) ? (a) : (b);}
template <class T> inline T MIN(T& a, T& b){return (a) < (b) ? (a) : (b);}
template <class T> inline void SWAP(T& a, T& b){a = a^b; b = a^b; a = a^b;}

inline int GCD(int a, int b){if(b == 0) return a; return GCD(b, a % b);}
inline int LCM(int a, int b){return ((a*b)/GCD(a, b));}
inline int FXS(char* ch, int len){if(ch[len-1]!='\0'){ch[len-1] = '\0'; len--;} return len;}
inline int REVN(int n){int rem = 0, rev = 0; while(n){rem = n % 10; rev = (rev * 10) + rem; n /= 10;} return rev;}
inline int fib(int n){if(n < 3)return 1; return fib(n-1)+fib(n-2);}

inline bool CKPR(int n){int i; LL sqrtN = root(n); for(i = 2; i < sqrtN; i++){if(n % i == 0){break;}} return (i == n);}
inline bool SPAL(string s){int i,j; for (i= 0, j = s.size()-1; i < j; i++ , j--){if (s[i] == s[j]) continue; else break;} return (i >= j);}
inline bool IPAL(int n){int rev= 0, bu = n; while(bu){rev = ( bu % 10 ) + rev * 10; bu /= 10;} return rev == n;}
inline bool cmp(int& a, int& b){return a > b;}

inline string REVS(string s){int i = 0, j = s.size()-1; for(; i<j; i++, j--){SWAP(s[i], s[j]);} return s;}
}
using namespace MANOSH;

void SOLUTION()
{
    int Case = 1, T;
    RI(T);
    while(T--)
    {
        
      pf("Case %d: %d", Case++, ans);  
    }

}

/*
SAMPLE INPUTS:



*/

int main () {
    SOLUTION();
    return 0;
}


