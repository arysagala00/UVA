#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >>n;
	int Case=1;
	while(n>=0){
		int angka[12]={0},angka2[12]={0};
		for(int i=0;i<12;i++){
			cin >> angka[i];
		}
		for(int i=0;i<12;i++){
			cin >> angka2[i];
		}
		cout << "Case " << Case << ":" << endl;
 		for(int i=0;i<12;i++){
			if(n<angka2[i]){
				cout << "No problem. :(" <<endl;
			}else{
				cout << "No problem! :D" << endl;
				n-=angka2[i];
			}
			
			n+=angka[i];
		}
		Case++;
		cin >> n;
		
	}
}
