#include "contact.hpp"

const std::string &Contact::getFullName() const {
    return Contact::fullName;
}

const std::string &Contact::getNickName() const {
    return Contact::nickName;
}

const std::string &Contact::getPhoneNumber() const {
    return Contact::phoneNumber;
}

const std::string &Contact::getDarkSecret() const {
    return Contact::darkSecret;
}

void Contact::setFullName(const std::string &fullName) {
    this->fullName = fullName;
}

void Contact::setNickName(const std::string &nickName) {
    this->nickName = nickName;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkSecret(const std::string &darkSecret) {
    this->darkSecret = darkSecret;
}
