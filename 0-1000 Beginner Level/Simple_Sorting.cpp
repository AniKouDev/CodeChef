#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    for(int i = 0; i < t; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for(int i : v)
        cout << i << endl;
}