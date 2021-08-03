#include <iostream>

int main()
{
	int alpha{ 255 };
	int red{ 128 };
	int green{ 64 };
	int blue{ 32 };

	unsigned int color;

	// Color mix
	color = alpha << 24;
	color = color | red << 16;
	color = color | green << 8;
	color = color | blue;

	std::cout << "Total color : " << color << std::endl;

	// Color division
	alpha = color >> 24;
	red = 0xFF & color >> 16;
	// green = 0xFF & 0x80 & color >> 8;
	green = 0xFF & color >> 8;

	std::cout << "Alpha : " << alpha << std::endl;
	std::cout << "Red : " << red << std::endl;
	std::cout << "Green : " << green << std::endl;
	std::cout << "Blue : " << blue << std::endl;
}

