#include "hash.h"

using namespace std;

string txtToMD5(string txt){
    MD5 md5obj;
    string res = md5obj(txt);
    return res;
}