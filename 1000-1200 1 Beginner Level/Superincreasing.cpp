#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0, help = 1;
        for(int i = 1; i < b; i++, help=sum+1){
            if(sum < help){
                sum += help;
            }
            if(sum >= c)
                break;
        }
        if(sum < c)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}