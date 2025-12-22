#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int min = 2 * b;
        int max = 2 * (b+5);
        a = 50-a;
        if((a>=min) && (a<=max))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}