//
// Created by Benjamin Ludwig on 2019-02-15.
//

#include <string>

#ifndef TP_SENSOR_H
#define TP_SENSOR_H


class Sensor {
private:
    std::string Name;
    std::string Date;
    float Value;
public:
    Sensor(std::string name="", std::string date="", float value=0);
    void setName(std::string name);
    std::string getName();
    void setDate(std::string date);
    std::string getDate();
    void setValue(float value);
    float getValue();
    void display();
};


#endif //TP_SENSOR_H
