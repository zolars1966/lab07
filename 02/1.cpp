#include <iostream>


int main(){
	{
		int x = 6, y = 4, z = 8;

		// starting point
		x = x + 1;
		z = z + 2*x + 3*y;
		y = y + 1;

		std::cout << x << " " << y << " " << z << "\n";
	}

	{
		int x = 6, y = 4, z = 8;

		// basic comma
		x += 1, z += 2 * x + 3 * y, y += 1;

		std::cout << x << " " << y << " " << z << "\n";
	}

	{
		int x = 6, y = 4, z = 8;

		// basic inc
		x++, z += 2 * x + 3 * y, y++;

		std::cout << x << " " << y << " " << z << "\n";
	}

	{
		int x = 6, y = 4, z = 8;

		// one-piece
		z += 2 * ++x + 3 * y++;

		std::cout << x << " " << y << " " << z << "\n";
	}

	return 0;
}
