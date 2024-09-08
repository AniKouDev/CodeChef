#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(v[i] <= 2*x && x <= 2*v[i])
                v[i] = 1;
            else 
                v[i] = 0;
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 1)
                count++;
        }
        cout << count << endl;
    }
}