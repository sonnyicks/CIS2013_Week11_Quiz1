#include <iostream>
using namespace std;

typedef int* iptr;
int main(){
	
	int rows;
	int computers;
	bool entering = true;
	
	cout << "How many rows?: ";
	cin >> rows;
	cout << "How many computers on each?: ";
	cin >> computers;
	
	iptr *t = new iptr[rows];
	for (int i=0; i<rows; i++){
		t[i] = new int[computers];
	}
	
	for (int i=0; i<rows; i++){
		for (int j=0; j<computers; j++){
			t[i][j] = 0;
			cout << "empty ";
		}
		cout << endl;
	}
	
	int x = 0;
	int y = 0;
	int grade = 0;
	while (entering){
	cout << "what is the grade? :";
	cin >> grade;
	cout << "What row and computer gets it?: ";
	cin >> x >> y;
	t[x][y] = grade;
	for (int i=0; i<rows; i++){
		for (int j=0; j<computers; j++){
			if (t[i][j]==0){cout << "empty ";}
			else{cout << t[i-1][j-1];}
	}

	return 0;
}
	}
}
