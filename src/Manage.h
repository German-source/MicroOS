#pragma once 

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
    void tick(void) {
        (*_fn)();
    }
    timer32_t read(void) {
        return (_mode) ? millis() : micros();
    }
    private:
    bool _mode = true;
    void (*_fn)() { nullptr };
};

__manage__ System;
