#ifndef BASETHREAD_H
#define BASETHREAD_H

#include <mutex>   // std::mutex
#include <thread>  // std::thread

class BaseThread {
 public:
  BaseThread();

  virtual ~BaseThread() = default;

  virtual void* threadRun() = 0;

  bool start();
  bool stop();

  bool isExitRequested();
  void setExitRequested(bool exit);

 private:
  std::thread instanceThread_;
  std::mutex threadMutex_;
  bool exitRequested_;
};

#endif  // BASETHREAD_H