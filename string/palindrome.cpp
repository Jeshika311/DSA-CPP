#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch){
    return ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'));
}

bool isPalindrome(string str){
    int start = 0 , end = str.length() -1;

    while(start < end){
        if(!isAlphaNum(str[start])){
            start++;
            continue;
        }
        if(!isAlphaNum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[start]) != tolower(str[end])){
            return false;
        } 
        start++;
        end--;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin ,str);

    for(char ch : str){
        if(!isAlphaNum(ch) && ch != ' '){
            cout<<"Given string must contain only Alphabets and Numbers."<<endl;
            return 1;
        }
    }

    if (isPalindrome(str)){
        cout<<"Given string is Palindrome."<<endl;
    }
    else{
        cout<<"Givem string is not palindrome."<<endl;
    }
    return 0;
}