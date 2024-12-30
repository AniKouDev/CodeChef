#include <iostream>
#include <map>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            m[help] = i+1;
        }
        for(auto i : m){
            sum += i.second;
        }
        cout << sum;
        breakline;
    }
}