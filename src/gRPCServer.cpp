#include "gRPCServer.hpp"

#include <iostream>

gRPCServer::gRPCServer() { std::cout << "gRPCServer Constructor" << std::endl; }

gRPCServer::~gRPCServer() {
  std::cout << "gRPCServer getting DESTROYED" << std::endl;
}

void* gRPCServer::threadRun() {
  while (true) {
    std::cout << "HAHAH" << std::endl;
    sleep(1);
  }
}