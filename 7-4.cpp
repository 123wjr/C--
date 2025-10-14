#include <iostream>
#include <string>
int main()
{
	int n, round_last, max_count = 0, pos_last = -1;
	std::string str = "think";
	std::string input = "";
	std::string out= "";
	std::cin >> n;
	std::cin >> input;
	while (true)
	{
		int pos;
		pos = input.find_first_of("think", pos_last + 1);
		if (pos == -1)
		{
			break;
		}
		else if (input[pos] == input[pos_last])
		{
			pos_last = pos;
			continue;
		}
		out += str[pos];
		pos_last=pos;
	}
	for (int i = 0; i < out.length(); i++)
	{
		int pos = i;
		int round;
		int count = 0;
		switch (out[pos])
		{
		case 't': round = 0; break;
		case 'h': round = 1; break;
		case 'i': round = 2; break;
		case 'n': round = 3; break;
		case 'k': round = 4; break;
		}
		(round_last == -1) ? round_last = round : round_last;
		if (round_last % 5 + 1 == round % 5)
		{
			continue;
		}
		while (pos != -1)
		{
			pos = out.find(str[++round % 5], pos);
			count++;
		}
		max_count = std::max(count, max_count);
	}
	std::cout << max_count;
}