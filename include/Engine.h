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

namespace PeepLane {
  // New class declaration:
  class Engine {
  public:
    Engine();                   
    virtual ~Engine();

    // Public methods:
    void configure();
    void debug();
    void run();

  protected:

  private:
    const bool m_debug;

    Engine(const Engine & r);
    Engine & operator=(const Engine & r);

  };
}

#endif // ENGINE_H            
