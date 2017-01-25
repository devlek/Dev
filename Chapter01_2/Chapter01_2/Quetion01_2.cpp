#include<iostream>


int swap(int* a, int* b)
{
	int temp;

		temp = *a;
	*a = *b;

	*b = temp;

	return *a, *b;
}

char swap(char* c, char* d)
{
	char temp;
	temp = *c;
	*c = *d;
	*d = temp;

	return *c, *d;
}

double swap(double *e, double *f)
{
	double temp;
	temp = *e;
	*e = *f;
	*f = temp;

	return *e, *f;

}


int main(void)

{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;


}