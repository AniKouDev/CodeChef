#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[2*n];
        for(int i = 0; i < 2*n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(i==0){
                if(arr[i+n] <= arr[i])
                    count++;
            }
            else{
                if(arr[i+n] <= (arr[i]-arr[i-1]))
                    count++;
            }
        }
        cout << count << endl;
    }
}