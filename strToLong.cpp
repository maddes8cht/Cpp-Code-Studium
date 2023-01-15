#include <iostream>
using namespace std;

long strToLong(const string &str) {
    // Initialize variables
    long result = 0;
    bool negative = false;

    // Skip leading whitespace
    int i = 0;
    while (isspace(str[i])) {
        i++;
    }

    // Check for sign
    if (str[i] == '-') {
        negative = true;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Process digits
    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Apply sign
    if (negative) {
        result = -result;
    }

    return result;
}

int main() {
    // Sample strings
    string str1 = " -12 Grad";
    string str2 = "127 meter in gelb";

    long num1 = strToLong(str1);
    long num2 = strToLong(str2);

    //output samples
    cout << "\nBeispiele:\n" << endl;

    cout << "String 1: " << str1 << " => " << num1 << endl;
    cout << "String 2: " << str2 << " => " << num2 << endl;

    // user input
    string user_str;
    cout << "\nEine Eingabe: ";
    cin >> user_str;

    // output of input string
    long user_num = strToLong(user_str);
    cout << "deine Eingabe: " << user_str << " => " << user_num << endl;

    return 0;
}
