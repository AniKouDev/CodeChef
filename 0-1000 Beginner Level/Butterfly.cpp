#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int big = max(a,b);
        big = max(big,c);
        int small = min(a,b);
        small = min(small,c);
        int mid = a + b + c - big - small;
        int big1 = big;
        int mid1 = mid;
        int small1 = small;
        if(big1>(mid1+small1)){
            cout << "NO";
        }
        else{
            small1 = 0;
            mid1 = mid + small - big;
            if(mid1>big1+small1){
                cout << "NO";
            }
            else{
                big1 = big1 - mid1;
                if(small1>big1+mid1)
                    cout << "NO";
                else
                    cout << "YES";
            }
        }
        breakline;
    }
}