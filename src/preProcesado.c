#include "../includes/preProcesado.h"

double* noise_saturation_prepro (const uint32_t *vector, const uint32_t size)
{
	double *ret = NULL;
	uint64_t sum = 0U;
	uint32_t i = 0U ;
	ret = malloc( sizeof(double) * size );
	if ( ret  == NULL )
		return NULL;
	
	for ( i = 0U ; i < size   ; ++i ) {
		sum += vector[i];
	}
	for ( i = 0U ; i < size   ; ++i ) {
		ret [i] = (double) vector[i] / sum;
	}
	
	return ret;
	
}

