#include <iostream>
using namespace std;

bool check_num(int a, int b, int c){
    int x = b*c;
    int y = a;
    if(x%y == 0)
        return 1;
    else
        return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        int flag = 0;
        if(check_num(x,y,z))
            cout << y*z << " " << x;
        else if(check_num(y,z,x))
            cout << z*x << " " << y;
        else if(check_num(z,x,y))
            cout << x*y << " " << z;
        else
            cout << -1;
        cout << endl;
    }
}