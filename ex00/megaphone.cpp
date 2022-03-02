#include <iostream>
#include <cctype>

using std::cout;
using std::endl;

int	main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			y = 0;
			while (argv[i][y])
			{
				argv[i][y] = (char)std::toupper(argv[i][y]);
				y++;
			}
			cout << argv[i];
			i++;
		}
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
}
