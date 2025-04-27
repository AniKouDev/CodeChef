#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        int flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                if(abs(arr1[i]-arr2[j]) < abs(arr1[i]-arr2[j-1])){
                    flag = 1;
                    break;
                }
                else if(abs(arr1[i]-arr2[j]) == abs(arr1[i]-arr2[j-1])){
                    if(arr2[j] < arr2[j-1]){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1){
                flag = 0;
            }
            else{
                flag = 2;
                cout << i+1;
                break;
            }
        }
        if(flag == 0)
            cout << -1;
        breakline;
    }
}