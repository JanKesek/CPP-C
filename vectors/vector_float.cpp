/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include <iostream>
#include <vector>
using namespace std;


int main ()
{
  //TODO: instantiate vFloat vector
  
  vector<int> vectorInts;	
  vector<float> vFloat;	
  cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";  
  //Changing the size of vectorInts to 6
  //TODO: Change the size of vFloat to 10 elements
  
  vectorInts.resize(6);
  vFloat.resize(10);
  cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";
  cout<<"\n\n vectorInts now has "<<vectorInts.size()<<" elements\n";

  return 0;
}


