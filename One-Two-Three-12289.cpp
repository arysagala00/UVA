#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	for(int i=0;i<n;i++){
		string alpha;
		cin >> alpha;
		if(alpha.size()==3){
			if((alpha[0]=='t' && alpha[1]=='w') || (alpha[1]=='w'&&alpha[2]=='o') || (alpha[2]=='o' && alpha[0]=='t')){
				cout << 2 << endl;
			}else{
				cout << 1 << endl;
			}
		}else{
			cout << 3 << endl;
		}
	}
}
