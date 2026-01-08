#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[27] = {0};
        int flag = 0;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            arr[c-'a']++;
            if(arr[c-'a'] >= 2)
                flag = 1;
        }
        if(flag == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}