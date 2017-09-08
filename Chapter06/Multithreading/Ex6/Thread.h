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
#ifndef __THREAD_H
#define __THREAD_H

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
#include "Account.h"

enum ThreadType {
   DEPOSITOR,
   WITHDRAWER
};

class Thread {
private:
      thread *pThread;
      Account *pAccount;
      static mutex locker;
      ThreadType threadType;
      bool stopped;
      void run();
public:
      Thread(Account *pAccount, ThreadType typeOfThread);
      ~Thread();
      void start();
      void stop();
      void join();
      void detach();
};

#endif
