

bool primeorno(int num){

	for (int i = 2; i < num; i++) {
		if (fmod(num, i) == 0)
		{
			return false;

		}
	}
	return true;
}



