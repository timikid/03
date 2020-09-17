#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("input an alphbet : ");
	scanf("%c", &c);
	
	printf("input alphabet is %c (%d), and the next one is %c (%d)\n", c, c, c+1, c+1);
	
	return 0;
}
