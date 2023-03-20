#include <iostream>
using namespace std;

class konvrensi{
	friend ostream& operator << (ostream&, const konvrensi&);
	friend istream& operator >> (istream&, konvrensi&);
	public:
		konvrensi();
		void konvrensi_ke_cm(){cm = (m * 100);}
    void konvrensi_ke_inc(){inc = m * 100/2.54;}
	private:
		float m,cm,inc;
};
konvrensi::konvrensi(){
	cout << "Program mengkonvrensi dari m ke cm dan ke inci\n";
}
istream& operator>>(istream& in, konvrensi& masukkan){
	cout << "Masukkan nilai m : ";in>>masukkan.m;
  	masukkan.konvrensi_ke_cm();
  	masukkan.konvrensi_ke_inc();
  	return in;
}
ostream& operator << (ostream& out, const konvrensi& keluaran){
	out << "konvrensi ke cm adalah :  " << keluaran.cm << endl;
  	out << "konvrensi ke inc adalah :  " << keluaran.inc << endl;
	return out;
}
int main(){
	konvrensi k;
	cin>>k;
	k.konvrensi_ke_cm();
  	k.konvrensi_ke_inc();
	cout<<k;
	return 0;	
}

