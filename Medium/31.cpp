// author: remonhasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define nIn int n; cin >> n;
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void nextPermutation(vector<int>& nums) {
   next_permutation(nums.begin(),nums.end());
   for(int i : nums) cout << i << " ";     
}

signed main() {
    vi a = {1,2,3};
    nextPermutation(a);
}
