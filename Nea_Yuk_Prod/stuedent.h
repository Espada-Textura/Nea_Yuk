#ifndef STUEDENT_H
#define STUEDENT_H
#include "QString"

class stuedent
{
public:
    stuedent();
    int getId();
    void setID(int id);
private:
    int id;
    QString firstName;
    QString lastName;
    QString dateOfBirth;
};

#endif // STUEDENT_H
