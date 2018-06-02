#include <iostream>
using namespace std;



int &swaps_p(int* a, int* b) {
a*=b&;
b*=a&;

return &b;
}



int main () {

int *a;
&a=50;
int *b;
&b=60;
swaps_p(*a,*b);

return 0;
}
