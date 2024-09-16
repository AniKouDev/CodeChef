#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0, h = n;
        while(n--){
            int a;
            cin >> a;
            sum += a;
        }
        if(h%2 == 0)
            cout << abs(sum)/2;
        else    
            cout << -1;
        breakline;
    }
}