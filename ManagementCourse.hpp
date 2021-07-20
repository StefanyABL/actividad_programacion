/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManagementCourse.hpp
 * Author: Stefany
 *
 * Created on 10 de septiembre de 2019, 04:10 PM
 */

#ifndef MANAGEMENTCOURSE_HPP
#define MANAGEMENTCOURSE_HPP
#include<vector>
#include <stdlib.h>


class ManagementCourse {
public:
    ManagementCourse();
    ManagementCourse(const ManagementCourse& orig);
    Course* findCourse(std::string);
    bool addCourse(std::string,std::string,short int);
    vector<Course> getCourses();
    
    virtual ~ManagementCourse();
private:
    vector<Course>courses;
    //std::vector<Course>courses;
};

#endif /* MANAGEMENTCOURSE_HPP */

