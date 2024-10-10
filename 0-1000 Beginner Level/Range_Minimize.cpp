#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define breakline cout<<endl

void insert(int* arr, int n, int k){
    while(arr[k-1] > n && k!=0){
        arr[k] = arr[k-1];
        k--;
    }
    arr[k] = n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int a = arr[n-1] - arr[2];
        int b = arr[n-2] - arr[1];
        int c = arr[n-3] - arr[0];
        cout << min(min(a,b),c);
        breakline;
        
    }
}