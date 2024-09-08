#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int sum = 0;
        int n = 5;
        while(n--){
            int x;
            cin >> x;
            sum+=x;
        }
        switch (x)
        {
        case 0: cout << "Beginner";
            break;
        case 1: cout << "Junior Developer";
            break;
        case 2: cout << "Middle Developer";
            break;
        case 3: cout << "Senior Developer";
            break;
        case 4: cout << "Hacker";
            break;
        case 5: cout << "Jeff Dean";
            break;
        }
        cout << endl;
    }
}