#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int count = 0;
        while(n--){
            int x;
            cin >> x;
            x = x+k;
            if(x%7==0)
                count++;
        }
        cout << count;
        breakline;
    }
}