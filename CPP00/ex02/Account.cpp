#include "Account.hh"

static int Account::getNbAccounts(void) {
    std::cout << t::_nbAccounts
}

static int Account::_totalAmount(void) {
    std::cout << t::_totalAmount
}

static int Account::getNbDeposits(void) {
    std::cout << t::_totalNbDeposits
}

static int Account::getNbWithdrawals() {
    std::cout << t::_totalNbWithdrawals
}

void Account::displayStatus() const {

}

static void Account::displayAccountsInfos() {
    time_t ttime = time(0);
    tm *localtime = localtime(&ttime);
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";";
}
