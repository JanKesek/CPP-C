#include <iostream>
using namespace std;

int main() {
int k=0;
for (int i=0;i<66;i++) {
        if (k>0) {
	for (int l=0;l<k;l++) {
        cout << " ";
        }
	}
        for (int j=0;j<66-k;j++) {
                cout <<".";


        }
        if (k>0) {
	for (int m=0;m<=k;m++) {
        cout << " ";
        }
	}
        cout << endl;


        k++;
}

return 0;

}

