/********************************************
 *  @file Vault.hpp
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

#ifndef Vault_hpp
#define Vault_hpp

class Vault {
public:
    Vault();
    Vault(int startBal);
    ~Vault();
    
    bool operator==(const Vault& r);
    bool operator!=(const Vault& r);
    bool operator<(const Vault& r);
    bool operator>(const Vault& r);
    bool operator<=(const Vault& r);
    bool operator>=(const Vault& r);
    
private:
    int balance;
    friend std::ostream& operator<<(std::ostream& os, const Vault& v) {
        os << "Vault with balance: " << v.balance;
        return os;
    }
};
#include "Vault.cpp"
#endif /* Vault_hpp */
