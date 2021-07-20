/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stefany
 *
 * Created on 10 de septiembre de 2019, 04:09 PM
 */
#include <iostream>
#include <cstdlib>
#include"ManagementCourse.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ManagementCourse mng= new ManagementCourse();
    mng.addCourse("124","CALCULO",3);
    cout<<mng.addCourse("123","BD",4)<<endl;
    //cout<<mng.getCourses().size()<<endl;
    cout<<mng.getCourses().size()<<endl;
    Course course =mng.findCourse("123");
    if(course!=NULL){
        
    }else{
        
    }

    return 0;
}

