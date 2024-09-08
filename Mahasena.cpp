#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int even = 0, odd = 0;
    while(n--){
        int x;
        cin >> x;
        if(x&1 == 1)
            odd++;
        else
            even++;
    }
    if(even > odd)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
}