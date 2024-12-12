#include <iostream>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        if(k == n-1)
            cout << arr[n-1];
        else
            cout << arr[(n+k)/2];
        breakline;
    }
}