#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10] ;
	int *pa;
	int x;
	
	a[0] = 11;
	a[1] = 22;
	a[2] = 33;
	a[3] = 44;
	
	/*for (int i = 0 ; i < 4 ; i++) {
		if (i == 0) {
			printf("[ valeur : %d - addr : %p,", a[i], &a[i]);
		} else if (i == 3) {
			printf(" valeur : %d - addr : %p ]\n", a[i], &a[i]);
		} else {
			printf(" valeur : %d - addr : %p,", a[i], &a[i]);
		}
	}*/
	
	pa = &a[0];
	//printf("commande executée : pa = &a[0]\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\n", pa, *pa);
	
	
	x = *pa;
	//printf("commande executée : x = *pa\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\n\n", pa, *pa);
	
	pa++;
	//printf("commande executée : pa++\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = *pa;
	//printf("commande executée : x = *pa\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = *pa+1;
	//printf("commande executée : x = *pa+1\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = *(pa + 1);
	//printf("commande executée : x = *(pa + 1)\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = *++pa;
	//printf("commande executée : x = *++pa\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = ++*pa;
	//printf("commande executée : x = ++*pa\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n\n", pa, *pa, x);
	
	x = *pa++;
	//printf("commande executée : x = *pa++\npa : \n    valeur du pointeur pa : %p\n    valeur sur laquelle pointe pa : %d\nx : %d\n", pa, *pa, x);
	
	return 0;
}
