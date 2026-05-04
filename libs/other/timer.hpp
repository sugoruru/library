#pragma once

// @title Timer
struct Timer {
  Timer(int ms) : dur(ms), st(chrono::steady_clock::now()) {}
  bool isTimeOver() const {
    auto cur = chrono::steady_clock::now();
    auto e = chrono::duration_cast<chrono::milliseconds>(cur - st).count();
    return e >= dur;
  }
  int dur;
  chrono::steady_clock::time_point st;
};