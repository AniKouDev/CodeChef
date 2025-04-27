#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());
        for(int i = 0; i < n; i++)
            arr[i] = arr[i] + (i)*x; 
        long long maxv = 0;
        for(int i = 0; i < n; i++)
            maxv = max(maxv, arr[i]);
        cout << maxv;
        breakline;
    }
}