#include <iostream>
using namespace std;

#define NO "No"
#define YES "Yes"

int main(){
    int x;
    cin >> x;
    if(2050-x <= 25)
        cout << YES;
    else
        cout << NO;
}