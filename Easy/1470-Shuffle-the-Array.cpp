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


vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> firstArray(nums.begin(), nums.begin() + n);
    vector<int> secondArray(nums.begin() + n, nums.end());
    vector<int> shuffledArray;

    for (int i = 0; i < n; ++i) {
        shuffledArray.push_back(firstArray[i]);
        shuffledArray.push_back(secondArray[i]);
    }
    
    return shuffledArray; 
}

int main() {
  ios;
  int n = 3;
  vector<int> nums  = {2,5,1,3,4,7};
  vector<int> finalArray = shuffle(nums, n);
  for (int num  : finalArray) {
      cout << " " << num  << endl;
  }

  return 0;
}