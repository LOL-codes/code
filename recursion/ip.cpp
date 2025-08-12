#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool valid(string s) {
    if (s.empty() || s.size() > 3) return false;
    if (s[0] == '0' && s.size() > 1) return false; // leading zero
    int val = stoi(s);
    return val >= 0 && val <= 255;
}

void ip(string s, int idx, int dots, string curr, vector<string> &res) {
    if (dots == 3) {
        string lastPart = s.substr(idx);
        if (valid(lastPart)) {
            res.push_back(curr + lastPart);
        }
        return;
    }

    for (int len = 1; len <= 3; ++len) {
        if (idx + len > s.size()) break;
        string part = s.substr(idx, len);
        if (valid(part)) {
            ip(s, idx + len, dots + 1, curr + part + ".", res);
        }
    }
}

vector<string> rec(string s) {
    vector<string> res;
    ip(s, 0, 0, "", res);
    return res;
}

int main() {
    string s = "25525511135";
    vector<string> result = rec(s);

    for (string ip : result) {
        cout << ip << endl;
    }
}
