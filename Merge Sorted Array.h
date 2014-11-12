class Solution {
public:
    void merge(int A[], int m, int B[], int n);
};

void Solution::merge(int A[], int m, int B[], int n)
{
	int k = m-1;
	int j = 0;
	int flag = -1;
	for (; j < n; j++)
	{	
		int i = k;
		int v = B[j];
		while(v < A[i] && i >= 0 && i > flag)
		{
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = v;
		flag = i+1;
		k++;
	}
}