#include <stdio.h>
#include <stdlib.h>

int main() {

	int dice, i;


	srand(time(NULL));
	printf("%d\n", rand());

	for(i = 0; i<10; i++){
	dice = rand()%6 +1;
		printf("ÁÖ»çÀ§ ´« :%d\n", dice);
	}

	return 0;
}