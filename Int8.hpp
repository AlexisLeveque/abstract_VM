//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_INT8_HPP
#define ABSTRACT_VM_INT8_HPP


#include "IOperand.hpp"

class Int8 : public IOperand{

public:
	Int8(std::string);

	Int8(Int8 const &src);

	Int8 &operator=(Int8 const &rhs);

	virtual ~Int8(void);

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString( void ) const = 0; // String representation of the instance

private:
	Int8(void);
	eOperandType _type = eOperandType(Int8);
	std::string _nbr;
};


#endif //ABSTRACT_VM_INT8_HPP
