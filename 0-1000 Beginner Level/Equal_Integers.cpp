#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int cal = y-x;
        if(cal < 0)
            cout << ((cal%2 == 0)?abs(cal/2):abs(cal/2)+2);
        else if(cal == 0)
            cout << 0;
        else
            cout << cal;
        breakline;
    }
}