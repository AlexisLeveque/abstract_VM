//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_INT16_HPP
#define ABSTRACT_VM_INT16_HPP


#include "IOperand.hpp"

class Int16 : public IOperand{

public:
	Int16(std::string);

	Int16(Int16 const &src);

	Int16 &operator=(Int16 const &rhs);

	virtual ~Int16(void);

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString( void ) const = 0; // String representation of the instance

private:
	Int16(void);
	eOperandType _type = eOperandType(Int16);
	std::string _nbr;
};

#endif //ABSTRACT_VM_INT16_HPP
