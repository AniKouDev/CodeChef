#include <iostream>
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
        int flag = 0, count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > k){
                flag = 1;
                break;
            }
            else{
                int sum = arr[i];
                int j = i+1;
                while(sum <= k){
                    sum += arr[j];
                    j++;
                }
                i = j-2;
                count++;
            }
        }
        if(flag)
            cout << -1;
        else
            cout << count;
        breakline;
    }
}