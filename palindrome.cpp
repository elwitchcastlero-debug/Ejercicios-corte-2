#include <iostream>
using namespace std;

class palindrome {
    string n;
public:
    palindrome(string num) : n(num) {}

    bool isPalindrome() {
        for (int i = 0; i < n.length() / 2; i++) {
            if (n[i] != n[n.length() - 1 - i]) {
                return false; // Si hay una diferencia, no es palíndromo
            }
        }
        return true; // Si todos coinciden, sí es palíndromo
    }
};

int main() {
    string s;
    cin >> s; // Leer palabra o número
    palindrome p(s);

    if (!p.isPalindrome()) {
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }

    return 0;
}
