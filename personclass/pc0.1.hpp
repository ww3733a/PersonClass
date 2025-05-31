#pragma once
#include"..\personclass.hpp"

std::person::person(){std::ifstream fin("E:\\program\\Project\\PersonClass\\lib\\year.txt");system("E:\\program\\Project\\PersonClass\\lib\\year.exe");fin>>this->age;fin.close(); this->name="Steve";this->age-=DEFBORNYEAR;this->gender=std::unknown;this->height=165;this->weight=60;}
std::person::person(const std::string& name, const unsigned& age, const std::sex& gender, const unsigned& height, const unsigned& weight){this->name=name;this->age=age;this->gender=gender;this->height=height;this->weight=weight;}

auto std::person::getIfm() const
{
    const std::tuple<std::string,unsigned,std::sex,unsigned,unsigned> p(this->name,this->age,this->gender,this->height,this->weight);
    return p;
}

// int std::person::prtIfm(const std::string& file,const std::prtfilemode& filemode=csv,const std::ifm& ifmmode=all) const
// {
//     std::ofstream fout(file,std::ios::out);
//     if(!fout.is_open()) return -1;
//     switch (filemode)
//     {
//     case csv:
        
//         break;
//     default:
//         break;
//     }
//     return 0;
// }