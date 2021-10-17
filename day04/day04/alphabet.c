#include <stdio.h>

int main() {

	char alphabet[26];
	char ch = 'A';
	int i;


	//AÃâ·Â
	//	printf("%c %d\n", ch, ch);
	

	for (i = 0; i < 26; i++) {
		alphabet[i] = ch;
		ch++;
	}

	for (i = 0; i < 26; i++) {
		printf("%c %d \n", alphabet[i], alphabet[i]);
	}
	
	return 0;
}