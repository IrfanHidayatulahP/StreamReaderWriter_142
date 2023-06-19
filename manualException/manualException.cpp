#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//thow 0.5 //melemparkan sebuah integer maka
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Peryataan tidak akan dieksekusi" << endl;
	}
	catch (...) {
		/*Jika selain integer maka block ini akan dieksekusi*/
		cout << "Default Pengecualian dixsekusi" << endl;
	}

	return 0;
}

