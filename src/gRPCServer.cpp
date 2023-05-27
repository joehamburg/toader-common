#include "gRPCServer.hpp"

#include <iostream>

gRPCServer::gRPCServer() { std::cout << "gRPCServer Constructor" << std::endl; }

gRPCServer::~gRPCServer() {
  std::cout << "gRPCServer getting DESTROYED" << std::endl;
}

void* gRPCServer::threadRun() {
  while (!isExitRequested()) {
    std::cout << "HAHAH" << std::endl;
  }
  return nullptr;
}