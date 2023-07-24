#include <main.h>
#include <stdio.h>

void reset_to_98(int *n){
	*n=98;
}

int main() {
	int num = 5;
	printf("Before calling reset_to_98: %d\n", num);

    reset_to_98(&num);

    printf("After calling reset_to_98: %d\n", num);

    return 0;
}	
