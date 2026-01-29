#include<iostream>
using namespace std;
class Solution {
public:
    vector<string> generateBinaryStrings(int n) {
        vector<string> s;
        helper(s, "", n);
        return s;
    }

    void helper(vector<string>& s, string curr, int n) {
        if (curr.size() == n) {
            s.push_back(curr);
            return;
        }

        // Always allowed to add '0'
        helper(s, curr + "0", n);

        // Add '1' ONLY if last character is not '1'
        if (curr.empty() || curr.back() != '1') {
            helper(s, curr + "1", n);
        }
    }
};
