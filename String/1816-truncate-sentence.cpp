class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream tokenStream(s);
        string tokens;
        string token;
        int i = 0;
        while (tokenStream >> token and i < k) {
            if (i < k - 1) tokens += token + " ";
            else tokens += token;
            i++;
        }

        return tokens;
    }
};