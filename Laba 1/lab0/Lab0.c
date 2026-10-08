#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Hello Worl!");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Продолжение программы");
	return 0;
}	