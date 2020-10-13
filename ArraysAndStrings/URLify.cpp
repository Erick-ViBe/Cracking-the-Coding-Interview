#include <iostream>
#include <string>

using namespace std;

string URLify(string x);

int main(void){

	cout << URLify("Mr John Smith") << endl;

	return 0;
}

string URLify(string x){
	string y = "";

	for(int i=0; i<x.length(); i++){
		if(x[i]==' '){
			y = y + "%20";
		}else{
			y = y + x[i];
		}
	}

	return y;
}
