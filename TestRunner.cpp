#include <gRPCServer.hpp>
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<gRPCServer> grpcComm =
      std::unique_ptr<gRPCServer>(new gRPCServer());
  grpcComm->start();

  sleep(5);

  grpcComm->stop();
  return 0;
}