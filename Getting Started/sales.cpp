// shoes
// 600 a week
// 7hr + 10% sales
// 20% + 20 per shoe

#include <iostream>

using namespace std;

int calc_sales(char method, int sale_amount) {
	if (method == 'a') {
		return ((600));
	}
	if (method == 'b') {
		return ((8 * 7 + (sale_amount * 22.5))*5);
	}
	if (method == 'c') {
		return ((sale_amount * 22.5) + sale_amount * 20);
	}
	return 0;
}

int main () {

	cout << calc_sales('a', 15) << endl;
	cout << calc_sales('b', 15) << endl;
	cout << calc_sales('c', 15) << endl;

	return 0;
}
