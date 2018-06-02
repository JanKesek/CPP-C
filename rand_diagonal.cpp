#include <iostream>
using namespace std;


class Mac_kwadr {
	int a;
	int s[a][a];
	public:
	void init();
	Mac_kwadr(int s_in[a_in][a_in],int a_in);
	void wstaw();
	void wypisz ();
};

void Mac_kwadr::init() {
	for (int i=0;i<a;i++) {
		for (j=0;j<a;j++) {
			s[i][j] = 0; 
		}
	}
}

Mac_kwadr::Mac_kwadr(int s_in[a_in][a_in], int a_in) {
	a=a_in;
	for (int i=0;i<a_in;i++) {
		for (int j=0;j<a_in;j++) {
			s[i][j] = s_in[i][j];
}

void Mac_kwadr::wstaw() {
        for (int i=0;i<a;i++) {
              s[i][i]= rand() % a;
        }
}

void Mac_kwadr::wypisz() {
	for (int i=0;i<a;i++) {
                for (j=0;j<a;j++) {
                        cout << s[i][j] << " ";
                }
	cout << endl;
        }
}


int main() {

Mac_kwadr s1(10);
s1.init;
s1.wstaw;
s1.wypisz;

return 0; 
}
