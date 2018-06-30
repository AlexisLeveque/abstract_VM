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
			std::cmatch match;

			if (i == 0 && std::regex_match(*iter, std::regex("^;;")) && !read_from_file) {
				//check for exit and quit execution
				break;
			}
			else if ( (*iter)[i] == ';') {
				std::cout << "Comment : " << *iter << std::endl;
				break;
			}
			else if (std::regex_match(&((*iter)[i]), match, std::regex("pop|dump|add|sub|mul|div|mod|print|exit"))) {
				std::vector<std::string> tmp;

				tmp.push_back(match[0]);
				result.push_back(tmp);
				i += match[0].str().size();
				std::cout << "Instruction : " << match[0].str() << std::endl;
			}
			else if (std::regex_match(&((*iter)[i]), match, std::regex("(push|assert) ((int8|int16|int32)\\(([-]?[0-9]+)\\)|(float|double)\\(([-]?[0-9]+.[0-9]+)\\))"))) {
				std::vector<std::string> tmp;

				tmp.push_back(match[1]);
				std::cout << "Instruction : " << match[1].str() << std::endl;
				if (match[3]!= "" && match[4] != "") {
					tmp.push_back(match[3]);
					tmp.push_back(match[4]);
				}
				else {
					tmp.push_back(match[5]);
					tmp.push_back(match[6]);
				}
				result.push_back(tmp);
				i += match[0].str().size();
			}
			else if ((*iter)[i] == ' ' || (*iter)[i] == '\t'){
				i++;
			}
			else {
				std::cout << "error";
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
	std::vector<std::vector<std::string> > instruction(parse(input));
	return 0;
}
