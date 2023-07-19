/*
 * MinorSoprano.c
 *
 *  Created on: 19/07/2023
 *      Author: Jared_Coronel
 */

#include "MinorSoprano.h"
#include "circle.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void) {

	char pas = 'm';

	double num = 19;

	printf("insert number");

	scanf(&num);

	bool b = true;

	double res;
	res = resilence(num, b, pas);

	printf("%lf", res);

	return 0;
}
