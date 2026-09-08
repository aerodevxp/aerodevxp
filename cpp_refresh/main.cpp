#include "hash.h"
#include "encryption.h"
#include "helper.h"

int main(){
    string text = getStringUserInput();
    int key = getIntUserInput();
    string cipher = caesar_cipher(text, key);
    pprint("Your caesar encrypted string is '" + cipher + "'");
    pprint("The MD5 hash of that encryption is '" + txtToMD5(cipher) + "'");
    return 0;
}