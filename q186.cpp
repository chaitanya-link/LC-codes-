#include <iostream>
#include <string>
using namespace std;

void rev(string &s) {
    int i = 0;
    int j = s.length() - 1;

    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    rev(s);

    cout << "Reversed string: " << s;

    return 0;
}