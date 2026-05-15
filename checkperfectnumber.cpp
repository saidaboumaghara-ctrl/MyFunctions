int checkperfectnumber(int num)
{
	int x = 0;
	for (int i = 1; i < num; i++)
		if (num % i == 0) {
			
			x = x + i;
			if (x == num)
				return IsPerfectOrNo::perfect;
			
				
		}
	return IsPerfectOrNo::notperfect;
}
