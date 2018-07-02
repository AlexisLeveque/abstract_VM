//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_INT8_HPP
#define ABSTRACT_VM_INT8_HPP


#include "IOperand.hpp"

class OpInt8 : public IOperand{

public:
	OpInt8(std::string);

	OpInt8(OpInt8 const &src);

	OpInt8 &operator=(OpInt8 const &rhs);

	virtual ~OpInt8(void);

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString( void ) const = 0; // String representation of the instance

private:
	OpInt8(void);
	eOperandType _type = Int8;
	std::string _nbr;
};


#endif //ABSTRACT_VM_INT8_HPP
