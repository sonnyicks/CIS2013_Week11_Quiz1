#include <iostream>
using namespace std;

typedef int* iptr;

int main(){
	
	int rows;
	int computers;
	int total;
	
	cout << "How many rows?: ";
	cin >> rows;
	cout << "How many computers on each row?: ";
	cin >> computers;
	total = (rows*computers);
	
	iptr *t = new iptr[rows];
	for (int i=0; i<rows; i++){
		t[i] = new int[computers];
	}
	for (int i=0; i<rows; i++){
		for (int j=0; j<computers; j++){
			cout << "empty ";
		}
		cout << endl;
	}
	
	return 0;
}