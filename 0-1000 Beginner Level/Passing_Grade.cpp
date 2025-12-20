#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x, c=1;
        cin >> x;
        n--;
        while(n--){
            int i;
            cin >> i;
            if(i>=x)
                c++;
        }
        cout << c << endl;
    }
}