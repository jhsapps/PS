#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();
    
    TC{
        int n;
        cin >> n;

        string r, b;
        cin >> r >> b;

        int cr, cb;
        cr = cb = 0;

        rep(i, 0, n){
            if((r[i]-'a') > (b[i]-'a')) cr++;
            else if((r[i]-'a') < (b[i]-'a')) cb++;
        }

        if(cr > cb) cout << "RED\n";
        else if(cr < cb) cout << "BLUE\n";
        else cout << "EQUAL\n";
    }
}