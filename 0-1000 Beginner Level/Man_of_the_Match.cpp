#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int max = INT_MIN;
        int player;
        for(int i = 1; i < 23; i++){
            int a, b;
            cin >> a >> b;
            int sum = a + (b*20);
            if(max<sum){
                max = sum;
                player = i;
            }
        }
        cout << player;
        breakline;
    }
}