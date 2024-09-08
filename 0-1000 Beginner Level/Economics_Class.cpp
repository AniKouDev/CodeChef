#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        vector<int> v1, v2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v2.push_back(x);
        }
        for(int i = 0; i < n; i++){
            if(v1[i] == v2[i])
                count++;
        }
        cout << count << endl;
    }
}