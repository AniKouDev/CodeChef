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
        vector<int> s;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            s.push_back(help);
        }
        sort(s.begin(), s.end());
        int sum = 0, k = 0;
        for(int i : s){
            int help = i-k;
            if(help >= 0)
                sum += (help);
            k++;
        }
        cout << sum;
        breakline;
    }
}