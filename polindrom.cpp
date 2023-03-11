#include "polindrom.hpp"

int reversNum(int num){
	int rez = 0;
	while(num){
		rez *= 10;
		rez += num%10;
		num /= 10;
	}
	return rez;
}
bool isPolindrom(int num){
	if(num == reversNum(num)) return true;
	else{ return false; }	

}
