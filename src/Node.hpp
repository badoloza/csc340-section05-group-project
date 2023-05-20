/*********************************************
 *  @file Node.hpp
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

#ifndef NODE_HPP
#define NODE_HPP

template<class T>
class Node {
public:
    Node();
    Node(T data);
    ~Node();
    T getData();
    
    Node* getNextNode();
    Node* getPrevNode();
    
    void setData(T data);
    void setNextNode(Node* next);
    void setPrevNode(Node* prev);
    void setNextNodeNull();
    void setPrevNodeNull();
    
private:
    T data;
    Node<T>* next;
    Node<T>* prev;
};
#include "Node.cpp"
#endif /* Node_hpp */
