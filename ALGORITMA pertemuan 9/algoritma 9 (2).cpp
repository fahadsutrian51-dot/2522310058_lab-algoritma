#include <iostream>
using namespace std;

int main() {
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	
	cout << "Masukan jumlah baris (1 - 100: ";
	cin >> r;
	
	cout << "Masukan jumlah kolom (1 - 100: ";
	cin >> c;
	
	cout << endl << "Masukan matriks pertama:" << endl;
	for (i = 0; i < r; ++) {
		for (j = 0; j < c; ++) {
			cout << "Matriks a[" << i + 1 << "][" << j + 1 << "] ";
			cin >> a[i][j];
		}
	}
	
	cout << endl << "Masukan matriks kedua:" <<endl;
	for (i = 0; i < r; ++i) {
		for (j = 0; j < c; ++j) {
			cout << "Matriks b[" << "][" << j + 1 << "]: ";
			cin >> b [i][j];
		}
	}
	
	cout << endl << "Hasil perjumlahan kedua matriks:" << endl;
	for (i = 0 i < r; ++i) {
		cout << sum[i][j] << " ";
	}
	cout << endl;
    }
return 0;
}

 
	}
	 
}



