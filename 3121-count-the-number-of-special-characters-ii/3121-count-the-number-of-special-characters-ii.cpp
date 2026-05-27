class Solution {
public:
    int numberOfSpecialChars(string w) {

        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);
        int n = w.size();

        for (int i = 0; i < n; i++) {
            if (islower(w[i])) lastLower[w[i] - 'a'] = i;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (isupper(w[i])) firstUpper[w[i] - 'A'] = i;
        }

        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (lastLower[i] != -1 && firstUpper[i] != -1 && lastLower[i] < firstUpper[i]) cnt++;
        }

        return cnt;
    }
};