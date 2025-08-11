#pragma once

class __attach__ {
    public:
    void tick(timer32_t &tmr, timer32_t period, void (*fn)()) {
        System.control(Time.control(tmr, period), fn);
    }
    private:
};

__attach__ Attach;