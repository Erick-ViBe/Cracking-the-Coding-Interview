#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void OneWay(string x, string y);

int main(void){
	OneWay("pp", "ee");

	return 0;
}

void OneWay(string x, string y){
	if(x == y){
		cout << "Return true" << endl;
	}else if(x.length()==y.length()){
		int difference = 0;
		for(int i=0; i<x.length(); i++){
			if(x[i]!=y[i]){
				difference++;
			}
			if(difference >= 2){
				cout << "Return false" << endl; 
			}
		}
		cout << "Return true" << endl; 
	}else if((x.length()-y.length()) == -1 || (x.length()-y.length()) == 1){

		if(x.length() < y.length()){
			string aux = x;
			x = y;
			y = aux;
		}

		bool errors = false;

		int j=0;
		for(int i=0; i<x.length(); i++){
			if(x[j]!=y[i]){
				//if(errors){
					//cout << "Return false" << endl;
				//}
				errors = true;
				j++;
			}
			j++;
		}

		//cout << "Return false" << endl;
	}
}
