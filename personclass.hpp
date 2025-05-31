#pragma once
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<tuple>

namespace std{
enum sex{male=1,female=2,unknown=0};
enum ifm{all=101,name=0,age,gender,height,weight};
enum prtfilemode{csv=0,txt};
class person
{
public:
    person();
    person(const std::string& name, const unsigned& age, const std::sex& gender, const unsigned& height, const unsigned& weight);

    // int setIfm(const std::string& mode, const auto& value);
    auto getIfm() const;
    // int prtIfm(const std::string& file,const std::prtfilemode& filemode=csv,const std::ifm& ifmmode=all) const;

private:
    std::string name;
    unsigned age,height,weight;
    std::sex gender;
protected:
    static const unsigned DEFBORNYEAR=2000;
};
}

#include"personclass\pc0.1.hpp"