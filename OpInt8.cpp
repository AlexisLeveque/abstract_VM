//
// Created by PC on 01/07/2018.
//

#include "OpInt8.hpp"

OpInt8::OpInt8(void) {}

OpInt8::OpInt8(std::string str) : _nbr(str) {
}

OpInt8::OpInt8(OpInt8 const &src) {
	this->_nbr = src.toString();
}

OpInt8 &OpInt8::operator=(OpInt8 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

OpInt8::~OpInt8(void) {}

int OpInt8::getPrecision() const {
	return _type;
}

eOperandType OpInt8::getType() const {
	return Int8;
}

std::string const& OpInt8::toString() const {
	return _nbr;
}

IOperand const* OpInt8::operator+(IOperand const &rhs) const {}

IOperand const* OpInt8::operator-(IOperand const &rhs) const {}

IOperand const* OpInt8::operator*(IOperand const &rhs) const {}

IOperand const* OpInt8::operator/(IOperand const &rhs) const {}

IOperand const* OpInt8::operator%(IOperand const &rhs) const {}
