#include <bits/stdc++.h>                                                    // Base Library to include all standard libraries of C++
using namespace std;                                                        // Use namespace to avoid calling a library each time you call a function or declare a class
#define read(type) readInt<type>()                                          // read an Integer fastly
#define write(type) writeInt<type>()                                        // Write an integer fastly
#define SCD(t) scanf("%d",&t)                                             // Scan a decimal Number
#define SCLD(t) scanf("%ld",&t)                                           // Scan a long decimal Number
#define SCLLD(t) scanf("%lld",&t)                                         // Scan a long long decimal Number
#define SCC(t) scanf("%c",&t)                                             // Scan a character
#define SCS(t) scanf("%s",t)                                              // Scan a string
#define SCF(t) scanf("%f",&t)                                             // Scan a floating point number
#define SCLF(t) scanf("%l",&t)                                          // Scan a long floating point number 
#define MEM(a, b) memset(a, (b), sizeof(a))                                 // Assign b to all values of a
#define FOR(i, j, k, inc) for (int i=j ; i<k ; i+=inc)                      // for loop implemented starting from j to less than k, incremented by inc(rement) 
#define RFOR(i, j, k, dec) for (int i=j ; i>=k ; i-=dec)                    // for loop implemented starting from j to less than k, decremented by dec(rement)
#define REP(i, j) FOR(i, 0, j, 1)                                           // for loop implemented starting from 0 to less than j, incremented by 1
#define RREP(i, j) RFOR(i, j, 0, 1)                                         // for loop implemented starting from j to more than 0, decremented by 1     
#define all(cont) cont.begin(), cont.end()                                  // All elements of container starting from the begining and till end
#define rall(cont) cont.end(), cont.begin()                                 // All elements of the container starting from the end and till the begining
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)       // For each iterator
#define MP make_pair                                                        // Make pair
#define PB push_back                                                        // Push back to a container
#define EB emplace_back                                                     // Emplace back to a container(faster and more efficient method)
#define INF (int)1e9                                                        // Works as infinite for integers
#define PI 3.1415926535897932384626433832795                                // Decimal value of PI
#define MOD 1000000007                                                      // Modulo value for most of the mathematical problems
#define mod MOD                                                             // So that modulo value works in either case
#define F first                                                             // First Element of a pair
#define S second                                                            // Second Element of a pair
typedef pair<int, int> PII;                                                 // Pair of integer and integer
typedef vector<int> VI;                                                     // Vector of Integers
typedef vector<string> VS;                                                  // Vector of Strings
typedef vector<PII> VII;                                                    // Vector of pairs of Integer and Integer
typedef vector<VI> VVI;                                                     // Vector of Vectors of Integers
typedef map<int,int> MPII;                                                  // Map of Integers and Integers
typedef set<int> SETI;                                                      // set of Integers
typedef multiset<int> MSETI;                                                // Multiset of Integers

/* Inline functions */
// Check if a number is even
inline bool isEven(int a){
    if(a&1)
        return false;
    return true;
}
// Check if the number is odd
inline bool isOdd(int a){
    if(a&1)
        return true;
    return false;
}
// Get the most significant digit of a decimal number
inline int MSD(int N){
    return floor(log10(N));
}
// Check if the number is a power of 2
inline bool isPowerOf2(int N){
    return N&& (!(N&(N-1))); 
}
/* End of Inline Functions */

template <typename T> inline void writeInt(T x)         // Write an integer on console
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = '\n';
    do
    {
        buf[--i] = x % 10 + '0';
        x/= 10;
    }while(x);
    do
    {
        putchar(buf[i]);
    }while (buf[i++] != '\n');
}
template <typename T> inline T readInt()                  // Read an Integer
{
    T n = 0, s = 1;
    char p = getchar();
    if(p == '-')
        s = -1;
    while ((p < '0' || p > '9') && p != EOF && p != '-')
        p = getchar();
    if(p == '-')
        s = -1, p = getchar();
    while(p >= '0' && p <= '9')
    {
        n = (n << 3) + (n << 1) + (p - '0');
        p = getchar();
    }
    return n * s;
}
void testCase()
{
    /* Sample Way to use FOR
        Code:    
            int i;
            FOR(i, 10, 100, 2)
                cout<<i<<' ';
        Output:
            10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 
            54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 
    */
    int start = 1;
    int n;
    cin>>n;
    int i;
    FOR(i, 2, 11, 1){
        if(n%i == 0)
            start=i;
    }
    cout<<start;
    return;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
    // online submission
    #endif
    int tc = 1;     // For number of test cases
    // cin >> tc;      // Hide this line if there is only one test case
    while (tc--)    // For each test case
        testCase();
    return 0;
}