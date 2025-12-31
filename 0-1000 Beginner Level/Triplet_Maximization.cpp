#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int help = (x+y)/3;
        cout << help + min(help, y) << endl;
    }
}