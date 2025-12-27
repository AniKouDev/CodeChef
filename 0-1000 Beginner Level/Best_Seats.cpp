#include <iostream>
#include <cmath>

using namespace std;

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
        int m = 201;
        for(int i = 0; i < n-1; i++){
            m = min(m, arr[i]+arr[i+1]);
        }
        cout << m << endl;
    }
}