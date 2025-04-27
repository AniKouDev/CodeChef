#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[26]={0};
        for(int i = 0; i < n; i++){
            char ch;
            cin >> ch;
            arr[ch-'a']++;
        }
        int flag = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i]%2 != 0){
                flag = 1;
                break;
            }
        }
        cout << ((flag)?"No":"Yes");
        breakline;
    }
}