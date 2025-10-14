#include <cstdio>
#include <iostream>
#include <string>
int main()
{
	std::string str;			 // init input
	std::getline(std::cin, str); // storage the input
	int j = 1, ans = 0; // j is one of the multiplier, ans accumulate the result
	for (int i = 0; i < str.length() - 1;
		 i++) // the circle should end before the last one
	{
		if (str[i] == '-')
		{
			continue; // not multiply it
		}
		ans +=
			(str[i] - '0') * j++; // multiply the number not the ASCII with j
								  // and j add one, then add the answer to ans;
	}
	// judge the final char is correct or not
	int result = ans % 11;
	// specially result equals to 10
	if (result == 10)
	{
		if (str[str.length() - 1] == 'X')
		{ // str.length()-1 means the last one
			printf("%s", "Right");
		}
		else
		{
			printf(
				"%s%c", str.substr(0, str.length() - 1).c_str(),
				'X'); // slice the str from start to one before the last add X
		}
	}
	else // trivial result
	{
		if (str[str.length() - 1] ==
			'0' + result) // '0' + result means ASCII number
		{				  // str.length()-1 means the last one
			printf("%s", "Right");
		}
		else
		{
			printf("%s%c", str.substr(0, str.length() - 1).c_str(),
				   '0' + result); // slice the str from start to one before the
								  // last add number
		}
	}
	return 0;
}