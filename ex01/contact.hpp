#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>

class Contact{

    public:
        std::string fullName;
        std::string nickName;
        std::string darkSecret;
        std::string phoneNumber;

    void setFullName(const std::string &fullName);
    void setNickName(const std::string &nickName);
    void setDarkSecret(const std::string &darkSecret);
    void setPhoneNumber(const std::string &phoneNumber);

    const std::string &getDarkSecret() const;
    const std::string &getPhoneNumber() const;
    const std::string &getNickName() const;
    const std::string &getFullName() const;
};

#endif