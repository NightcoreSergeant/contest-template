#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define endl "\n"
#define IOS cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
#define X first
#define Y second
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set; //insert *find_by_order order_of_key
typedef pair<int,int> par;
const int mod = 1e9+7;
int MSB(unsigned x){ //most significant bit-read IEEE 754
	union { double a; int64_t b; };
	a = x;
	return (b >> 20) - 1023;
}
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

ll bpow(ll a,ll b){ll s=1;while(b){if(b&1)s*=a;a*=a;b>>=1;}return s;}
ll bmpow(ll a,ll b){ll s=1;while(b){if(b&1)s*=a,s%=mod;a*=a;a%=mod;b>>=1;}return s;}



int main(){
    IOS;


}
