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

vector<int> searchRange(vector<int>& nums, int target) {
   vector<int> ans(2, -1); // Initialize ans with {-1, -1}
    
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            if (ans[0] == -1) {
                ans[0] = i; // First occurrence
            }
            ans[1] = i; // Last occurrence (updated continuously)
        }
    }
    
    return ans;
}

signed main() {
   vi a = {5,7,7,8,8,10}; int target = 8;
   vi result = searchRange(a,target);
   for(int i : result) cout << i << " ";
}
