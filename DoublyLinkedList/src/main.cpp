#include <iostream>
#include <fstream>
#include "node.hpp"
#include "data.hpp"
#include "fileReader.hpp"


int main()
{
  File r;
  Node *head = r.getNode();
  r.FileRead(r.getList(), r.getData(), &head, "Veri.txt");  
  r.getList().printList(head);

}

