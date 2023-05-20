/********************************************
 *  @file Vault.cpp
 *  @brief Spring 2023 - CSC340.05 Final Project
 *
 *  This is the final project to make a custom
 *  LinkedList and Node class project for
 *  Spring 2023 - CSC340.05
 *
 *  @author Ashley Ching
 *  @author Charlene Breanne Calderon
 *  @author Eduardo Loza
 *  @author Lennart Richter
 ***********************************************/

#ifndef Vault_cpp
#define Vault_cpp

#include "Vault.hpp"

Vault::Vault() {
    this->balance = 0;
}

Vault::Vault(int startBal) {
    this->balance = startBal;
}

Vault::~Vault() {}

bool Vault::operator==(const Vault& r) {
    return this->balance == r.balance;
}

bool Vault::operator!=(const Vault& r) {
    return this->balance != r.balance;
}

bool Vault::operator<(const Vault& r) {
    return this->balance < r.balance;
}

bool Vault::operator>(const Vault& r) {
    return this->balance > r.balance;
}

bool Vault::operator<=(const Vault& r) {
    return this->balance <= r.balance;
}

bool Vault::operator>=(const Vault& r) {
    return this->balance >= r.balance;
};
#endif
