/*
 * =====================================================================================
 *
 *       Filename:  Thread.h
 *
 *    Description:  This is a thread class that abstracts the C++ Thread
 *                  Support Library.
 *
 *        Version:  1.0
 *        Created:  04/09/2017 04:12:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  <http://www.tektutor.org>
 *
 * =====================================================================================
 */
#include <iostream>
#include <thread>
using namespace std;

class Thread {
private:
      thread *pThread;
      bool stopped;
      void run();
public:
      Thread();
      ~Thread();

      void start();
      void stop();
      void join();
      void detach();
};
