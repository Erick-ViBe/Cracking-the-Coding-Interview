#include <iostream>
#include <string>

using namespace std;

bool StringRotation(string x, string y);
string CutString(string x, int SpaceCut, int length);

int main(void){
	cout << StringRotation("waterbottle", "erbottlewat") << endl;

	cout << StringRotation("papo", "pope") << endl;

	cout << StringRotation("perro", "rrope") << endl;

	return 0;
}

bool StringRotation(string x, string y){
	string r;
	y = y+y;

	for(int i=0; i<x.length(); i++){
		if(y[i] == x[0]){
			r = CutString(y, i, x.length());
			if(x == r){
				return true;
			}
		}
	}

	return false;
}

string CutString(string x, int SpaceCut, int length){
	string r = "";
	int j=0;
	for(int i=SpaceCut; i<x.length(); i++){
		if(j<length){
			r += x[i];
			j++;
		}
	}
	return r;
}
