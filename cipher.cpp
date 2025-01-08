#include <iostream>
#include <string>
using namespace std;

string decrypt(const string& text, int shift = 3) {
    string result = "";
    for (char ch : text) {
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            result += char((ch - offset - shift + 26) % 26 + offset);
        } else {
            result += ch;
        }
    }
    return result;
}

int main() {
    string text = "ufvf{hlgd_nrqr_nrwkd}";
    string decryptedText = decrypt(text);
    cout << "Decrypted Text: " << decryptedText << endl;
    return 0;
}
