#include <iostream>
using namespace std;
int main()
{
	int i = 7;
	int j=(i++) + (i++) + (i++);
	cout << i << "    " << j << endl;
	j = (++i) + (++i) + (++i);
	cout << i << "    " << j << endl;
	return 0;
}


