#include <csignal>
#include <gRPCServer.hpp>
#include <iostream>
#include <memory>
#include <vector>

volatile sig_atomic_t sigint_received = 0;

void signalHandler(int signum) {
  std::cout << "Interrupt signal (" << signum << ") received.\n";
  sigint_received = 1;
}

int main() {
  signal(SIGINT, signalHandler);

  std::vector<std::unique_ptr<gRPCServer>> serverVec;

  for (int i = 0; i < 5; i++) {
    serverVec.push_back(std::unique_ptr<gRPCServer>(new gRPCServer()));
    serverVec[i]->start();
  }

  // do stuff until sig int happens
  while (!sigint_received) continue;

  for (int i = 0; i < 5; i++) {
    serverVec[i]->stop();
    serverVec[i] = nullptr;
  }
  return 0;
}