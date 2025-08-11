#pragma once
#include "Arduino.h"
typedef uint32_t timer32_t;
typedef timer32_t Timer;
#define MILLIS true
#define MICROS false
class __TMR__ {
    public:
    void reset(timer32_t &tmr) {
        tmr = read();
    }
    timer32_t read() {
        return (_is) ? millis() : micros();
    }
    void mode(bool mode) {
        _is = mode;
    }
    bool control(timer32_t &tmr, timer32_t period) {
        if (read() - tmr >= period) {
            tmr = read();
            return true;
        }
        return false;
    }
    private:
    bool _is = true;
};

__TMR__ Time;