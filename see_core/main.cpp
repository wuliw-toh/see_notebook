#include <iostream>
#include "object_project/obj_poject.h"

//#include "request_folder/"

using namespace std;

void config_system();//метод создания важных папочек и файлов.

int main()
{
    if(false)config_system(); //вопрос надо ли конфигурировать систему.

    obj_poject work;

    string str_1 = "";
    string str_2 = "";

    if(false){// если нужно создать проект поменять на true
        str_1 = "add_project";
        str_2 = "prj_test_1";
        work.main_work(str_1,str_2);// команда создания проекта
    }else {//открываем существующий проект
        str_1 = "givin_name";
        str_2 = "prj_test_1";
        work.main_work(str_1,str_2);
    }


    str_1 = "add_fail";
    str_2 = "Тути_фрути";

    work.main_work(str_1,str_2);// команда добавления файлов



    /*system("mkdir tets");
    ofstream fout("tets/tetxt.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    fout << "Данные данные данные"; // запись строки в файл
    fout.close(); // закрываем файл*/

    return  0;
 }


void config_system(){

         system("mkdir work_cache"); // создаём папочку для важных рабочих файлов
         ofstream fout("work_cache/main_cache.c_wul"); //создаем там файл для кеша

}
