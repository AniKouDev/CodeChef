#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,x;
        cin >> n >> x;
        int count = 0;
        while(n--){
            int y;
            cin >> y;
            if(y>=x)
                count++;
        }
        cout << count << endl;
    }
}