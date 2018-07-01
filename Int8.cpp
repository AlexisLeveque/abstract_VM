//
// Created by PC on 01/07/2018.
//

#include "Int8.hpp"

Int8::Int8(void) {}

Int8::Int8(std::string str) : _nbr(str) {
}

Int8::Int8(Int8 const &src) {
	this->_nbr = src.toString();
}

Int8 &Int8::operator=(Int8 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

Int8::~Int8(void) {}

int Int8::getPrecision() const {
	return _type;
}

eOperandType Int8::getType() const {
	return eOperandType(Int8);
}

std::string const& Int8::toString() const {
	return _nbr;
}

IOperand const* Int8::operator+(IOperand const &rhs) const {}

IOperand const* Int8::operator-(IOperand const &rhs) const {}

IOperand const* Int8::operator*(IOperand const &rhs) const {}

IOperand const* Int8::operator/(IOperand const &rhs) const {}

IOperand const* Int8::operator%(IOperand const &rhs) const {}
