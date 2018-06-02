#include <iostream>
#include <string>

using namespace std;


class Flower {
	string bloomTime;
public:
	void setBloomTime(string bloomIn);
	string getBloomTime();
	Flower();
};


class Rose : public Flower {
	string fragrance;
public:
	Rose();
	void setFragrance(string fragIn);
	string getFragrance();

};

void Flower::setBloomTime(string bloomIn) {

	bloomTime=bloomIn; 
}
string Flower::getBloomTime() {
	return bloomTime;
}
Flower::Flower() {
	bloomTime = "summer";
}

Rose::Rose() {
	fragrance = "mellow";
}

void Rose::setFragrance(string fragIn) {
	fragrance = fragIn;
}
string Rose::getFragrance() {
	return fragrance;
}


int main()  {
	Rose r1;




	cout << "Rose blooms in " << r1.getBloomTime() << ", " << r1.getFragrance();   

	return 0;

}
