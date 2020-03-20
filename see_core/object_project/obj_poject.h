#ifndef OBJ_POJECT_H
#define OBJ_POJECT_H

#include<string>
#include<fstream>

using namespace std;

class obj_poject
{

public: obj_poject();// просто создает элемент класса и не более.
public: bool main_work(string command, string value);// главная и единственная публичная функиця принимает команды.

//технический блок приватных методов
private: int command_definition(string str);


//функциональный блок приватных методов
private: bool creature_crojekt(string value);

};

#endif // OBJ_POJECT_H
