#include <iostream>
#include <string>

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

string getStringUserInput(){
    string res;
    cout << "\nPlease type your input: ";
    //cin >> res;
    getline(cin, res);
    cout << "\n";
    return res;
}

int getIntUserInput(){
    int res;
    cout << "\nPlease type your input integer: ";
    cin >> res;
    cout << "\n";
    return res;
}

bool getBoolUserInput(string question){
    bool res;
    bool answered;
    string answerstr;
    while(answerstr != "y" && answerstr != "n"){
        cout << "\n" << question <<"\nPlease confirm [y/n]: ";
        cin >> answerstr;
        cout << "\n";
    }
    if (answerstr == "y"){
        res = true;
    }else {
        res = false;
    }
    return res;
}

void caesar_cipher(string arg1, int key) {
    cout << "\nYour encrypted string offset by your key is \"";
    for (int i = 0; i < arg1.size(); i++) {
        char nc = arg1[i]+key;
        cout << nc;
    }
    cout << "\" ;;; Your input was " << arg1.size() << " characters long.\n";
}

int main () {
    //func1();
    //cout << getStringUserInput();
    
    string str = getStringUserInput();
    int k = getIntUserInput();
    bool decrypt = getBoolUserInput("Is this a decryption? Say no if you want to encrypt your original string.");
    caesar_cipher(str, k*(1+(-2*decrypt)));

    cout << "\n\nEND\n";
    
    return 0;
}