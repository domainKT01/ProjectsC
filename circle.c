/*
 * circle.cpp
 *
 *  Created on: 18/07/2023
 *      Author: Jared_Coronel
 */

#include "circle.h"
#include <stdio.h>
#include <math.h>

#define SIZE 6

double resilence(float num, bool boolean, char pas) {

	double res;
	char into = pas;

	switch(into) {

		case 'm':
			res = pow(num, 3);
			res = (res / 2) * 2;
			break;

		case 'M':
			res = pow(num, num);
			res = (res / num) - (num * num);
			break;
	}

	if (boolean == true){
		res = (res / 100) * num;
	}
	else {
		res = (res * 100) - 1;
	}

	return res;
}

