#include <iostream>
#include<math.h>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int x,y;
    while (i >= 0 || j >= 0 || carry) {
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int sum = x + y + carry;
        result = to_string(sum % 2) + result;
        carry = sum / 2;
        i--;
        j--;
    }

    return result;

}

int main(){
    cout << addBinary("11", "10");
}
