//____________________________________________________________________ 
// File: Engine.h
//____________________________________________________________________ 
//  
// Author: Shaun Ashby <Shaun.Ashby@gmail.com>
// Update: 2013-05-07 19:24:06+0200
// Revision: $Id$ 
//
// Copyright: 2013 (C) Shaun Ashby
//
//--------------------------------------------------------------------
#ifndef ENGINE_H            
#define ENGINE_H            

#include <iosfwd>

namespace PeepLane {
  // New class declaration:
  class Engine {
  public:
    Engine();                   
    virtual ~Engine();

    // Public methods:
    virtual void configure();
    virtual bool debug() const;
    virtual void debug(bool flag);
    virtual void run();

  private:
    bool m_debug;

    Engine(const Engine & r);
    Engine & operator=(const Engine & r);

  };

  std::ostream & operator<< (std::ostream & O, const Engine & e);
}

#endif // ENGINE_H            
