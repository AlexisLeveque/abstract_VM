//
// Created by PC on 01/07/2018.
//

#include "Float.hpp"

Float::Float(void) {}

Float::Float(std::string str) : _nbr(str) {
}

Float::Float(Float const &src) {
	this->_nbr = src.toString();
}

Float &Float::operator=(Float const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

Float::~Float(void) {}

int Float::getPrecision() const {
	return _type;
}

eOperandType Float::getType() const {
	return eOperandType(Float);
}

std::string const& Float::toString() const {
	return _nbr;
}

IOperand const* Float::operator+(IOperand const &rhs) const {}

IOperand const* Float::operator-(IOperand const &rhs) const {}

IOperand const* Float::operator*(IOperand const &rhs) const {}

IOperand const* Float::operator/(IOperand const &rhs) const {}

IOperand const* Float::operator%(IOperand const &rhs) const {}
