/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ManagementCourse.cpp
 * Author: Stefany
 * 
 * Created on 10 de septiembre de 2019, 04:10 PM
 */
#include<iostream>
#include <string>
#include<stdlib.h>
#include <vector>
#include "ManagementCourse.hpp"
#include "Course.hpp"

ManagementCourse::ManagementCourse() {
}
ManagementCourse::ManagementCourse(const ManagementCourse& orig) {

}
Course* ManagementCourse::findCourse(std::string id) {
  //  for (int i=0;i<=courses.size_type;i++){
    //    courses.at(i)
    //}
   // }
    for (Course course:courses){
        if (course->getId().compl(id)==0){
            return course;
        }
    }
    return NULL;
}


bool ManagementCourse::addCourse(std::string id, std::string description, short int credits) {
    if(findCourse(id)==NULL){
        vector<Course>.push_back(new Course (id, description,credits));
        return true;

}
    return false;
}
vector<Course> ManagementCourse::getCourses() {

}



ManagementCourse::~ManagementCourse() {
}

