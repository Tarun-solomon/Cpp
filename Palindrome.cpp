#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string s) {
    string str,lstr,rstr;
    for(int i=0; i<s.length(); i++){
        if(isalnum(s[i])){
            str += s[i];
        }
    }  
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            lstr += str[i];
        }
        else{
            lstr += tolower(str[i]);
        }
    }
    for(int i = lstr.length()-1; i>=0; i--)
        rstr+=lstr[i];

    if(lstr == rstr)
        return true;
    else    
        return false;

}

int main(){
    string s = "A man, a plan, a canal: Panama";
    bool res = isPalindrome(s);
    isPalindrome(s);
    return 0;
}
