#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double res;
        double neeche = n*(n-1);
        map<int, int> m;
        int max = -1, sec_max = -1;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            m[help]++;
            if(max < help){
                sec_max = max;
                max = help;
            }
        }
        if(m[max] == 1){
            double count = 2*(m[sec_max]);
            res = count/neeche;
        }
        else{
            double count = (m[max])*(m[max]-1);
            res = count/neeche;
        }
        cout << fixed << setprecision(9) << res;
        breakline;
    }
}