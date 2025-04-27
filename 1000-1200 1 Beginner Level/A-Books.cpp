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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            int count = 0;
            int j = i+1;
            while(arr[i] == arr[j] && (j < n)){
                j++;
                count++;
            }
            arr[i] = n-count-i-1;
        }
        for(int i : arr)
            cout << i << " ";
        breakline;
    }
}