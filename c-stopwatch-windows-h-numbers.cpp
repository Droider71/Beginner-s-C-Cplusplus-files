#include <windows.h>
#include <stdio.h>
#include <time.h>
int main()
{
	int x;
	printf("Zadej sekundy: ");
scanf("%d", &x);
if(x<0||x>2147483647) {
printf("rozsah 0 az 2147483647\n");main(); }


while (x >= 0)
	{ 
system("cls"); printf("%d\n", x);Sleep(1000); Beep(5000,1000);
x=x-1;}


				
}