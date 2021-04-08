#include "appdev.h"

int main(void) {
	rock r;
	printf("Application Developers Rock!\n");
	printf("Enter Rocker's name: ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	srand(time(NULL));         // randomize the seed
	r.max = rand() % 50+51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rock'Roll\n");
	return 0;
}

// rand() function actually works in this way:
// r_next = (r_current*P1+P2)%rand_max