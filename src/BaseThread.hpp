#ifndef BASETHREAD_H
#define BASETHREAD_H

class BaseThread {
 public:
  BaseThread();

  ~BaseThread();

  virtual threadRun() = 0;

  bool start();
  bool stop();
};

#endif  // BASETHREAD_H