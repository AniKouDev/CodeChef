#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[4] = {0}, count = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[help]++;
        }
        if(arr[2] > 1)
            count = arr[2] - 1;
        if(arr[3] != 0 && arr[1] != 0)
            count += min(arr[3], arr[1]);
        cout << count << endl;
    }
}