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
        int left = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                left = i;
                break;
            }
        }
        if(left == -1)
            cout << 0;
        else{
            int right = -1;
            for(int i = n-1; i > -1; i--){
                if(s[i] == '1'){
                    right = i;
                    break;
                }
            }
            if(left == right)
                cout << 0;
            else{
                int count = 0;
                for(int i = left; i < right; i++){
                    if(s[i] == '0')
                        count++;
                }
                cout << count;
            }
        }
        cout << endl;
    }
}