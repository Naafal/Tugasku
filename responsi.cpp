#include <iostream>
#include <fstream>
using namespace std;

struct n_simpan{
	string nama;
	string nim;
	char kelas;
	string prodi;
};

void simpanData() {
	n_simpan simpan[50];
	int n=0;
	
  	cin.ignore();
  	cout<<"Masukkan Nama    : ";getline(cin, simpan[n].nama);
  	cout<<"Masukkan NIM     : ";cin >>simpan[n].nim; 
	cout<<"Masukkan Kelas   : ";cin >>simpan[n].kelas;
  	cout<<"Masukkan Prodi   : ";cin >>simpan[n].prodi; 	
  	n++;
  	
	ofstream simpanText("mahasiswa2.txt", ios::app);
		if(n == 0){
			simpanText << "Belum ada data mahasiswa!" <<endl;
		}else {
			for(int i = 0; i < n; i++){
			simpanText << "=========DATA MAHASISWA=========" << endl;
  			simpanText << "NAMA    : "<<simpan[i].nama<<endl;
  			simpanText << "NIM     : "<<simpan[i].nim;
  			simpanText << "KELAS   : "<<simpan[i].kelas<<endl;
  			simpanText << "PRODI   : "<<simpan[i].prodi<<endl;
  			simpanText << "================================" << endl;
			simpanText<<endl;
			}	
		}
	simpanText.close();	
}

void bacaData() {
	ifstream bacaFile("mahasiswa2.txt");
  	string tampungDataKu;
	
	while (getline (bacaFile, tampungDataKu)) {		
  		cout << tampungDataKu << endl;
	}	
	bacaFile.close();
}

int totalMahasiswa() {
	ifstream bacaFile("mahasiswa2.txt");
  	string tampungDataKu;
	
	
	int tempItung = 0;
	while (getline (bacaFile, tampungDataKu)) {
  		tempItung++;
	}
	
	bacaFile.close();
	return tempItung/6;
}

void display(){
	int pil;
	bool loop = true;
	while(loop){
		cout << "Program Data Mahasiswa" << endl;
		cout << "======================" << endl;
		cout << "1. Menambah Data" << endl;
		cout << "2. Lihat Data" << endl;
		cout << "3. Lihat Jumlah Mahasiswa" << endl;
		cout << "4. Keluar dari program" << endl;
		cout << "Masukkan Pilihan : ";
		cin >> pil;
		cout << "======================" << endl;
		switch(pil){
			case 1:
				simpanData();
				system("pause");
				system("cls");
				break;
			case 2:
				bacaData();
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"Total Mahasiswa: "<<totalMahasiswa()<<endl;
				system("pause");
				system("cls");
				break;
			case 4:
				loop = false;
				break;
			default:
				loop = false;
				break;
		}
	}
}

int main() {
  	display();
}
