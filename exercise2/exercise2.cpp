#include <iostream>
using namespace std;

int a[108];          
int n;               
int i;

void input() {      
	while (true) { 
		cout << "masukan banyak elemen pada Array : ";
		cin >> n; 
		if (n <= 108)  
			break;     
		else {
			           
			cout << "\nArray dapat nenpunyai maksimal 108 elemen"
		}

	}
}
