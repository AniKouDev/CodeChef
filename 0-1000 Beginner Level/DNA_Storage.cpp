#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string output = "";
        for(int i = 0; i < n; i += 2){
            if(s[i] == '0'){
                if(s[i+1] == '0')
                    output += 'A';
                else
                    output += 'T';
            }
            else{
                if(s[i+1] == '0')
                    output += 'C';
                else
                    output += 'G';
            }
        }
        cout << output;
        breakline;
    }
}