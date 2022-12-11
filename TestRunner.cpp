#include <gRPCServer.hpp>
#include <iostream>

int main() {
  gRPCServer* grpcComm = new gRPCServer();
  delete grpcComm;
  return 0;
}