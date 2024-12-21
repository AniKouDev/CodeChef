#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        int county = r/y;
        if(county >= n)
            cout << 0 << " " << n;
        else{
            int countx = n-county, flag = 0;
            while(countx*x + county*y > r){
                countx++;
                county--;
                if(county < 0 || countx > n){
                    flag = 1;
                    break;
                }
            }
            if(flag)
                cout << -1;
            else
                cout << countx << " " << county;    
        }
        breakline;
    }
}