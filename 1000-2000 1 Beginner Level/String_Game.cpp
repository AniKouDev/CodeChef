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
        int arr[26] = {0};
        for(int i = 0; i < n; i++){
            arr[s[i] - 'a']++;
        }
        int flag = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i]%2 == 1){
                flag = 1;
                break;
            }
        }
        cout << ((flag)?"NO":"YES");
        breakline;
    }
}