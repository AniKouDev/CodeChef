#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, p;
        cin >> n >> k >> p;
        int max = -1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            sum += help;
            if(max < help)
                max = help;
        }
        k += max;
        p += (sum - max);
        if(k > p)
            cout << "Ved";
        else if(k == p)
            cout << "Equal";
        else
            cout << "Varun";
        breakline;
    }
}