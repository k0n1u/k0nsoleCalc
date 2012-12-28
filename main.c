//kalkulator konsolowy

#include <stdio.h>
#include <string.h>
#include "includes/syntax.h"
#include "includes/nawiasSearcher.h"
#include "includes/whatIsBeetween.h"



int main()
{
	//variables
	char pars_input[200], pars_output[200];
	int begin,end;

	//pointers
	char *P_pars_input=&pars_input;
	char *P_pars_output=&pars_output;


	printf(">");
	scanf("%s",&pars_input);

	if(syntaxChecker(P_pars_input)==1)
		printf("Błąd składni\n");
	else
		printf("wszystko ok\n");
	//szukajNajglebszychNawiasow(P_pars_input,P_pars_output,&begin,&end);
	//printf("in main| begin: %d end: %d",begin,end);
	//whatIsBeetween(P_pars_input,P_pars_output,begin,end);


	//whatIsBeetween(P_pars_input,P_pars_output);
	//printf("string wynikowy (printed from int main): %s\n",pars_output);
}