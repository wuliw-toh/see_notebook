#ifndef OBJ_POJECT_H
#define OBJ_POJECT_H

#include<string>
#include<fstream>

using namespace std;

class obj_poject
{
//Раздел переменных
private: string Name_Project = ""; //имя проекта
private: string treak_to_registr = "";// путь к корневому регистру файлов.
//=================================================

public: obj_poject();// просто создает элемент класса и не более.
public: bool main_work(string command, string value);// главная и единственная публичная функиця принимает команды.

//технический блок приватных методов
private: int command_definition(string str);
private: bool giving_name(string str); // функция связывания обекта проекта с его данными.


//функциональный блок приватных методов
private: bool creature_projekt(string value);
private: bool add_file_in_system(string value);//функция по добавлению файла в проект

};

#endif // OBJ_POJECT_H
