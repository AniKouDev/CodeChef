#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            int b=0, r=0, u=0;
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                if(x == 1)
                    r++;
                else if(x == 2)
                    b++;
                else
                    u++;
            }
            if((r > ((n/2))) || (b > (n/2)))
                cout << "No";
            else
                cout << "Yes";
        }
        else{
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
            }
            cout << "No";
        }
        cout << endl;
    }
}