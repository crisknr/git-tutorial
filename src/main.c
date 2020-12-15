#include<stdio.h>
#include <string.h>

#include "espl_lib.h"

int main() {
	printf("Hello ESPL\n");
	printf("This is a new print\n");
	unsigned int num;
	char state = 'y';
	char words[25];
	while (state == 'y'){
		printf("Enter a number: ");
		scanf(" %d", &num);
		strcpy(words, num_to_words(num));
		printf("Result: %s\n", words);
		printf("Convert new number? [y]es / [n]o: ");
		scanf(" %c", &state);
	}
	return 0;
}