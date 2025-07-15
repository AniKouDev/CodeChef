#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int no = 0, nz = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help == 0)
                nz++;
            else
                no++;
        }
        if(nz == 0 || no == 0)
            cout << 0;
        else
            cout << min(no,nz);
        breakline;
    }
}