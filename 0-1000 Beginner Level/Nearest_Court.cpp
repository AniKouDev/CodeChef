#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int min1 = INT_MAX;
        for(int i = min(x,y); i <= max(x,y); i++){
            int val = max(abs(x-i),abs(y-i));
            if(min1>val)
                min1 = val;
        }
        cout << min1;
        breakline;
    }
}