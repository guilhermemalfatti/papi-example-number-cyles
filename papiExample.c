//compile:
//	g++ papiExample.c -o testPAPI -lpapi

//exeution
//	./testPAPI
#include <stdio.h>
#include <papi.h>


#define NUM_PONTOS 4000000

int main(int argc, char **argv){
		int EventSet = PAPI_NULL;
		long long valor;
		PAPI_library_init(PAPI_VER_CURRENT);
		PAPI_create_eventset(&EventSet);
		PAPI_add_event( EventSet, PAPI_TOT_CYC);
		PAPI_start(EventSet);
		PAPI_reset(EventSet);

		long long int i;
		float pi=0.0;
		for(i=0;i<NUM_PONTOS;i++){
				pi += 4.0/(4.0*i+1.0);
				pi -= 4.0/(4.0*i+3.0);
		}
		PAPI_read(EventSet, &valor);
		printf("PAPI_TOT_CYC = %llu\n", valor);
		PAPI_stop(EventSet, NULL);
		return 0;

}