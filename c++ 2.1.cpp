#include <iostream>
using namespace std;

class Hitung{
	friend ostream& operator << (ostream&, const Hitung&);
	friend istream& operator >> (istream&, Hitung&);
public:
	Hitung();
	void hitung_jumlahnya(){jumlah = (k + l + m);}
private:
	int k,l,m;
	int jumlah;
};
Hitung::Hitung(){
	cout << "Program menghitung jumlah 3 integer\n";
}
istream& operator>>(istream& in, Hitung& masukan){
	cout << "Masukkan nilai K : "; in >> masukan.k;
	cout << "Masukkan nilai L : "; in >> masukan.l;
	cout << "Masukkan nilai M : "; in >> masukan.m;
	return in;
}
ostream& operator<<(ostream& out, const Hitung& keluaran){
   out << "Jumlah 3 integer di atas : " << keluaran.jumlah << endl;
   return out;
}
int main(){
	Hitung n;
	cin >> n;
	n.hitung_jumlahnya();
	cout << n;
	return 0;
}

