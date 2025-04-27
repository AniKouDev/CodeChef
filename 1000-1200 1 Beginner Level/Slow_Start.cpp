#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, h;
        cin >> x >> h;
        int start = x/2;
        if(start*5 >= h){
            if(h%start == 0)
                cout << h/start;
            else
                cout << (h/start)+1;
        }
        else{
            h = h-(start*5);
            if(h%x == 0)
                cout << 5 + (h/x);
            else
                cout << 5 + (h/x) + 1;
        }
        breakline;
    }
}