#include <iostream>
#include <string>

using namespace std;

bool CheckPermutation(string x, string y);

int main(void){

	cout << CheckPermutation("qwertyasdfghhhh", "qqqqwertyasdfgh") << endl;

	return 0;
}

bool CheckPermutation(string x, string y){
	int XCheckCharsContains[60] = {0};
	int YCheckCharsContains[60] = {0};

	if(x.length() != y.length()){
		return false;
	}

	for(int i=0; i<x.length(); i++){
		XCheckCharsContains[int(x[i])-65] += 1;
	}

	for(int j=0; j<y.length(); j++){
		YCheckCharsContains[int(y[j])-65] += 1;
	}

	for(int k=0; k<60; k++){
		if(XCheckCharsContains[k]!=YCheckCharsContains[k]){
			return false;
		}
	}

	return true;
}
