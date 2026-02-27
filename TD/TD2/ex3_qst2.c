#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x, y;
	
	printf("Entrez les valeurs de x et y :\n");
	printf("\n      - la valeur de x : ");
	scanf("%d", &x);
	
	printf("\n      - la valeur de y : ");
	scanf("%d", &y);
	
	printf("\n\n\nVoici x et y avec les valeurs que vous avez entré ainsi que leurs adresses mémoires :\n");
	printf("      - x :\n           - addresse : %p\n           - valeur : %d\n", &x, x);
	printf("      - y :\n           - addresse : %p\n           - valeur : %d\n\n\n", &y, y);
	
	printf("\n[");

	
	swap(&x, &y);
	for (int i = 0 ; i < 50 ; i++) {
		printf("=");
		fflush(stdout);
		nanosleep(&(struct timespec){0, 100000000}, NULL);
	}
	printf(">] swap !\n\n");
	
	
	printf("Voici les nouvelles valeurs de x et y après les avoir permuté par adresses :\n");
	printf("      - x :\n           - addresse : %p\n           - valeur : %d\n", &x, x);
	printf("      - y :\n           - addresse : %p\n           - valeur : %d\n\n\n", &y, y);
	
	return 0;
}



