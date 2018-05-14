#include <iostream>
#include <cstdlib>

int main()
{
	int input_a = 0;
	int output_a = 0;
	int output_b = 0;
	int output_c = 0;
	int func_a = 0;
	
	std::cout << "Factorial of which integer?\n\n>";
	std::cin >> input_a;
	for (func_a = 0; func_a < input_a; func_a++)
	{
		output_a = (input_a - func_a);
		output_b += output_a;
		if (func_a == 0)
		{
			output_c = output_a * (output_a - (func_a + 1));
			std::cout << "\n" << output_a << " x " << (output_a - 1) << " = " << output_c << ".\n\n";
		}
		else
		{
			if (output_a > 1)
			{
				output_c *= (output_a - 1);
				std::cout << ">" << output_a << "\n\n" << (output_c / (output_a - 1)) << " x " << (output_a - 1) << " = " << output_c << "\n\n";
			}
			else
			{
				std::cout << ">" << output_a << "\n\n_________________________";
			}
		}
	}
	
	std::cout << "\n\nThe sum is " << output_b << ".\n\nThe product is " << output_c << ".\n";
	std::cin.get();
	std::cin.ignore();
	return 0;
}

