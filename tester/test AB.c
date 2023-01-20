#include <stdio.h>
#include <stdlib.h>

float *construieste_vector_medii(int lungime)
{
	int i = 0;
	float *vector = (float*)malloc(lungime*sizeof(float));
	printf("Introdu mediile studentilor: ");
	for(i = 0; i < lungime; i++)
		scanf("%f",&vector[i]);
	return vector;
}

float *extinde(float *v,int *lungime)
{
	int i = 0;
	float *v_realocat = (float*)realloc(v,(*lungime+2)*sizeof(float));
	for(i = *lungime; i < *lungime + 2; i++)
		v_realocat[i] = v_realocat[*lungime-1];
	*lungime += 2;
	return v_realocat;
}


int main()
{
	int i;
	int cnt = 0;
	int numar_burse;
	printf("Introdu numar de burse: ");
	scanf("%d",&numar_burse);

	float *vector_medii = construieste_vector_medii(numar_burse);
	vector_medii = extinde(vector_medii,&numar_burse);

	for(i = 0; i < numar_burse; i++)
		printf("%.2f ",vector_medii[i]);

	printf("\n");


	for(i = 0; i < numar_burse; i++)
		if(vector_medii[i] > 9.50) cnt++;
	printf("Numar studenti cu media mai mare de 9.50: %d",cnt);

	printf("\n");

	for(i = 0; i < numar_burse; i++)
		if(vector_medii[i] > 9.50) printf("%.2f ",vector_medii[i]);


	return 0;
}
