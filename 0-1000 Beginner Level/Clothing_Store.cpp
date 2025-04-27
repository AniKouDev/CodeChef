#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        int sum = 0;
        if(x < a){
            b += (a-x);
            sum += x;
        }
        else if(x > a)
            sum += a;
        else 
            sum += x;

        if(y < b){
            c += (b-y);
            sum += y;
        }
        else if(y > b)
            sum += b;
        else 
            sum += y;

        if(z <= c)
            sum += z;
        else
            sum += c;

        cout << sum;
        breakline;
    }
}