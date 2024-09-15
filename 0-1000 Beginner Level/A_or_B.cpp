#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum1 = (500-(a*2)) + (1000-((a+b)*4));
        int sum2 = (1000-(b*4)) + (500-((a+b)*2));
        cout << max(sum1, sum2);
        breakline;
    }
}