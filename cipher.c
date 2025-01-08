#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decrypt(const char* text, char* result, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            char offset = isupper(ch) ? 'A' : 'a';
            result[i] = (ch - offset - shift + 26) % 26 + offset;
        } else {
            result[i] = ch; 
        }
    }
}

int main() {
    const char text[] = "ufvf{hlgd_nrqr_nrwkd}";
    char decryptedText[sizeof(text)] = {0}; 
    int shift = 3;

    decrypt(text, decryptedText, shift);
    printf("Decrypted Text: %s\n", decryptedText);

    return 0;
}
