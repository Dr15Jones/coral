#ifndef INCLUDE_TESTAPP_H
#define INCLUDE_TESTAPP_H

#include "RelationalAccess/IConnectionService.h"
#include <string>

#include "TestEnv/SealSwitch.h"
#include "TestEnv/TestEnv.h"

class TestApp : public TestEnv
{
public:
  static const std::string OVALTAG;

  // Constructor
  TestApp(const char * testName);

  // Destructor
  ~TestApp();

  // run method
  void run();

private:
  std::string T1;
  std::string T2;

  coral::SealSwitcher sw;
};

#endif
