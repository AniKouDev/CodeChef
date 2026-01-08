#include  <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = 101;
        int arr[n+1];
        for(int i = 0; i <= n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            int help = max(arr[i], arr[i+1]);
            m = min(m, help);
        }
        cout << m << endl;
    }
}