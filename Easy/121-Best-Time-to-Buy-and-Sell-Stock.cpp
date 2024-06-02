// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


int maxProfit(vector<int>& prices) {
  int lowest = numeric_limits<int>::max();
  int maxProfit = 0;

  for (int price : prices) {
    if (price < lowest) {
        lowest = price;
    } else if (price - lowest > maxProfit) {
        maxProfit = price - lowest;
    }
  }

  return maxProfit;
}

int main() {
  ios;
  vector<int>prices = {7,1,5,3,6,4};
  cout  << maxProfit(prices) << endl;
  
  return 0;
}