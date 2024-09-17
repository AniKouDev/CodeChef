#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        float sum = 0;
        int count = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            sum += x;
            if(((sum/i) * 100) == 100)
                count++;
        }
        cout << count;
        breakline;
    }
}