#include "color.h"

int main(void) {
	color co;
	co.print_fg();
	co.print_bg();
	cout << co.color_arg("ind1", 34, 46) << endl;
	cout << co.color_arg(15, 35, 44) << endl;
	return 0;
}
