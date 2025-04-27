#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = 0;
        int min = 101;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(max < help)
                max = help;
            if(min > help)
                min = help;
        }
        int help = max - min - 1;
        if(help < 0)
            cout << 0;
        else
            cout << max - min - 1;
        breakline;
    }
}