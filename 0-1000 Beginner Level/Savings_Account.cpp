#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int total = a*b;
        if(c>=total)
            cout << 0;
        else{
            int count = 0;
            while(true){
                a--;
                count++;
                if(a*b <= c)
                    break;
            }
            cout << count;
        }
        breakline;
    }
}