// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector<int>
#define PR pair<int, int>
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
const int max_size = 3 * 10000;

int cnt[MAXN];

int arrayPairSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int maxSum = 0;

    for (int i = 0; i < n / 2; ++i) {
        maxSum += min(nums[2 * i], nums[2 * i + 1]);
    }

    return maxSum; 
}

int main() {
    ios;
    vector<int> nums = {1, 4, 3, 2};
    cout << arrayPairSum(nums) << endl;

    return 0;
}
