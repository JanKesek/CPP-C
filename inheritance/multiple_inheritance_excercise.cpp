/*Goal: practice multiple inheritance
*In main.hpp you will find two classes: 
*Patient and Dog. 
*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public  getName and setName functions.
*/

//header file for main.cpp
/*TODO: 
*-  create a class called Pet
*- it inherits from both the class Patient 
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>
using namespace std;


class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
	Patient();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

Patient::Patient() {
	idNumber=666;
}
class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
	Dog();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}
Dog::Dog() {
	breed = "Hell"; 
}

class Pet : public Dog, public Patient {
string name;
public:
void setName(string nameIn);
string getName();
Pet();
};

void Pet::setName(string nameIn) {
	name = nameIn;
}
string Pet::getName() {
	return name;
}

Pet::Pet() {
	name = "Satan";
}

int main()
{
    Pet p1;
/*    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");
   */ 
    cout<<p1.getName()<<" "<<p1.getIdNumber()<<" "<<p1.getBreed();
    return 0;
}
