#include <iostream>
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

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
  vector<int> mergeArray; 
  for(int i=0;i<nums1.size();i++) mergeArray.push_back(nums1[i]);
  for(int i=0;i<nums2.size();i++) mergeArray.push_back(nums2[i]);
  sort(mergeArray.begin(),mergeArray.end());

  int n = mergeArray.size(); double medianValue;

  if (n % 2 == 1) {
        medianValue = mergeArray[n / 2];
    } else {
        int midIndex1 = n / 2 - 1;
        int midIndex2 = n / 2;
        medianValue = (mergeArray[midIndex1] + mergeArray[midIndex2]) / 2.0;
    }
    
    return medianValue;
}


signed main() {
  vi a = {1,2};
  vi b = {3,4};
  cout << findMedianSortedArrays(a,b) << nl;

  return 0;
}
