#pragma once
#include "Arduino.h"
typedef uint32_t timer32_t;
typedef timer32_t Timer;
#define MILLIS true
#define MICROS false
class __TMR__ {
    public:
    timer32_t reset(timer32_t &tmr) {
        return tmr = read();
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
    timer32_t getLeft(timer32_t &tmr) {
        return read() - tmr;
    }
    private:
    bool _is = true;
};

__TMR__ Time;