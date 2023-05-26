#ifndef BASETHREAD_H
#define BASETHREAD_H

#include <thread>  // std::thread

class BaseThread {
 public:
  BaseThread() = default;

  virtual ~BaseThread() = default;

  virtual void* threadRun() = 0;

  bool start();
  bool stop();

 private:
  std::thread instanceThread_;
};

#endif  // BASETHREAD_H