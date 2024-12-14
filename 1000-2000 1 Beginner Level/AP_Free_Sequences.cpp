#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int flag = 0;
        for(int i = n-1; i >= 2; i--){
            for(int j = i-1; j >= 1; j--){
                for(int k = j-1; k >= 0; k--){
                    if(arr[i]-arr[j] == arr[j]-arr[k]){
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        cout << ((flag)?"No":"Yes");
        breakline;
    }
}