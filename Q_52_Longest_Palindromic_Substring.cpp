#include <iostream>
using namespace std;

bool isPalindrome(string s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

string longestPalindrome(string s) {
    int n = s.length();
    string ans = "";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j)) {
                if (j - i + 1 > ans.length()) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindrome(s);
}