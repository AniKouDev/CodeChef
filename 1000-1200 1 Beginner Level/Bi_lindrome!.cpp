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
        int arr[27] = {0};
        int flag = 0;
        for(int i = 0; i < n; i++){
            arr[s[i] - 'a']++;
            if(arr[s[i] - 'a'] >= 2){
                flag = 1;
                break;
            }
        }
        cout << ((flag)?n-2:(-1));
        breakline;
    }
}