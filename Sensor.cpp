//
// Created by Benjamin Ludwig on 2019-02-15.
//

#include <iostream>
#include <string>
#include "Sensor.h"

Sensor::Sensor(std::string name, std::string date, float value) {
    this->Name = name;
    this->Date = date;
    this->Value = value;
}

void Sensor::setName(std::string name) { this->Name = name; }
std::string Sensor::getName() {return this->Name; }

void Sensor::setDate(std::string date) { this->Date = date; }
std::string Sensor::getDate() { return this->Date; }

void Sensor::setValue(float value) { this->Value = value; }
float Sensor::getValue() { return this->Value; }

void Sensor::display() {
    std::cout << "Sensor name: " + this->Name << std::endl;
    std::cout << "Log date: " + this->Date << std::endl;
    std::cout << "Sensor value: " << this->Value << std::endl;
}