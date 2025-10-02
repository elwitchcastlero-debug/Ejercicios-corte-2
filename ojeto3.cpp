#include<iostream>
using namespace std;
class palindrome {
    string n;
public:
    palindrome(string num): n(num){}
    bool isPalindrome() {
        for (int i = 0; i < n.length();i++){
            if (n[i] != n[n.length() -1 - i]){
                return false;
            }
            else{
                return true;
            }
        }
    }
};
int main(){
    string s;
    cin>>s;
    palindrome p(s);
    if (!p.isPalindrome()){
        cout<<"False"<<endl;
    }
    else{
        cout<<"True"<<endl;
    }
    }
    