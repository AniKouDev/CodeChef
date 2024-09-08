#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a+(10*c) < b+(10*d))
            cout << "Chef";
        else if(a+(10*c) == b*(10*d))
            cout << "Draw";
        else
            cout << "Chefina";
        cout << endl;
    }
}