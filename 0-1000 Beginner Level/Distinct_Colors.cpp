#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = INT_MIN;
        while(n--){
            int a;
            cin >> a;
            if(max<a)
                max = a;
        }
        cout << max;
        breakline;
    }
}