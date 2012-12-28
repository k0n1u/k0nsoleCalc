void szukajNajglebszychNawiasow(char *input, char *output, int *begin, int *end)
{
	for(int i=0;i<=strlen(input)-1;i++)
	{
	//ta pętla "szuka" ostatniego nawiasu otwierającego 
	//i zapamiętujemiejsce wystąpienia pierwszego znaku po nim
	//oraz miejsce wystąpienia ostatniego znaku pomiędzy nawiasami
		if(input[i]=='(')
			*begin=i+1;
		if(input[i]==')')
		{	
			*end=i-1;
			break;
		}
	}	
}