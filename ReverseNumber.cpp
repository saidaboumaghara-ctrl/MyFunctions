// 1234 to 4321
int ReverseNumber(int number) {
	int reversed = 0;

	while (number > 0) {
		reversed = reversed * 10 + (number % 10);
		number = number / 10;
	}
	return reversed;
}
