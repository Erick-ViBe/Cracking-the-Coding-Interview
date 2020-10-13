#include <iostream>

using namespace std;

int main(void){

	int x[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cout << x[i][j] << "-";
		}
		cout << endl;
	}

	cout << "Filas: " << sizeof(x)/sizeof(x[0]) << endl;
	cout << "Columnas: " << sizeof(x[0])/sizeof(x[0][0]) << endl;

	return 0;
}
