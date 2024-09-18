#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        cout << (a/7)+((a%7 == 6)?1:0);
        breakline;
    }
}