#include <iostream>
using namespace std;

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
        for(int i = 0; i < k; i++){
            int max = arr[i], pos = i;
            for(int j = i; j < n; j++){
                if(max < arr[j]){
                    max = arr[j];
                    pos = j;
                }
            }
            int help = arr[i];
            arr[i] = arr[pos];
            arr[pos] = help;
        }
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        cout << sum << endl;
    }
}