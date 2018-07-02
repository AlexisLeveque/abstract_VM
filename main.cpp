#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include "IOperand.hpp"


bool read_from_file = false;

std::vector<std::vector<std::string> > parser(std::vector<std::string> input) {
	std::vector<std::vector<std::string> > result;
	auto iter = input.begin();
	while (iter != input.end()) {
		unsigned int i = 0;
		while (i < iter->size()) {
			std::cmatch match;

			if (i == 0 && std::regex_match(*iter, std::regex("^;;")) && !read_from_file) {
				//check for exit and quit execution
				break;
			}
			else if ( (*iter)[i] == ';') {
				std::cout << "Comment : " << &((*iter)[i]) << std::endl;
				break;
			}
			else if (std::regex_match(&((*iter)[i]), match, std::regex("(pop|dump|add|sub|mul|div|mod|print|exit).*"))) {
				std::vector<std::string> tmp;

				tmp.push_back(match[1]);
				result.push_back(tmp);
				i += match[1].str().size();
				std::cout << "Instruction : " << match[1].str() << std::endl;
			}
			else if (std::regex_match(&((*iter)[i]), match, std::regex("((push|assert) ((int8|int16|int32)\\(([-]?[0-9]+)\\)|(float|double)\\(([-]?[0-9]+.[0-9]+)\\))).*"))) {
				std::vector<std::string> tmp;

				tmp.push_back(match[2]);
				std::cout << "Instruction : " << match[2].str();
				if (match[4]!= "" && match[5] != "") {
					std::cout << " Params : " << match[4].str() << " " << match[5].str() << std::endl;
					tmp.push_back(match[4]);
					tmp.push_back(match[5]);
				}
				else {
					std::cout << " Params : " << match[6].str() << " " << match[7].str() << std::endl;

					tmp.push_back(match[6]);
					tmp.push_back(match[7]);
				}
				result.push_back(tmp);
				i += match[1].str().size();
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

void work(std::vector<std::vector<std::string> > instruction) {
	typedef void (*function)(std::vector<IOperand>, std::vector<std::string>);
	std::vector<IOperand> stack;
//	std::map<std::string, function> func;
//	for (std::vector<std::vector<std::string> >::iterator it = instruction.begin(); it != instruction.end(); ++it) {
//		auto iter = func.find((*it)[0]);
//		(*iter->)(stack, *it);
//	}
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

	std::vector<std::vector<std::string> > instruction(parser(input));

	work(instruction);
	return 0;
}
