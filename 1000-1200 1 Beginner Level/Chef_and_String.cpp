#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == 'x' && s[i+1] == 'y'){
                count++;
                i++;
            }
            else if(s[i] == 'y' && s[i+1] == 'x'){
                count++;
                i++;
            }
        }
        cout << count;
        breakline;
    }
}