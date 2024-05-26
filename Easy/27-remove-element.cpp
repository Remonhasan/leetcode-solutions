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
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


int removeElement(vector<int>& nums, int val) {
   nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
   return nums.size();
}

int main() {
  ios;
  vector<int> a = {0,1,2,2,3,0,4,2};
  cout << removeElement(a,2) << endl;

  return 0;
}