#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(char c);
        Node *next ;
        Node *prev ;
        char value ;
};

#endif // NODE_H
