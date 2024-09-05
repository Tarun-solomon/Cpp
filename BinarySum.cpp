#include<iostream>

using namespace std;

string addBinary(string a, string b) {

    int carry = 0;

    int max;
    string sum;

    if(a.length() > b.length())
        max = a.length();
    else
        max = b.length();
    

    for(int i=max-1; i>=0; i--){
        if(a[i] == 1 && b[i] == 1){
            sum += "0";
            carry = 1;
        }
        else if ((a[i] == 1 && b[i] == 0) || (a[i] == 0 && b[i] == 1))
        {
            if(carry == 1){
                sum+= "0";
                carry = 1;
            }
            sum+="1";
            carry = 0;

        }
        else if(a[i] == 0 && b[i] == 0){
            if(carry == 1){
                sum += "1";
                carry = 0;
            }
            sum+="0";
            carry = 0;
        }

    }

    return sum;
}

int main(){
    cout<<addBinary("101", "001")<<endl;
}
