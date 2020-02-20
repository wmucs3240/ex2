#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum _caste { BREEDER, WORKER, SOLDIER } caste_t;

typedef struct _ant {
	int id;
	char name[4];
	caste_t caste;
} ant_t;

int main(int argc, char **argv) {
	ant_t **ants = malloc(sizeof(ant_t*) * 3);
	ant_t wyatt = { 1023, "Rory", WORKER };

	int i;
	for(i = 0; i < 2; ++i) {
		*(ants + i) = malloc(sizeof(ant_t));
	}

	char *long_name = malloc(sizeof(char) * 22);
	long_name = "Waverly";

	ants[0]->id = 1011;
	strcpy(ants[0]->name, long_name);
	ants[0]->caste = WORKER;

	ants[1] = &wyatt;

	ants[2]->id = 1034;
	strcpy(ants[2]->name, "Cody");
	ants[2]->caste = SOLDIER;

	for(i = 0; i < 3; ++i) {
		ant_t *a = ants[i];
		printf("{ #%d: %s, %d }\n", a->id, a->name, a->caste);
	}

	return 0;
}

