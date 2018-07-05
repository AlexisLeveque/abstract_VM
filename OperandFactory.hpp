//
// Created by PC on 02/07/2018.
//

#ifndef ABSTRACT_VM_OPERANDFACTORY_HPP
#define ABSTRACT_VM_OPERANDFACTORY_HPP

#include "Instruction.hpp"

class OperandFactory {

public:
	OperandFactory(void);

	OperandFactory(OperandFactory const &src);

	OperandFactory &operator=(OperandFactory const &rhs);

	~OperandFactory(void);

	IOperand const * createOperand( eOperandType type, std::string const & value ) const;
private:
	IOperand const * createInt8( std::string const & value ) const;
	IOperand const * createInt16( std::string const & value ) const;
	IOperand const * createInt32( std::string const & value ) const;
	IOperand const * createFloat( std::string const & value ) const;
	IOperand const * createDouble( std::string const & value ) const;

};


#endif //ABSTRACT_VM_OPERANDFACTORY_HPP
