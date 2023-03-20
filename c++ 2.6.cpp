#include <iostream>
using namespace std;

class bulat {
  friend ostream &operator << (ostream &, const bulat &);
  friend istream &operator >> (istream &, bulat &);

public:
  bulat();
  void bulat_o() { o = (l/m); }
  void bulat_p() { p = (l%m); }

private:
  int o, p,l,m;
};
bulat::bulat() {
  cout << "Program bilangan bulat\n";
}
istream &operator>>(istream &in, bulat &masukkan) {
  cout << "Masukkan nilai L : ";
  in >> masukkan.l;
  cout << "Masukkan nilai M : ";
  in >> masukkan.m;
  masukkan.bulat_o();
  masukkan.bulat_p();
  return in;
}
ostream &operator<<(ostream &out, const bulat &keluaran) {
  out << "konversinya adalah :  " << keluaran.o << endl;
  out << "konversinya adalah :  " << keluaran.p << endl;
  return out;
}
int main() {
  bulat n;
  cin >> n;
  n.bulat_o();
  n.bulat_p();
  cout << n;
  return 0;
}

