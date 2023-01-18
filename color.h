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
		
		void print_fg();
		void print_bg();
		void change_foreground(unsigned short);
		void change_background(unsigned short);
		
		string color_arg(int);
		string color_arg(char);
		string color_arg(string);

		string color_arg(int, unsigned short, unsigned short);
		string color_arg(string, unsigned short = 37, unsigned short = 44);
	private:
		string co_prefix;
		string co_postfix;
};
#endif 
