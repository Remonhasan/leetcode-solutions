// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector<int>
#define PR pair<int, int>
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
const int max_size = 3 * 10000;

int cnt[MAXN];

bool isPalindrome(const string& str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

void partitionHelper(const string& s, int start, vector<string>& current, vector<vector<string>>& result) {
    if (start == s.length()) {
        result.push_back(current);
        return;
    }
    
    for (int end = start; end < s.length(); ++end) {
        if (isPalindrome(s, start, end)) {
            current.push_back(s.substr(start, end - start + 1));
            partitionHelper(s, end + 1, current, result);
            current.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
   vector<vector<string>> result;
    vector<string> current;
    partitionHelper(s, 0, current, result);
    return result; 
}

int main() {
    ios;
    string s1 = "aab";
    string s2 = "a";

    vector<vector<string>> result1 = partition(s1);
    vector<vector<string>> result2 = partition(s2);

    cout << "Example 1:" << endl;
    for (const auto& partition : result1) {
        cout << "[";
        for (const string& str : partition) {
            cout << "\"" << str << "\", ";
        }
        cout << "]" << endl;
    }

    cout << endl << "Example 2:" << endl;
    for (const auto& partition : result2) {
        cout << "[";
        for (const string& str : partition) {
            cout << "\"" << str << "\", ";
        }
        cout << "]" << endl;
    }

    return 0;
}