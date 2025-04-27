#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int penalty = (1000-b)/20;
        int time = 299-a;
        int left = min(time, penalty);
        while(true){
            penalty = b + left*20 + (a+left);
            if(penalty > 1000){
                left--;
            }
            else
                break;
        }
        cout << left;
        breakline;
    }
}