//123 to 1+2+3
void PrintDigits(int number)
{
	int remainder = 0;
	int sum = 0;
	while (number > 0)
	{
		remainder=number % 10;
		number = number / 10;
		sum = remainder + sum;
	}
	
	cout << sum;
}
