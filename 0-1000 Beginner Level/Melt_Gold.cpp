#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int time=0;
        for(int i=1; b<a; i++){
            time++;
            b+=i;
        }
        cout << time;
        breakline;
    }
}