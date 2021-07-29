bool IsPalindrom(string palindrom) {

    for (int i = 0; i < palindrom.size() / 2; ++i) {
		
        if (palindrom[i] != palindrom[palindrom.size() - i - 1]) {
			
            return false;
        }
    }
	
    return true;
}
