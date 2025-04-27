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
        int arr[n] = {0};
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            m[arr[i]] = 0;
        }
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(m[arr[i]] < help){
                m[arr[i]] = help;
            }
        }
        int sum = 0;
        for(auto i : m){
            sum += i.second;
        }
        cout << sum;
        breakline;
    }
}