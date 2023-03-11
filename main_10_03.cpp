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
				
	
//	std::ifstream input("input-polindrom.txt"); //Открываешь первый файл для чтения
//    	std::ofstream output("output-polindrom.txt"); //Открываешь второй файл для записи
//    	output << input.rdbuf(); //Копируешь буфер файлового потока ввода (input) в файловый поток вывода (output)
//    	while(std::getline(input, str)){  

	fclose(input);
	fclose(output);

	return 0;
}
