#include <iostream>
#include <string>

using namespace std;

string StringCompression(string x);

int main(void){

	cout << StringCompression("aabcccccaaa") << endl;

	cout << endl;

	cout << StringCompression("ab") << endl;

	return 0;
}

string StringCompression(string x){
	string r="";
	int CharCounter = 1;
	char Character;
	for(int i=0; i<x.length(); i++){
		if(x[i]==x[i+1]){
			CharCounter++;
		}else{
			r += x[i];
			r += to_string(CharCounter);
			CharCounter = 1;
		}
	}
	if(r.length()>x.length()){
		return x;
	}else{
		return r;
	}
}
