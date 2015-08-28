#include <assert.h>
#include <stdio.h>
#include "faktoriel.h"

int main()
{
	int n;
	
	// prvi test
	// da li je faktoriel(0) == 1
	n = faktoriel(0);
	assert( n == 1);	

	
	return 0;
}

