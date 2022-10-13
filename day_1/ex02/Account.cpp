// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <time.h>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (void) {
}

Account::Account (int initial_deposit) {
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount = _totalAmount + _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account (void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}


int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void	 Account::_displayTimestamp(void) {
	time_t t = time(0);
	struct tm* lt = localtime(&t);
	std::cout << "[" << lt->tm_year + 1900 << lt->tm_mon + 1 << lt->tm_mday;
	std::cout << "_" << lt->tm_hour << lt->tm_min << lt->tm_sec << "] ";
}

void	Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposits:" << deposit;
    _amount = _amount + deposit;
    std::cout << ";amount:" << _amount;
    _nbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _totalNbDeposits++;
    std::cout << ";nb_deposits:" << _nbDeposits <<
              std::endl;
}
bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";

    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
    {
        _amount = _amount - withdrawal;
        std::cout << withdrawal
                  << ";amount:" << _amount;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount = _totalAmount - withdrawal;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
}
int		Account::checkAmount( void ) const {
    return 0;
}