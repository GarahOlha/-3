#include <iostream>
#include <string>

int main() {
	std::string line;
	int result = 0;

	while (std::getline(std::cin, line)) {
		int count = 0;
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == ' ' || line[i] == '\t')
				count++;
		}
		if (count == line.length())
			result++;
	}

	std::cout << result << std::endl;
	return 0;

}
