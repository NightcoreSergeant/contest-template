#include <iostream>
#include <string>
#include <random>
#include <chrono>
#define ll long long
#define endl "\n"
#define IOS cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
using namespace std;
//64bit
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
//32bit
//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll range(ll a,ll b){ //interval [a,b]
    return uniform_int_distribution<ll>(a,b)(rng);
}

const int N = 1;
const int M = 1;

int main(){
    IOS;

    return 0;
}
