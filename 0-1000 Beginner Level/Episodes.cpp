#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x = x*y;
        cout << (x/60) << " " << (x-((x/60)*60)) << endl;
    }
}