// author : remonhasan
#include<bits/stdc++.h>
#include <unordered_map>
#include <string>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int longestPalindrome(const std::string& s) {
    unordered_map<char, int> charCount;

    for (char c : s) {
        charCount[c]++;
    }

    int length = 0;
    bool hasOdd = false;

    // Calculate the length of the longest palindrome
    for (const auto& pair : charCount) {
        if (pair.second % 2 == 0) {
            length += pair.second; 
        } else {
            length += pair.second - 1; 
            hasOdd = true; 
        }
    }

    // If there's any character with an odd count, add 1 for the central character
    if (hasOdd) {
        length += 1;
    }

    return length;
}

int main() {
    ios;
    string s; cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}
