#include "obj_poject.h"

obj_poject::obj_poject(string name_project)
{
    ofstream fout("project_register.r_wul",ios_base::app);
    //добавить считывание ID
    fout << "<pjt> id=  name= " << name_project<< endl;
    fout.close();

    string put_in_pjt = "mkdir " + name_project;
    system(put_in_pjt.c_str());

    put_in_pjt = name_project +"/register.r_wul";
    ofstream fou(put_in_pjt);
    fou << "<strat_r>"<<endl;
    fout.close();

}
