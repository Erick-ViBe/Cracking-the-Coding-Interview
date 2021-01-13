#include <iostream>
#include <map>
 
using namespace std;

int main(void){
	int x[15] = {6, 4, 8, 7, 2, 9, 4, 5, 7, 4, 8, 2, 1, 7, 4};
	map<int,int> h;

	for(auto i : x){
		//cout << i << "\n";
		if(h.find(i) == h.end()){
			//cout << "No esta\n";
			h[i] = 1;
		}else{
			//cout << "Si esta\n";
			h[i] += 1;
		}
	}
	
	cout << "**************************************\n";

	for(auto elem : h){
		cout << elem.first << ": " << elem.second << "\n";
	}

	cout << "**************************************\n";

	cout << "Estos numeros no se repiten!!!\n";
	for(auto elem : h){
		if(elem.second == 1){
			cout << elem.first << "\n";
		}
	}

	cout << "**************************************\n";
	
	cout << "Estos numeros se repiten!!!\n";
	for(auto elem : h){
		if(elem.second > 1){
			cout << elem.first << "\n";
		}
	}

	return 0;
}
