//
// Created by PC on 04/07/2018.
//

#ifndef ABSTRACT_VM_INSTRUCTION_HPP
#define ABSTRACT_VM_INSTRUCTION_HPP

#include <vector>
#include "IOperand.hpp"

	void InstrPush(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrPop(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrDump(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrAssert(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrAdd(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrSub(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrMul(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrDiv(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrMod(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);
	void InstrPrint(std::vector<const IOperand *> &stack, const std::vector<std::string> &instr);


#endif //ABSTRACT_VM_INSTRUCTION_HPP
