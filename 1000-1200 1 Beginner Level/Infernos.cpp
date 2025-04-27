#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int single = 0, multi = -1;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help%x == 0)
                single += (help/x);
            else
                single += ((help/x)+1);
            if(multi < help)
                multi = help;
        }
        cout << min(multi, single);
        breakline;
    }
}