#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int lead = 0, sp1 = 0, sp2 = 0, winner;
    while(n--){
        int a, b;
        cin >> a >> b;
        sp1+=a;
        sp2+=b;
        int x = abs(sp1-sp2);
        if(lead < x){
            lead = x;
            if(sp1>sp2)
                winner = 1;
            else
                winner = 2;
        }
    }
    cout << winner << " " << lead << endl;
}