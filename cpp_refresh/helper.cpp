//Helper functions - General functions to speed things up when writing code
#include "helper.h"

void pprint(string txt, string end){
    cout << txt << end;
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