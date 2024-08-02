#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cout << "Enter a word or phrase: ";
    getline(cin, input);

    string original = input;
    string reversed = original;
    
    reverse(reversed.begin(), reversed.end());

    if (original == reversed) {
        cout << "The input is a palindrome." << endl;
    } else {
        cout << "The input is not a palindrome." << endl;
    }

    return 0;
}
