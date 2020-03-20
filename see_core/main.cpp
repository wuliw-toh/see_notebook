#include <iostream>
#include "object_project/obj_poject.h"

//#include "request_folder/"

using namespace std;

int main()
{


    obj_poject work;

    string str_1 = "add_project";
    string str_2 = "prj_test_1";

    work.main_work(str_1,str_2);


    /*system("mkdir tets");
    ofstream fout("tets/tetxt.txt"); // создаём объект класса ofstream для записи и связываем его с файлом cppstudio.txt
    fout << "Данные данные данные"; // запись строки в файл
    fout.close(); // закрываем файл*/

    return  0;
 }
