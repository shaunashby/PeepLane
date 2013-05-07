//____________________________________________________________________ 
// File: run.cpp
//____________________________________________________________________ 
//  
// Author: Shaun Ashby <Shaun.Ashby@gmail.com>
// Update: 2013-05-07 23:41:15+0200
// Revision: $Id$ 
//
// Copyright: 2013 (C) Shaun Ashby
//
//--------------------------------------------------------------------

#include "include/Engine.h"

int main(int argc, char *argv[]) {

  PeepLane::Engine *theEngine = new PeepLane::Engine();

  theEngine->configure();
  theEngine->run();

  delete theEngine;

  return 0;
}
