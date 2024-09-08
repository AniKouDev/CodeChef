#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x==y){
            if(x%2==0)
                cout << x/2;
            else
                cout << (x/2)+1;
        }
        else if((x/2)>=y || (y/2)>=x)
            cout << 0;
        else{
            int a = 2*x-y;
            int b = 2*y-x;
            int c = y-x/2;
            int d = x-y/2;
            int mini = min(a,b);
            mini = min(mini,c);
            mini = min(mini,d);
            cout << mini; 
        }
        cout << endl;
    }
}