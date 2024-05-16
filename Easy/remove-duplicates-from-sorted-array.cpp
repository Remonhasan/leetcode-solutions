 // author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define all(a) a.begin(), a.end()
#define pb push_back
#define mp make_pair
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];

int removeDuplicates(vector<int>& nums) {
    auto it = unique(nums.begin(), nums.end());
    nums.erase(it, nums.end());
    return nums.size();
}

int main() {
  ios;
  vector < int > a(100);
  for(int i = 0; i < 100 ; i++) cin >> a[i];
  int uniqueCount = removeDuplicates(a);
  cout << uniqueCount << endl;
  
  return 0;
}