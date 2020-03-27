#include "obj_poject.h"

obj_poject::obj_poject()
{
// конструктор пуст и не затейлив всё уйдёт в главную публичную функцию.
}

bool obj_poject::main_work(string command , string value){//основная публичная функция
    bool flag_out = false; // маркер определяет коректно ли выполнен запрос

   int swit_int = command_definition(command);
   switch (swit_int) {
        case 0:flag_out = creature_projekt(value); break;
       //case 1:
        case 2: flag_out = giving_name(value);break;
        default: flag_out = false;

    }





    return  flag_out; // Обрати внимание на правильный ретёрн!!!
}

int obj_poject::command_definition(string str){
    int out_value = -1;
    if(str == "add_project")out_value = 0;// команда для создания нового проекта.
    if(str == "add_fail")out_value = 1;// команда для добавления файла в проект.
    if(str == "givin_name")out_value = 2;// команда для связывания проекта и данных

    return out_value;
}


bool obj_poject::creature_projekt(string name_project){
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

       giving_name(name_project);//Внутренняя инициализация после создания нового пректа.

       return true;// когда появится защита от совпаения имён тогда ретёрн поменяется.

}

bool obj_poject::giving_name(string str){

  //===========================================
  // Тест на существование и прочие милые вещи
  //============================================
    Name_Project = str;
    treak_to_registr = Name_Project +"/register.r_wul";


    return false; // !! ВНИМАНИЕ на РЕТЕРН !!!
}

bool obj_poject::add_file_in_system(string value){
    //ЗАЩИТЫ!!!

    //остановился тут

    return  true;
}
