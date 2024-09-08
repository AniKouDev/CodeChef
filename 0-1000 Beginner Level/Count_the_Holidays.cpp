#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 8;
        while(n--){
            int x;
            cin >> x;
            if(!(x%7==0 || x==6 || x==13 || x==20 || x==27))
                count++;
        }
        cout << count << endl;
    }
}