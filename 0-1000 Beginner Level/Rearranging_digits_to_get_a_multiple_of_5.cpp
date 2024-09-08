#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        for(int i = 0 ; i < n; i++){
            if(s[i]=='0' || s[i]=='5'){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "Yes";
        else 
            cout << "No";
        cout << endl;
    }
}