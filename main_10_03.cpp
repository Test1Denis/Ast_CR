#include "polindrom.hpp"
#include <fstream>
#include <string>
int main(){
	FILE* input;
	FILE* output;

	int n;
	std::cin >> n;
	std::cout << isPolindrom(n) << std::endl;
	
	input = fopen("input-polindrom.txt", "r");
	output = fopen("output-polindrom.txt", "w");
	int num;
	for(int i = 0; i < 10; i++){
		fscanf(input, "%d", &num);
		if(isPolindrom(num) == true){
			fprintf(output, "%d%s\n", num, " - polindrom ");
		}
		else{
			fprintf(output, "%d%s\n", num, " - not polindrom ");
		}
	}

	fclose(input);
	fclose(output);

	return 0;
}
