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
        int s = arr[0];
        for(int i = 1; i < n; i++){
            int help = min(arr[i]+s, (arr[i]/2)+arr[i-1]);
            m = min(m, help);
            s = min(s,arr[i]);
        }
        cout << m << endl;
    }
} 