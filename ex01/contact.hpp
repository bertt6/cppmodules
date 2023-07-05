#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>

class Contact{

    public:
        std::string name;
        std::string surname;
        std::string nickName;
        std::string darkSecret;
        std::string phoneNumber;
        int index;

    void setName(const std::string &Name);
    void setSurName(const std::string &surname);
    void setNickName(const std::string &nickName);
    void setDarkSecret(const std::string &darkSecret);
    void setPhoneNumber(const std::string &phoneNumber);

    const std::string &getSurName() const;
    const std::string &getName() const;
    const std::string &getNickName() const;
    const std::string &getPhoneNumber() const;
    const std::string &getDarkSecret() const;

};


#endif