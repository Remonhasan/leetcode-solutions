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


vector<int> findWordsContaining(vector<string>& words, char x) {
     vector<int> wordIndex; 
     for (int i = 0; i < words.size(); ++i) {
        if (find(words[i].begin(), words[i].end(), x) != words[i].end()) {
            wordIndex.push_back(i);
        }
    }

    return wordIndex;

}

int main() {
  ios;
  char c = 'e';
  vector<string> words = {"leet","code"};
  vector<int> wordIndex = findWordsContaining(words, c);
  for (int index : wordIndex) {
      cout << " " << index << endl;
  }

  return 0;
}