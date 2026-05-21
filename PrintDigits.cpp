void PrintDigits(int number)   //125 to  \\ 5
                                          \\2
                                           \\ 1
{
	int remainder = 0;
	while (number > 0)
	{
		remainder=number % 10;
		number = number / 10;
		cout << remainder << endl;
	}

}
