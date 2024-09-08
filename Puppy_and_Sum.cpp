#include <iostream>
using namespace std;

int cal_sum(int x){
    int sum = 0;
    while(x--){
        sum+=x;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = b;
        while(a--){
            sum += cal_sum(sum);
        }
        cout << sum << endl;
    }
}