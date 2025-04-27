#include <iostream>
using namespace std;

#define breakline cout<<endl

bool checkPalindrome(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(checkPalindrome(arr, n)){
            for(int i = 0; i < n; i++)
                cout << (arr[i]^1) << " ";
        }
        else{
            for(int i = n-1; i >= 0; i--)
                cout << arr[i] << " ";
        }
        breakline;
    }
}