#include "Node.h"
#include <iostream>
using namespace std ;
Node::Node()
{
    next = NULL ;
    prev = NULL ;
}
Node::Node(char c)
{
    value = c ;
}
