
#ifndef Curtains_h
#define Curtains_h

#include <Arduino.h>
#include <Stepper.h>


class new_name
{
    private:
        int _motorSteps;
        int _motorPins[];
        int _motorEnablePins[];
        int _rpm;
        bool _motorEnabled;
        int _limitPins[];
        int _limitThresholds[];
        int _awakeTime;
        char* _MQTT_listenTopic;
        char* _MQTT_statusTopic;


    public:
        new_name();
        new_name(int motorSteps, int pins[], int enablePins[], int rpm);
        new_name(int motorSteps, int pins[], int enablePins[], int rpm, int limitPins[]);
        new_name(int motorSteps, int pins[], int enablePins[], int rpm, int limitPins[], int limitThresholds[]);
        
        void setSleepPeriod(int time);
        void setMQTTCommandTopic(char* topic);
        void setMotor(int motorSteps, int pins[], int enablePins[], int rpm);
        void setLimits(int limitPins[], int limitThresholds[]);
        void toggleMotorState();

        boolean checkLimit(int side);
        boolean OpenFull();
        boolean CloseFull();
        boolean ClosePercentage(float value);
        boolean OpenPercentage(float value);
        boolean CheckState();
        boolean getMotorState();


};

#endif