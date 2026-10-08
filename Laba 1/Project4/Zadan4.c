void name();
void date();

void main()
{
	name();
	date();
}

#include <locale.h>
void name()

{
	setlocale(LC_ALL, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* Тема: Разработка консольного приложения *");
	puts("*                                         *");
	puts("       Выполнил Иванов И.И.               *");
	puts("*                                         *");
	puts("*******************************************");
}

void date()
{
	setlocale(LC_ALL, "RUS");
	puts("  _          _    _     _   _ ");
	puts("  _|  |_|   | |   _|   | | |_|");
	puts(" |_     | . |_|  |_  . |_|  _|");
}