#include <iostream>
#include <climits>
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
        vector<int> v;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            v.push_back(help);
        }
        sort(v.begin(), v.end());
        int min = INT_MAX;
        for(int i = 0; i < v.size()-1; i++){
            int help = v[i+1]-v[i];
            if(min > help)
                min = help;
        }
        cout << min;
        breakline;
    }
}