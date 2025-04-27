#include <iostream>
#include <cmath>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float r;
        cin >> r;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        float d1 = sqrt((pow((x2-x1),2) + pow((y2-y1),2)));
        float d2 = sqrt((pow((x3-x2),2) + pow((y3-y2),2)));
        float d3 = sqrt((pow((x3-x1),2) + pow((y3-y1),2)));
        if((d1<=r && d2<=r) || (d1<=r && d3<=r) || (d2<=r && d3<=r))
            cout << "yes";
        else   
            cout << "no";
        breakline;
    }
}