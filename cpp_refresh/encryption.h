#pragma once
#include <csignal>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <exception>
#include "helper.h"
using namespace std;

class CipherException : public exception {
    private:
     string _msg;
    public:
        CipherException(string msg) : _msg("A cipher related error occured!\n" + msg) {}

    const char* what() const noexcept override {
        return this->_msg.c_str();
    }
     
};

string caesar_cipher(string arg1, int key);

//symmetrical algorithm
string custom_cipher1(string arg1, string key, string salt);
string decrypt_custom_cipher1(string arg1, string key, string salt);