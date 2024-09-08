#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2, m="";
        cin >> s1 >> s2;
        for(int i = 0; i < 5; i++){
            if(s1[i] == s2[i])
                m += "G";
            else
                m += "B";
        }
        cout << m << endl;
    }
}