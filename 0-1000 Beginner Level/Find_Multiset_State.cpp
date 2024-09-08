#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for(int i = 0; i < k; i++){
            auto max_pos = max_element(arr.begin(), arr.end());
            auto min_pos = min_element(arr.begin(), arr.end());
            int sum = *max_pos+*min_pos;
            arr.erase(max_pos);
            arr.erase(min_pos);
            arr.push_back(sum);
        }
        for(int i : arr)
            cout << i << " ";
        cout << endl;
    }
}