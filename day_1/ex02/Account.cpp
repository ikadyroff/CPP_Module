// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <time.h>
#include <iostream>

//Account::Account (void) {
//
//}
//
//Account::Account (int initial_deposit) {
//
//}
//
//Account::~Account (void) {
//
//}

void	 Account::_displayTimestamp( void )
{
	time_t t = time(0);
	struct tm* lt = localtime(&t);
	std::cout << "[" << lt->tm_year + 1900 << lt->tm_mon + 1 << lt->tm_mday;
	std::cout << "_" << lt->tm_hour << lt->tm_min << lt->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << "amount:" << Account::_amount;
	std::cout <<
}