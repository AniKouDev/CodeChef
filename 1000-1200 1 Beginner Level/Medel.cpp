#include <iostream>
#include <vector>
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
        for(int i = 0; i < n-2; i++){
            int sum = v[0]+v[1]+v[2];
            int mid = sum - max(v[0], max(v[1],v[2])) - min(v[0], min(v[1],v[2]));
            int pos;
            if(mid == v[0])
                pos = 0;
            else if(mid == v[1])
                pos = 1;
            else
                pos = 2;
            v.erase(v.begin() + pos);
        }
        for(auto i : v)
            cout << i << " ";
        breakline;
    }
}