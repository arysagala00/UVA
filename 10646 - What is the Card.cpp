#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	cin.ignore();
	for(int i = 0; i < tc; i++){
		int x, y = 0;
		string card[52];
		for(int j = 0; j < 52; j++){
			cin >> card[j];
	 	}
		int t = 26;
		for(int k = 0; k < 3; k++){
			x = ((int)card[t][0] > 57)? 10:(int)card[t][0] - 48;
			y += x;
			t -= 1 + (10 - x);
		}
		cout << "Case " << i+1 << ": " << card[y+(26-t)-1] << endl;
	}
}
