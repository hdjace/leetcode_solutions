class Solution {
public:
    vector<int> plusOne(vector<int> &digits);
        
    
};

vector<int> Solution::plusOne(vector<int> &digits)
{	int offset = 0;
	int len = digits.size();
	int i = len-1;
	do
	{
		int tmp = digits[i]+1;
		if (tmp >= 10)
			offset = 1;
		else
			offset = 0;
		digits[i] = tmp%10;
		i--;
	}
	while (offset == 1 && i >= 0);
	if (i < 0 && offset == 1)
	{
		digits.insert(digits.begin(), 1, 1);
		return digits;
	}
	return digits;
}