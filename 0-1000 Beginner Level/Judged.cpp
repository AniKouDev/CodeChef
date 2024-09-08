#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int sum = 0;
	    int x;
	    for(int i = 0; i < 5; i++){
	        cin >> x;
	        sum += x;
	    }
	    if(sum >= 4)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}

}
