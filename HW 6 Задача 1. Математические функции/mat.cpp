long double mat(int a, int b, int action) {
	switch (action)
	{
	case 1:
		return a + b;
		break;
	case 2:
		return a - b;
		break;
	case 3:
		return a * b;
		break;
	case 4:
		return a / b;
		break;
	case 5:
		if (b > 0) {
			for (int i = 1; i < b; i++) {
				a *= a;
			}
			return a;
		}else if (b < 0){
			b *= (-1);
			for (int i = 1; i < b; i++) {
				a *= a;
			}
			return 1 / static_cast<long double>(a);
		}
		else if(b == 0){
			return 1;
		}
		else { return 0; }
		break;
	}
}