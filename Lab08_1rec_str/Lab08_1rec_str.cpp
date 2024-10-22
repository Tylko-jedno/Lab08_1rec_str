#include <iostream>
#include <string>

using namespace std;

int Count(const string& str, int index = 0) {
    if (index == str.length()) {
        return 0;
    }
    int count = (str[index] == '+' || str[index] == '-' || str[index] == '=') ? 1 : 0;
    return count + Count(str, index + 1);
}

int CalculateNewLength(const string& str, int index = 0) {
    if (index == str.length()) {
        return 0;
    }

    if (str[index] == '+' || str[index] == '-' || str[index] == '=') {
        return 2 + CalculateNewLength(str, index + 1);
    }
    else {
        return 1 + CalculateNewLength(str, index + 1);
    }
}

void ChangeHelper(const string& str, string& newStr, int index = 0) {
    if (index == str.length()) {
        return;
    }

    if (str[index] == '+' || str[index] == '-' || str[index] == '=') {
        newStr += "**";
    }
    else {
        newStr += str[index];
    }

    ChangeHelper(str, newStr, index + 1);
}

string Change(const string& str) {
    string newStr;
    ChangeHelper(str, newStr);
    return newStr;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " symbols: +-=" << endl;

    string result = Change(str);
    cout << "Modified string (result): " << result << endl;

    return 0;
}
