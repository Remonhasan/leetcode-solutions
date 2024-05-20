// author: remonHasan
#include<bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAX_SIZE = 3 * 10000;

int findUniqueElement(vector<int>& vec) {

    int unique = 0;
    for (int num : vec) {
        unique ^= num;
    }

    return unique;
}

int main() {
  ios;
  vector<int>a(MAX_SIZE);
  for(int i = 0; i < MAX_SIZE; i++ ) cin >> a[i];
    
  int uniqueElement = findUniqueElement(a);
  cout << uniqueElement << endl;

  return 0;
}