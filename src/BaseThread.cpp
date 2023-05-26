#include "BaseThread.hpp"

bool BaseThread::start() {
  instanceThread_ = std::thread([this] { this->threadRun(); });
  return true;
}
bool BaseThread::stop() {
  instanceThread_.join();
  return true;
}
