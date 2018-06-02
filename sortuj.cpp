#include <iostream>
using namespace std;




class Sort {
const int n;
int max=1000;
int tab[n];
 
public:
	Sort(int tab_in[n_in], int n_in);

};


Sort::Sort(int tab_in[n_in],int n_in) {
	n=n_in;
	int w=40;
	
	for (int i=0;i<n;i++) {
		tab_in[i] = w;
		tab[i] = tab_in[i];
		w--;	
	}
}


int main() {

Sort s1(int t1[14], 14);
return 0;

}
