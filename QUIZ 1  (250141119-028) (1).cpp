#include <iostream>
using namespace std;
int main()
{
	int n, p, e = 0, t = 0, i;
	cout << "Enter total snack items: ";
	cin >> n;
	for(i = 1; i <= n; i++) {
		cout << "Enter price of snack " << i << ": ";
		cin >> p;
		t = t + p;
		if(p < 150) {
			cout << "Economy Snack" << endl;
			e++;
		} else {
			cout << "Regular Snack" << endl;
		}
	}
	cout << "\nTotal Sales = " << t << endl;
	cout << "Total Economy Snacks = " << e << endl;
	return 0;
}