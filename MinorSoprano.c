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
#include <stdbool.h>

#define SIZE 6

int main(void) {

	char pas = 'M';

	double num = 101.8;

	printf("%s\n","insert number");

	bool b = true;

	double res;
	res = resilence(num, b, pas);

	printf("%lf", res);

	return 0;
}
