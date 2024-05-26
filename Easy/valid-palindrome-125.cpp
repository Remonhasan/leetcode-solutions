// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > a;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define pb push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


bool solve() {

	string s; IS 

	// Remove non-alphanumeric characters
	s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
	    return !isalnum(static_cast<unsigned char>(c));
	}), s.end());

	// Convert to lowercase
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    string reverseString = s;
    reverse(reverseString.begin(), reverseString.end());
    
   return s == reverseString;
}

int main() {
  ios;
 cout << (solve() ? "true" : "false") << endl;

  return 0;
}