#include <iostream>

class figure {
protected:
	const std::string white = "W";
	const std::string black = "B";

public:
	virtual ~figure() {};

	bool inBoard(int x, int y) {
		if (x <= 8 && x >= 0 && y <= 8 && y >= 0)
		{
			return true;
		}
		return false;
	}
};

class king : public figure {

public:
	int x = 0;
	int y = 0;
	std::string name;

	king(std::string color, int a, int b) {
		if (figure::inBoard(a, b))
		{
			if (color == figure::black || color == figure::white)
			{
				name = color + "K";
				x = a - 1;
				y = b - 1;
			}
			else {
				std::cout << "Error: wrong color entered" << std::endl;
			}
		}
		else {
			std::cout << "Error: can't use cell out of board" << std::endl;
		}
	}
};

class queen : public figure {

public:
	int x = 0;
	int y = 0;
	std::string name;

	queen(std::string color, int a, int b) {
		if (figure::inBoard(a, b))
		{
			if (color == figure::black || color == figure::white)
			{
				name = color + "Q";
				x = a - 1;
				y = b - 1;
			}
			else {
				std::cout << "Error: wrong color entered" << std::endl;
			}
		}
		else {
			std::cout << "Error: can't use cell out of board" << std::endl;
		}
	}
};

class bishop : public figure {

public:
	int x = 0;
	int y = 0;
	std::string name;

	bishop(std::string color, int a, int b) {
		if (figure::inBoard(a, b))
		{
			if (color == figure::black || color == figure::white)
			{
				name = color + "B";
				x = a - 1;
				y = b - 1;
			}
			else {
				std::cout << "Error: wrong color entered" << std::endl;
			}
		}
		else {
			std::cout << "Error: can't use cell out of board" << std::endl;
		}
	}
};

class knight : public figure {

public:
	int x = 0;
	int y = 0;
	std::string name;

	knight(std::string color, int a, int b) {
		if (figure::inBoard(a, b))
		{
			if (color == figure::black || color == figure::white)
			{
				name = color + "N";
				x = a - 1;
				y = b - 1;
			}
			else {
				std::cout << "Error: wrong color entered" << std::endl;
			}
		}
		else {
			std::cout << "Error: can't use cell out of board" << std::endl;
		}
	}
};