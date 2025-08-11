#pragma once
#include "TimerControl.h"
#include "Attach.h"
class __manage__ {
    public:
    void mode(bool mode) {
        _mode = mode;
    }
    void control(bool of, void (*fn)()) {
        if (of) (*fn)();
    }
    void attach(void (*fn)()) {
        _fn = fn;
    }
    void tick() {
        (*_fn)();
    }
    timer32_t read() {
        return (_mode) ? millis() : micros();
    }
    private:
    bool _mode = true;
    void (*_fn)() { nullptr };
};

__manage__ System;
