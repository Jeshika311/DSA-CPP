#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    int freq[26] = {0};

    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') { // Ensure only lowercase letters are counted
            freq[ch - 'a']++;
        }
    }

    int maxFreq = 0;
    char MostOccuringChar = ' ';

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            MostOccuringChar = i + 'a';
        }
    }
    cout<<"Most occuring character : "<<MostOccuringChar<<endl;
    cout<<"Frequency : "<<maxFreq<<endl;
    
    return 0;
}