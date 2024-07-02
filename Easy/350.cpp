#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define lli long long int
#define vi vector < int >
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define brain for(int i=0;i<n;i++)
#define pb push_back
#define IS getline(cin, s);
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
  unordered_map<int, int> freq1, freq2;
  vector<int> result;
  
  // Count frequencies in nums1
  for (int num : nums1) {
      freq1[num]++;
  }
  
  // Count frequencies in nums2 and find intersection
  for (int num : nums2) {
      if (freq1.count(num) && freq1[num] > 0) {
          result.push_back(num);
          freq1[num]--;
      }
  }
  
  return result; 
}

signed main() {
  ios;
  vi a = {1,2,2,1}; vi b = {2,2};
  vi result = intersect(a,b); 
  for(int i : result) cout << i << " ";
  return 0;
}