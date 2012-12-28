void whatIsBeetween(char *input, char *output, int begin, int end) //funkcja wyciąga stringa z pomiędzy nawiasów
{
	int temp;

	//ta instrukcja ogranicza ilość przebiegów następnej pętli*/
	temp=end-begin;


	for(int i=0;i<temp+1;i++)
	{
	//ta pętla przepisuje znaki z wejścia na wyjście funkcji
		output[i]=input[begin];
		begin++;
	}
	printf("string printed from function: %s\n",output);
}