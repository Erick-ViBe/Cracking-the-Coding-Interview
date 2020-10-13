#include <cctype>
#include <iostream>
#include <bitset>
#include <string>
#include <cstring>

using namespace std;

string RemoveSpacesAndStringToLower(string x);
bool PalindromePermutation(string x);

int main(void){
	cout << PalindromePermutation("Tact Coa") << endl;
	
	return 0;
}

string RemoveSpacesAndStringToLower(string x){
	string y = "";

	for(int i=0; i<x.length(); i++){
		if(x[i]!=' '){
			y = y + ((char) tolower(x[i]));
		}
	}

	return y;
}

bool PalindromePermutation(string x){
	bitset<58> CheckCharactersRepetition;

	x = RemoveSpacesAndStringToLower(x);

	for(char character : x){
		CheckCharactersRepetition.flip(((int) character)-65);
	}

	if(CheckCharactersRepetition.count() == 0 || CheckCharactersRepetition.count() == 1){
		return true;
	}else{
		return false;
	}
}
