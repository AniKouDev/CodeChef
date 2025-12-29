#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int count = 0;
    while(n--){
        int sum = 0, x;
        for(int i = 0; i < k; i++){
            cin >> x;
            sum += x;
        }
        cin >> x;
        if((sum >= m) && (x <= 10))
            count++;
    }
    cout << count << endl;
}