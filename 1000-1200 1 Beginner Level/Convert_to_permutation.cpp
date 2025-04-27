#include <iostream>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

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
        sort(arr, arr+n);
        int count = 0, flag = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] <= i+1){
                count += (i+1-arr[i]);
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << -1;
        else
            cout << count;
        breakline;
    }
}