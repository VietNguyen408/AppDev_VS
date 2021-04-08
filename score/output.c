#include "score.h"

//this function will display all valid marks as first part, and
//statistics in the second part

void output_results(int m[], int st[]) {
	int i;
	printf("Here are the marks:\n");
	for (i = 0; i < MAX && m[i] != -1; ++i)
		printf("%3d", m[i]);

	puts(""); //make a new line
	printf("Here are the statistics:\n");
	for (i = 0; i < 6; ++i) {
		printf("Mark %d: %d hits:\n", i, st[i]);
	}
}