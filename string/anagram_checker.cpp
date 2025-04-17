#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isFreqSame(int freq1[] , int freq2[]){
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}

bool IsAnagram(string s1 , string s2){
    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i=0;i<s1.length();i++){
        freq1[s1[i] - 'a']++;
    }

    for(int i=0;i<s2.length();i++){
        freq2[s2[i] - 'a']++;
    }

    if(isFreqSame(freq1,freq2)){
        return true;
    }
    return false;
}

int main(){
    string s1;
    cout<<"Enter 1st string : ";
    cin>>s1;

    string s2;
    cout<<"Enter 2nd string : ";
    cin>>s2;

    if(IsAnagram(s1 ,s2)){
        cout<<"Given Strings are anagram of each other.";
    }
    else{
        cout<<"Given Strings are not anagrams of each other.";
    }
    return 0;
}