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

bool isPalindrome(int x) {
    string a = to_string(x);
    string str_rev = a;
    reverse(str_rev.begin(),str_rev.end());
    if(a == str_rev){
        return true;
    }else{
        return false;
    }
}

int main() {
  ios;
  int n; 
  cin >> n;
  cout << isPalindrome(n) << endl;
  
  return 0;
}