#include "contact.hpp"

const std::string &Contact::getName() const {
    return Contact::name;
}

const std::string &Contact::getSurName() const {
    return Contact::surname;
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

void Contact::setName(const std::string &name) {
    this->name = name;
}

void Contact::setSurName(const std::string &surname) {
    this->surname = surname;
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
