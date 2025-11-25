#include <iostream>
using namespace std;

int main() {
	int hour, min, tmp;
	cin >> hour >> min;
	tmp = hour * 60 + min;

	if(tmp < 45)
		tmp += 24 * 60;
	tmp -= 45;
	hour = tmp / 60;
	min = tmp % 60;
	cout << hour << ' ' << min << endl;
	return 0;
}