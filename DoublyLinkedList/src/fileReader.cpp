#include "fileReader.hpp"
#include <fstream>
#include <fstream>

using namespace std;

  File::File() : x{}, y{}, head{nullptr} {}

  File::~File()
  {
    delete head;
  }

  DoublyLinkedList File::getList()const
  {
    return x;
  }

  Data File::getData()const
  {
    return y;
  }

  Node *File::getNode()const
  {
    return head;
  }


void File::FileRead(DoublyLinkedList x, Data y, Node** head, string fileName )
{ 
  string value, del, str;
  ifstream file(fileName);
  int i = 0;

  while (getline(file, str))
  {   
    if(str[0]=='E')
    {
      for(i=2; str[i]!='#'; ++i)
        value += str[i];
      y.setAddIndex() = stoi(value);      

      for(int k = i + 1; str[k]!=')'; ++k) 
        y.setName() += str[k];

      if(y.getAddIndex() > x.get_size()+1) 
        x.insertPos(head , x.get_size() + 1, y.getName());      
       else 
         x.insertPos(head, y.getAddIndex(), y.getName());

      y.setName() = "";
       str = "";
       value = "";
    }
    else if(str[0]=='S') {
      for(int k=2; str[k]!=')'; ++k) 
        del += str[k];            
      y.setDeleteIndex() = stoi(del);
     
      if(y.getDeleteIndex() >= x.get_size())
        x.delete_back(head);
      else
        x.delete_at(head,y.getDeleteIndex());      
      del = "";
    }
  }
}
