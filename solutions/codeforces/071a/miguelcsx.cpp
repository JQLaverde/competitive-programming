/*
 * Way too long words
 * miguelcsx.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] << word.size() -2 << word[word.size() - 1] << "\n";
        }
        else {
            cout << word << "\n";
        }
    }

    return 0;
}