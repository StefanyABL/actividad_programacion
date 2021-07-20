/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Course.cpp
 * Author: Stefany
 * 
 * Created on 10 de septiembre de 2019, 04:11 PM
 */

#include "Course.hpp"

Course::Course() {
}



Course::Course(std::string id, std::string description, short int credits) {
    setCredits(credits);
    setDescription(description);
    setId(id);
}

short int Course::getCredts() {
    return credits;

}

std::string Course::getDescription() {
    return description;
}

std::string Course::getId() {
    return id;

}

void Course::setCredits(short int credits) {
    this->credits;
}

void Course::setDescription(std::string description) {
    this->description;
}

void Course::setId(std::string id) {
    this->id;
}

Course::~Course() {
}

