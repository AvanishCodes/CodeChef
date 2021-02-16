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



void testCase()
{
    int n;
    cin>>n;
    vector<long> a(n);
    long minA, maxA;
    minA = LONG_MAX;
    maxA = LONG_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] > maxA)
            maxA = a[i];
        if(a[i] < minA)
            minA = a[i];
    }
    long long res = 2*abs((maxA - minA));
    cout<<res<<'\n';
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
    cin >> tc;      // Hide this line if there is only one test case
    while (tc--)    // For each test case
        testCase();
    return 0;
}