#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int orr = 0;
        for(int i = 0; i < a; i++){
            int help;
            cin >> help;
            orr = orr|help;
        }
        int help = orr^b;
        if((orr|help) == b)
            cout << help;
        else
            cout << -1;
        breakline;
    }
}