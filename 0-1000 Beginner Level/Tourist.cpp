#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a, b;
        cin >> a >> b;
        int min = 202;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            int dist = abs(x-a) + abs(y-b);
            if(min > dist)
                min = dist;
        }
        cout << min << endl;
    }
}