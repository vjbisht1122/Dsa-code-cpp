#include <iostream>
#include <string>
#include <cctype>
using namespace std;



bool palindromeString(string s) {
    int st = 0;
    int end = s.size() - 1;

    while (st <= end) {

        if (!isalnum(s[st])) {
            st++;
            continue;
        }

        if (!isalnum(s[end])) {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main() {
    string s = "appappa";

    if (palindromeString(s)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}