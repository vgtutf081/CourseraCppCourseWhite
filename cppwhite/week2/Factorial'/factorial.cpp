int Factorial (int a){


	int sum = 1;

	if(a >= -10 && a <= 10){
	
		for(int i = 1; i <= a; i++){
		
			sum *= i;
		}
	}
	
	return sum;
}