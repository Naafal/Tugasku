#include <iostream>
using namespace std;

class Perkalian{
	friend ostream& operator << (ostream&, const Perkalian&);
	friend istream& operator >> (istream&, Perkalian&);
public:
	Perkalian();
	void hitung_perkaliannya(){kali = (k * l);}
private:
	int k,l;
	int kali;
};
Perkalian::Perkalian(){
	cout<<"Program menghitung perkalian 2 integer\n";
}
istream& operator>>(istream& in, Perkalian& masukan){
	cout<<"Masukkan nilai K : "; in>>masukan.k;
	cout<<"Masukkan nilai L : "; in>>masukan.l;
	return in;
}
ostream& operator<<(ostream& out, const Perkalian& keluaran){
   out<<"Kali 2 integer di atas : "<<keluaran.kali<<endl;
   return out;
}
int main(){
	Perkalian m;
	cin >> m;
	m.hitung_perkaliannya();
	cout << m;
	return 0;
}

