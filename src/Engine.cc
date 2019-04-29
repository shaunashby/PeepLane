//____________________________________________________________________ 
// File: Engine.cc
//____________________________________________________________________ 
//  
// Author: Shaun Ashby <Shaun.Ashby@gmail.com>
// Update: 2013-05-07 23:36:05+0200
// Revision: $Id$ 
//
// Copyright: 2013 (C) Shaun Ashby
//
//--------------------------------------------------------------------

#include "include/Engine.h"
#include <ostream>

namespace PeepLane {
  Engine::Engine()
    : m_debug(false)
  {}

  Engine::~Engine() {
  }

  void Engine::configure() {
  }

  bool Engine::debug() const {
    return m_debug;
  }

  void Engine::debug(bool flag) {
    m_debug = flag;
  }

  void Engine::run() {
  }

  Engine::Engine(const Engine & i)
    : m_debug(i.m_debug)
  {}

  Engine & Engine::operator=(const Engine & r) {
    if (this != &r) {
    }

    return *this;
  }

  std::ostream & operator<< (std::ostream & O, const Engine & e) {
    O << "| Engine configured. Debugging is ";
    (e.debug()) ? O << "ON." : O << "OFF.";
    return O;
  }
}
