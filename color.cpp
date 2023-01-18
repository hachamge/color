#include "color.h"
using std::to_string;

color::color(): co_prefix("\033[44m"), co_postfix("\033[0m") {}

//return a string including background:blue
string color::color_arg(int input) {
	string co_str = co_prefix + to_string(input);
	co_str.resize(co_str.size() + 8);
	co_str.replace(co_str.length(), 1, co_postfix);
	return co_str;
}

//return a string including background:blue
string color::color_arg(char input) {
	string co_str = co_prefix + to_string(input);
	co_str.resize(co_str.size() + 8);
	co_str.replace(co_str.length(), 1, co_postfix);
	return co_str;
}

//return a string including background:blue
string color::color_arg(string input) {
	string co_str = co_prefix + input;
	co_str.resize(co_str.size() + 8);
	co_str.replace(co_str.length(), 1, co_postfix);
	return co_str;
}

void color::change_foreground(unsigned short co) {
	string co_str = "\033[";
	co_str.resize(co_str.length() + 4);
	co_str.replace(5, 2, to_string(co));
	co_str.replace(7, 1, "m");
	cout << co_str;
}

//change background color specified until changed
void color::change_background(unsigned short co) {
	string co_str = "\033[";
	co_str.resize(co_str.length() + 4);
	co_str.replace(5, 2, to_string(co));
	co_str.replace(7, 1, "m");
	cout << co_str;
}

//return a string including foreground:fg, and background:bg 
string color::color_arg(string input, unsigned short fg, unsigned short bg) {
	string co_str = "\033[" + to_string(fg) + ";" + to_string(bg) + "m";
	co_str.resize(co_str.length() + input.length() + 1);
	co_str += (input + "\033[0m");
	return co_str;
}

//return a string including foreground:fg, and background:bg 
string color::color_arg(int input, unsigned short fg, unsigned short bg) {
	string co_str = "\033[" + to_string(fg) + ";" + to_string(bg) + "m";
	co_str.resize(co_str.length() + to_string(input).length() + 1);
	co_str += (to_string(input) + "\033[0m");
	return co_str;
}

//print foreground:fg, colors
void color::print_fg() {
	array<unsigned short, 8> foreground = {30, 31, 32, 33, 34, 35, 36, 37};
	for(unsigned short iterator1: foreground) {
		change_foreground(iterator1);
		cout << iterator1 << ' ';
	}
}

//print background:bg, colors
void color::print_bg() {
	array<unsigned short, 8> background = {40, 41, 42, 43, 44, 45, 46, 47};
	for(unsigned short iterator2: background) {
		change_background(iterator2);
		cout << iterator2 << ' ';
	}
	cout << endl;
}