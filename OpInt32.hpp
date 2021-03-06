//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_INT32_HPP
#define ABSTRACT_VM_INT32_HPP


#include "IOperand.hpp"

class OpInt32 : public IOperand{

public:
	OpInt32(std::string);

	OpInt32(OpInt32 const &src);

	OpInt32 &operator=(OpInt32 const &rhs);

	virtual ~OpInt32(void);

	virtual int getPrecision( void ) const ; // Precision of the type of the instance
	virtual eOperandType getType( void ) const ; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const ; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const ; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const ; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const ; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const ; // Modulo
	virtual std::string const & toString( void ) const ; // String representation of the instance

private:
	OpInt32(void);
	eOperandType _type = Int32;
	std::string _nbr;
};


#endif //ABSTRACT_VM_INT32_HPP
