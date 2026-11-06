#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int first = s[0] - '0';
    if (first % 2 == 0) cout << "EVEN\n";
    else cout << "ODD\n";
    return 0;
}