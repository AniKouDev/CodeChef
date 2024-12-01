#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr.push_back(help);
        }
        sort(arr.begin(), arr.end());
        int sum = arr[n-1]+arr[n-2];
        for(int i = n-1; i > 1; i--){
            sum += arr[i]+arr[i-2];
        }
        cout << sum;
        breakline;
    }
}