#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0, sum1 = 0;
    for(int i = 1; i <= n; i++){
        int help;
        cin >> help;
        sum += help;
        sum1 += i;
    }
    if(sum == sum1)
        cout << "YES";
    else
        cout << "NO";
}