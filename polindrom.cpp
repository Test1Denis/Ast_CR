#include "polindrom.hpp"

bool reversNum(int num){
	int res = 0;
	while(num){
		res *= 10;
		res += num % 10;
		num /= 10;
	}
	//return res;
	return res == num;
}
bool isPolindrom(int num){
	return reversNum(num);




	if(num == reversNum(num)) 
		return true;
	else{ -- говорил что else уже не нужен
		return false; 
	}	

}
