#include "encryption.h"

using namespace std;

void func1(){
    int x;
    int y;
    cout << "What's 9 + 10?:";
    cin >> x;
    cout << "\nYou stupid. Again: ";
    cin >> y;
    cout << y*x;
    return;
}


//UTF-8 unicode up to 255
string caesar_cipher(string arg1, int key) {
    //cout << "\nYour encrypted string offset by your key is \"";
    string result;
    result.resize(arg1.size());
    for (int i = 0; i < arg1.size(); i++) {
        char nc = arg1[i]+key;
        //ensures there's no ASCII (8-bit) overflow 
        while (int(nc) > 255) {
            nc -= 255;
        }
        //ensures it starts at exclamation point
        while (int(nc) < 32) {
            nc += 32;
        }
        result[i] = nc;
    }
    //cout << result;
    //cout << "\" ;;; Your input was " << arg1.size() << " characters long.\n";
    return result;
}
