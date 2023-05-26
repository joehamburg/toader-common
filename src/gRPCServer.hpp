#include <unistd.h>

#include "BaseThread.hpp"

class gRPCServer : public BaseThread {
 public:
  gRPCServer();
  ~gRPCServer();

  void* threadRun() override;

 private:  // data
};