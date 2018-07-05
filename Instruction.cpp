//
// Created by PC on 04/07/2018.
//

#include <iostream>
#include <vector>
#include <map>
#include "IOperand.hpp"
#include "OperandFactory.hpp"

std::map<std::string, eOperandType> typeMap = {
		{ "int8", Int8 },
		{ "int16", Int16 },
		{ "int32", Int32 },
		{ "float", Float },
		{ "double", Double }
};

void InstrPush(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	const OperandFactory factory;
	const IOperand *res = factory.createOperand(typeMap[instr[1]], instr[2]);
	stack.push_back(res);
}

void InstrPop(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	(void)instr;
	if (!stack.empty()) {
		stack.pop_back();
	}
	else {
		//throw error
	}
}

void InstrDump(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	(void)instr;

	for (auto reverseIter = stack.rbegin(); reverseIter != stack.rend() ; ++reverseIter) {
		std::cout << (*reverseIter)->toString() << std::endl;
	}
}

void InstrAssert(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	const IOperand *op = stack.back();
	if (!(typeMap[instr[1]] == op->getType()) || !(instr[2] == op->toString())) {
		std::cout << "error assert" << std::endl;
	}
}

void InstrAdd(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	//http://www.cplusplus.com/articles/DE18T05o/
}

void InstrSub(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
}

void InstrMul(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
}

void InstrDiv(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
}

void InstrMod(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
}

void InstrPrint(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr) {
	const IOperand *op = stack.back();
	if (Int8 == op->getType()) {
		char print = static_cast<char>(atoi(op->toString().c_str()));
		std::cout << print << std::endl;

	} else {
		//throw error
	}
}