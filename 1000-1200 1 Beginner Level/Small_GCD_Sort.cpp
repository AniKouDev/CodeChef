#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool compareMethod(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n+1);
        for(int i = 1; i <= n; i++){
            arr[i].first = i;
            arr[i].second = __gcd(i, n);
        }
        sort(arr.begin()+1, arr.end(), compareMethod);
        for(int i = 1; i <= n; i++)
            cout << arr[i].first << " ";
        cout << endl;
    }
}