#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int id;

public:
    // Constructor
    Member(std::string name, int id);

    // Getters
    std::string getName() const;
    int getId() const;

    // Setters
    void setName(const std::string &name);
    void setId(int id);

    // Function to display member info
    void displayMemberInfo() const;
};

#endif // MEMBER_H
