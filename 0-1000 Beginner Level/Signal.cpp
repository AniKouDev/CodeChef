#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        char arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += (arr[i] - '0');
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == '0')
                break;
            else
                sum -= 1;
        }
        cout << sum << endl;
    }
}