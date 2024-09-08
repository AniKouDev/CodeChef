#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long n,a,b;
        cin >> n >> a >> b;
        long min = 0, max = 0, sum = 0;
        while(n--){
            int x;
            cin >> x;
            if(!(x>=a && x<=b))
                sum--;
            else
                sum++;
            if(sum>0 && max<sum){
                max = sum;
            }
            if(sum<0 && min>sum){
                min = sum;
            }
        }
        
        cout << max << " " << min << endl;
    }
}