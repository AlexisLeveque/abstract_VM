#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>


bool read_from_file = false;

std::vector<std::vector<std::string> > parse(std::vector<std::string> input) {
	std::vector<std::vector<std::string> > result;
	auto iter = input.begin();
	while (iter != input.end()) {
		int i = 0;
		while (i < iter->size()) {
			std::smatch match;

			if (i == 0 && std::regex_match(*iter, std::regex("^;;")) && !read_from_file) {
				//check for exit and quit execution
				break;
			}
			else if ( (*iter)[i] == ';') {
				std::cout << "Comment : " << *iter << std::endl;
				break;
			}
			else if (std::regex_match(&((*iter)[i]), std::regex("pop|dump|add|sub|mul|div|mod|print|exit"))) {
				std::vector<std::string> tmp;
				std::ssub_match base_sub_match = match[0];

				tmp.push_back(base_sub_match.str());
				i += base_sub_match.str().size();
//				std::cout << "Instruction : " << match[0] << std::endl;
			}
			else if (std::regex_match(&((*iter)[i]), std::regex("(push|assert) ((int8|int16|int32)\\([-]?[0-9]+\\)|(float|double)\\([-]?[0-9]+.[0-9]+\\))"))) {
				for (auto it = match.begin(); it!=match.end(); ++it) {
					std::cout << *it << std::endl;
				}

				i++;
			}
			else {
				i++;
			}

		}
		++iter;
	}
	return result;
}

int main(int argc, char **argv) {
	std::string line;
	std::vector<std::string> input;

	if (argc > 1) {
		std::ifstream infile(argv[1]);
		read_from_file = true;
		while (std::getline(infile, line))
		{
			input.push_back(line);
		}
	}
	else {
		while (std::getline(std::cin, line)) {
			input.push_back(line);
			if (line == ";;") {
				break;
			}
		}
	}
//	std::vector<std::vector<std::string> > instruction(parse(input));
	std::cout << "yo"<< std::endl;
	return 0;
}
