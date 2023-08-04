#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <iostream>
#include <memory>
#include <string>
#include <vector>
class Machine;

class Solver
{
public:
  Solver();
  ~Solver();

private:
  std::shared_ptr<Machine> pMachine = nullptr;
  int DecideMachineType();
public:
  int InputParameter();

};

#endif // __SOLVER_H__