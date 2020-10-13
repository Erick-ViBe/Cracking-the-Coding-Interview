#include <iostream>
#include <ostream>
#include <string>
#include <bitset>

using namespace std;

bool IsUnique(string x);
bool IsUniqueBitset(string x);

int main(void){

	cout << "qwertyuiopasdfghjkl" << endl;
	if(IsUniqueBitset("qwertyuiopasdfghjkl")){
		cout << "Unique" << endl;
	}else{
		cout << "Not Unique" << endl;
	}

	cout << "****************************" << endl;

	cout << "qwertyuiopasdfghjkll" << endl;
	if(IsUniqueBitset("qwertyuiopasdfghjkll")){
		cout << "Unique" << endl;
	}else{
		cout << "Not Unique" << endl;
	}

	cout << "****************************" << endl;

	cout << "qqwertyuiopasdfghjkl" << endl;
	if(IsUniqueBitset("qqwertyuiopasdfghjkl")){
		cout << "Unique" << endl;
	}else{
		cout << "Not Unique" << endl;
	}
	
	//cout << ((int) 'A')-65 << endl;
	//cout << ((int) 'Z')-65 << endl;
	//cout << ((int) 'a')-65 << endl;
	//cout << ((int) 'z')-65 << endl;

	return 0;
}

bool IsUnique(string x){
	bool CheckUniqueChar[60] = {0};

	for(int i=0; i<x.length(); i++){
		if(CheckUniqueChar[int(x[i])-65] == 0){
			CheckUniqueChar[int(x[i])-65] = 1;
		}else{
			return false;
		}
	}

	return true;
}

bool IsUniqueBitset(string x){
	bitset<60> CheckUniqueCharBitset;
	for(char character : x){
		if(CheckUniqueCharBitset[((int) character)-65]){
			return false;
		}
		CheckUniqueCharBitset.flip(((int) character)-65);
	}
	return true;
}
