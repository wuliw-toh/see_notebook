#include "obj_poject.h"

obj_poject::obj_poject()
{
// конструктор пуст и не затейлив всё уйдёт в главную публичную функцию.
}

bool obj_poject::main_work(string command , string value){
    bool flag_out = false;

   int swit_int = command_definition(command);
   switch (swit_int) {
        case 0:flag_out = creature_crojekt(value); break;
        default: flag_out = false;

    }





    return  flag_out; // Обрати внимание на правильный ретёрн!!!
}

int obj_poject::command_definition(string str){
    int out_value = -1;
    if(str == "add_project")out_value = 0;// команда для создания нового проекта.


    return out_value;
}


bool obj_poject::creature_crojekt(string name_project){
        //создание нового проекта
        ofstream fout("project_register.r_wul",ios_base::app); //открыли файл регистра проектов
       //добавить считывание ID
            fout << "<pjt> id=  name= " << name_project<< endl; //вписали в него новый проект
       fout.close();

       string put_in_pjt = "mkdir " + name_project;
            system(put_in_pjt.c_str()); // создаём для проекта отдельную папочку.

       put_in_pjt = name_project +"/register.r_wul";
       ofstream fou(put_in_pjt); // добовляем в только что созданную папку регистр файлов самого проекта.
            fou << "<strat_r>"<<endl;
       fout.close();

       return true;// когда появится защита от совпаения имён тогда ретёрн поменяется.

}

