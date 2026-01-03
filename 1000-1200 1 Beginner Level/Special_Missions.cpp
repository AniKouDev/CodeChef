#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string s;
        cin >> s;
        int sum0 = 0, sum1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0')
                sum0 += arr[i];
            else
                sum1 += arr[i];
        }
        if(sum0 >= c)
            cout << max(sum0, sum0+sum1-c) << endl;
        else
            cout << sum0 << endl;
    }
}