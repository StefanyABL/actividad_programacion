/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Course.hpp
 * Author: Stefany
 *
 * Created on 10 de septiembre de 2019, 04:11 PM
 */

#ifndef COURSE_HPP
#define COURSE_HPP
#include<string>
class Course {
public:
    Course();
    Course(std::string,std::string,short int);
    void setId (std::string);
    std::string getId();
    void setDescription(std::string);
    std::string getDescription ();
    void setCredits(short int credits);
    short int getCredts();
    virtual ~Course();
private:
    std::string id;
    std::string description;
    short int credits;
    

};

#endif /* COURSE_HPP */

