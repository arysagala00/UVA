#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int s[3];
		cin >> s[0] >> s[1] >> s[2];
		sort(s, s + 3);
		cout << "Case " << i+1 << ": " << s[1] << endl; 
	}
}
