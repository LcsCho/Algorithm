#include <bits/stdc++.h> 
using namespace std; 

bool isGroupWord(const string& word) {
    vector<bool> visited(26, false);
    char prevChar = '\0';

    for (char c : word) {
        if (prevChar != c) {
            if (visited[c - 'a']) {
                return false;
            }
            visited[c - 'a'] = true;
            prevChar = c;
        }
    }

    return true;
}

int countGroupWords(int N, const vector<string>& words) {
    int count = 0;

    for (const string& word : words) {
        if (isGroupWord(word)) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

    int result = countGroupWords(N, words);
    cout << result << endl;

    return 0;
}