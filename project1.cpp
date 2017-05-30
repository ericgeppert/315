//Eric Geppert
//323005275
//CSCE 315-100
//Due: June 5, 2017 (or whatever the due date is)
//project1.cpp
//http://www.stroustrup.com/Programming/PPP-style-rev3.pdf-rules
//cant have warnings!!
//divide into 1000 points then save for later
//use float x;
//something shorter than calling e^-x.
//run code by daugherty

#include <iostream>
#include <cmath>

using namespace std;

//weak external referance below, uses this one unless linked to 
// another "check"
//check for x=0 (y=.5)
void __attribute__((weak)) check(float alt_sigmoid(float));

//default check function - definition may be changed - will not be graded
void __attribute__((weak)) check(float alt_sigmoid(float)){
	if(alt_sigmoid(0.0f) >= 0.49f && alt_sigmoid(0.0f) <= 0.51f)cout << "PASS\n";
	else cout << "FAIL\n";
	return;
}

//change this definition -  will be graded by a different check function
float my_sigmoid(float x)
{
	
	return 0.0f;	//stub ***********************************************
}

//Do not change this function
int main(){
	check(my_sigmoid); 
	return 0;
}