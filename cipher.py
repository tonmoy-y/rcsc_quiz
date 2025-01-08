def decrypt(text, shift=3):
    result = ""
    for ch in text:
        if ch.isalpha():
            offset = ord('A') if ch.isupper() else ord('a')
            result += chr((ord(ch) - offset - shift + 26) % 26 + offset)
        else:
            result += ch 
    return result


text = "ufvf{hlgd_nrqr_nrwkd}"
decrypted_text = decrypt(text)
print("Decrypted Text:", decrypted_text)
