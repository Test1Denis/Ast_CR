#include "polindrom.hpp"
#include <fstream>
#include <string>
int main(int argc, char** argv){
	argv[0] -- название программы
	argv[1] -- имя файа с числами....

	файл считываем пока не кончится

        FILE* input;
        FILE* output;

        int n;
        std::cin >> n; -- так не надо!!!
        std::cout << isPolindrom(n) << std::endl;

        input = fopen("input-polindrom.txt", "r");
        output = fopen("output-polindrom.txt", "w");
        int num;
        while(!feof(input)){
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

