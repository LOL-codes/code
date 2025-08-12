#include <iostream>
#include <vector>
using namespace std;

void generate(int n, int open, int close, string current, vector<string> &result) {
    if (open == n && close == n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generate(n, open + 1, close, current + "(", result);
    }
    if (close < open) {
        generate(n, open, close + 1, current + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generate(n, 0, 0, "", result);
    return result;
}

int main() {
    int n = 3;
    vector<string> ans = generateParenthesis(n);

    for (auto &s : ans) {
        cout << s << endl;
    }
}
