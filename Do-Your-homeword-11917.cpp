#include<iostream>
#include<vector>
using namespace std;

struct pelajaran{
	string nama;
	long long int bobot;
};

int main(){
	int n=0;
	vector<pelajaran> belajar;
	cin >> n;
	for(int i=0;i<n;i++){
		int jum=0;
		cin >> jum;
		for(int j=0;j<jum;j++){
			pelajaran pelajar;
			cin >> pelajar.nama;
			cin >> pelajar.bobot;
			belajar.push_back(pelajar);
		}
		string minta;
		long long int bot;
		cin >> bot;
		cin >> minta;
		int counter=0;
		for(int j=0;j<belajar.size();j++){
			if(minta==belajar[j].nama){
				if(belajar[j].bobot<=bot){
					cout << "Case " << i+1 << ": Yesss" << endl;
				}else if(belajar[j].bobot<=bot+5){
					cout << "Case " << i+1 << ": Late" << endl;
				}else{
					cout << "Case " << i+1 << ": Do your own homework!" << endl;
				}
				counter=1;
				break;
			}
		}
		if(counter==0){
			cout << "Case " << i+1 << ": Do your own homework!" << endl;
		}
		
		

		belajar.clear();		
	}
}
