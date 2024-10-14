#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int isVowel(char ch)
{
    string str = "AEIOU";
    return (str.find(ch) != string::npos);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(!isVowel(s[0]) && isVowel(s[1]) && !isVowel(s[2]) && isVowel(s[3]) && !isVowel(s[4]) && isVowel(s[5]) && !isVowel(s[6]) && !isVowel(s[7]))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}