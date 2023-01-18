#ifndef COLOR_H
#define COLOR_H

#include <array>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::array;
using std::string;

class color {
	public:
		color();
		
		void print_colors();
		void change_foreground(unsigned short);
		void change_background(unsigned short);
		
		string color_arg(int, unsigned short = 37, unsigned short = 44);
		string color_arg(string, unsigned short = 37, unsigned short = 44);
	private:
		string co_prefix;
		string co_postfix;
};
#endif 
