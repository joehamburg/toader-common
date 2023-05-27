#include "BaseThread.hpp"

BaseThread::BaseThread() : exitRequested_(false) {}

bool BaseThread::start() {
  instanceThread_ = std::thread([this] { this->threadRun(); });
  return true;
}

bool BaseThread::stop() {
  setExitRequested(true);
  instanceThread_.join();
  return true;
}

bool BaseThread::isExitRequested() {
  threadMutex_.lock();
  bool tmp = exitRequested_;
  threadMutex_.unlock();
  return tmp;
}

void BaseThread::setExitRequested(bool exit) {
  threadMutex_.lock();
  exitRequested_ = exit;
  threadMutex_.unlock();
}
