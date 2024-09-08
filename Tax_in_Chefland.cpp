#include <iostream>
using namespace std;

#define breakline cout << endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        x = (x>100)?x-10:x;
        cout << x;
        breakline;    
    }
    
}