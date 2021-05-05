#include <iostream>
#include <fstream>
#include "Sensor.h"

using namespace std;

int main() {
    const string LOG_FILE = "logs.log";

    //  Creating a sensor
    Sensor sensor = Sensor();

    //  Using the ifstream to open the log file
    ifstream log;
    log.open(LOG_FILE);

    //  Check if the file can be opened
    if(log.fail()){
        cout << "Can't open file !" << endl;
    } else {
        cout << "Reading file..." << endl;
        //  Read each line of the log file
        string line;
        while(getline(log, line)){
            //  Create a record
            string new_record[3] = {"", "", ""};
            int i = 0;

            string separator = ";", record_field;
            int separator_position = 0;

            //  Split the line for every ';'
            while ((separator_position = line.find(separator)) > 0) {
                record_field = line.substr(0, separator_position);
                line.erase(0, separator_position + separator.length());
                new_record[i] = record_field;
                i++;
            }
            new_record[2] = new_record[2] == "" ? line : new_record[2];

            //  AFFICHER LE RECORD
            // cout << "[" << new_record[0] << ",     " << new_record[1] << ",     " << new_record[2] << "]\n\n";

            //  Set the record values into the sensor object
            sensor.setName(new_record[1]);
            sensor.setDate(new_record[0]);
            sensor.setValue(stof(new_record[2]));

            //  Display the sensor to the user
            sensor.display();

            //  Now we could add the sensor data to a database
            cout << "Reading Complete !" << endl;
        }

    }
    return 0;
}
