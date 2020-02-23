#include<iostream>
#include<set>
using namespace std;

int main(){
	int n=0;
	multiset<long> tampung;	
	cin >> n;
	
	
	while(n>0){

		int angka=0;
		int num=0;
		long long int tot=0;

		for(int i=0;i<n;i++){
			cin >> angka;
			for(int j=0;j<angka;j++){
				cin >> num;
				tampung.insert(num);
			}
			multiset<long>::iterator min= tampung.begin();
			multiset<long>::iterator max= --tampung.end();
			tot+= *max - *min;

				tampung.erase(min);
				tampung.erase(max);	
			
			

		}
		cout << tot << endl;
		tampung.clear();
		cin >> n;
	}
}
