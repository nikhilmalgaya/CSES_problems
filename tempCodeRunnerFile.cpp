#include <iostream>
#include <map>
#include <string>
using namespace std;

string reorder_to_palindrome(const string &s) {
    map<char, int> char_count;

    for (char c : s) {
        char_count[c]++;
    }

    string first_half;
    char odd_char = '\0';
    int odd_count = 0;

    for (const auto &pair : char_count) {
        char c = pair.first;
        int count = pair.second;

        if (count % 2 != 0) {
            odd_count++;
            odd_char = c;
        }
        
        first_half.append(count / 2, c);
    }

    if (odd_count > 1) {
        return "NO SOLUTION";
    }

    string second_half = string(first_half.rbegin(), first_half.rend());

    if (odd_count == 1) {
        return first_half + odd_char + second_half;
    } else {
        return first_half + second_half;
    }
}

int main() {
    string input;
    cin >> input;

    string result = reorder_to_palindrome(input);
    cout << result << endl;

    return 0;
}
