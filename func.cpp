#include "func.h"
#include <cmath>

double FuncClass::FuncA(){
	double result = 1;
	double x = 0.5;
	double term = x/2;
	
	for(int i = 1; i < 3; ++i){
	result += term;
	term *= -x * (2* i - 1)/(2 * i);
	}
	
	return result;
}
