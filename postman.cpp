
#include <bits/stdc++.h>
#define MP make_pair
#define F first
#define S second
#define MAX 1000
using namespace std;
typedef pair< int, int > p;
typedef long long ll;

int main() {
    int n, k;
    vector< p > v;
    cin >> n >> k;
    for (int i=0; i < n; ++i) {
        int x, m;
        cin >> x >> m;
        v.push_back( MP(x,m) );
    }
    sort(v.begin(), v.end());   
}