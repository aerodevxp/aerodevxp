#include "hash.h"
#include "encryption.h"
#include "helper.h"

int main(){
    string text = getStringUserInput();
    string key = getStringUserInput();
    
    string cipher = custom_cipher1(text, key, "saltysprings");
    pprint("Your encrypted string is '" + cipher + "'");
    pprint("The MD5 hash of that encryption is '" + txtToMD5(cipher) + "'");
    
    return 0;
}