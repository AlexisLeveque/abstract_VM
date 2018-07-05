//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_FLOAT_HPP
#define ABSTRACT_VM_FLOAT_HPP


#include "IOperand.hpp"

class OpFloat : public IOperand{

public:
	OpFloat(std::string);

	OpFloat(OpFloat const &src);

	OpFloat &operator=(OpFloat const &rhs);

	virtual ~OpFloat(void);

	virtual int getPrecision( void ) const ; // Precision of the type of the instance
	virtual eOperandType getType( void ) const ; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const ; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const ; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const ; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const ; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const ; // Modulo
	virtual std::string const & toString( void ) const ; // String representation of the instance

private:
	OpFloat(void);
	eOperandType _type = Float;
	std::string _nbr;
};


#endif //ABSTRACT_VM_FLOAT_HPP
