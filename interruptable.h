
#ifndef INTERRUPTABLE_H_
#define INTERRUPTABLE_H_


class interruptable{

public:

interruptable();
virtual int registerInterrupt();
virtual void interruptHandler();

private:


};

#endif