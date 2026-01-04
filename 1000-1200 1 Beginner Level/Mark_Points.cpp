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
        for(int i = 0; i < n; i++){
            flag = 0;
            int count = 0;
            while(s[i] == '1' && (i < n)){
                i++;
                count++;
            }
            if(count < 3 && count != 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
}