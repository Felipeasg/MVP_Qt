#ifndef IACTIONLISTENER_H
#define IACTIONLISTENER_H


class IActionListener
{
public:
    virtual void execute() = 0;
    virtual void execute(void* dto) = 0;
};

#endif // IACTIONLISTENER_H
