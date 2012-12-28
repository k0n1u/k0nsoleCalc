int syntaxChecker(char *input)
{
	int counterNawOtw=0,counterNawZam=0,errorCode=0;

	for(int i=0;i<=strlen(input);i++)
	{
		if(input[i]=='(')
			counterNawOtw+=1;
		if(input[i]==')')
			counterNawZam+=1;
	}

	if(counterNawZam!=counterNawOtw)
		errorCode=1;

	return errorCode;
}