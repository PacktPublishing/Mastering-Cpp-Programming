# Mastering C++ Programming
This is the code repository for [Mastering C++ Programming](https://www.packtpub.com/application-development/mastering-c-programming?utm_source=github&utm_medium=repository&utm_campaign=9781786461629), published by [Packt](https://www.packtpub.com/?utm_source=github). It contains all the supporting project files necessary to work through the book from start to finish.
## About the Book
Jeganathan Swaminathan, Jegan for short, is a freelance software consultant and founder of TekTutor, with over 17 years of IT industry experience. In the past, he has worked for AMD, Oracle, Siemens, Genisys Software, Global Edge Software Ltd, and PSI Data Systems. He has consulted for Samsung WTD (South Korea) and National Semiconductor (Bengaluru). He now works as a freelance external consultant for Amdocs (India). He works as freelance software consultant and freelance corporate trainer. He holds CSM, CSPO, CSD, and CSP certifications from Scrum Alliance. He is a polyglot software professional and his areas of interest include a wide range of C++, C#, Python, Ruby, AngularJS, Node.js, Kubernetes, Ansible, Puppet, Chef, and Java technologies. He is well known for JUnit, Mockito, PowerMock, gtest, gmock, CppUnit, Cucumber, SpecFlow, Qt, QML, POSIX – Pthreads, TDD, BDD, ATDD, NoSQL databases (MongoDB and Cassandra), Apache Spark, Apache Kafka, Apache Camel, Dockers, Continuous Integration (CI), Continuous Delivery (CD), Maven, Git, cloud computing, and DevOps. You can reach him for any C++, Java, Qt, QML, TDD, BDD, and DevOps-related training or consulting assignments. Jegan is a regular speaker at various technical conferences.
## Instructions and Navigation
All of the code is organized into folders. Each folder starts with a number followed by the application name. For example, Chapter02.



The code will look like the following:
```
#include <iostream>
#include <thread>
#include <mutex>
#include "Account.h"
using namespace std;
enum ThreadType {
  DEPOSITOR,
  WITHDRAWER
};
mutex locker;
```

You will need to be equipped with the following tools before you get started with the book:
g++ compiler of version 5.4.0 20160609 or above
GDB 7.11.1
Valgrind 3.11.0
Cucumber-cpp Git 2.7.4
Google test framework (gtest 1.6 or later)
CMake 3.5.1
Ruby 2.5.1
Qt 5.7.0
Bundler v 1.14.6
The OS required is Ubuntu 16.04 64-bit or later. The hardware configuration should at least be of 1 GB RAM and 20 GB disk space. A virtual machine with this configuration should also suffice.

## Related Products
* [Mastering C++ Multithreading](https://www.packtpub.com/application-development/mastering-c-multithreading?utm_source=github&utm_medium=repository&utm_campaign=9781787121706)

* [Mastering C# and .NET Framework](https://www.packtpub.com/application-development/mastering-c-and-net-framework?utm_source=github&utm_medium=repository&utm_campaign=9781785884375)

* [Mastering Cassandra [Video]](https://www.packtpub.com/big-data-and-business-intelligence/mastering-cassandra-video?utm_source=github&utm_medium=repository&utm_campaign=9781784396381)

### Suggestions and Feedback
[Click here](https://docs.google.com/forms/d/e/1FAIpQLSe5qwunkGf6PUvzPirPDtuy1Du5Rlzew23UBp2S-P3wB-GcwQ/viewform) if you have any feedback or suggestions.
