#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int sum = 0, cost = 0;
        multiset<int> s;
        for(int i = 1; i < 6; i++){
            int x;
            cin >> x;
            s.insert(x);
            sum += x;
        }
        auto iter = s.begin();
        while(sum < 35){
            sum -= *iter;
            sum += 10;
            cost += 100;
            iter++;
        }
        cout << cost << endl;
    }
}