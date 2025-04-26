/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:36:24 by wirare            #+#    #+#             */
/*   Updated: 2025/04/22 22:43:04 by wirare           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(NULL);
    std::tm* tm_ptr = std::localtime(&t);

    std::cout << "["
              << std::setw(4) << std::setfill('0') << (tm_ptr->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (tm_ptr->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_mday
              << "_"
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_hour
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_min
              << std::setw(2) << std::setfill('0') << tm_ptr->tm_sec
              << "] ";
}

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit),
      _nbDeposits(0), _nbWithdrawals(0) 
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void) 
{
    return _totalAmount;
}

int Account::getNbDeposits(void) 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) 
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) 
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit) 
{
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << p_amount
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) 
{
    int p_amount = _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << p_amount
              << ";withdrawal:";
    if (withdrawal > _amount) 
	{
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;

    std::cout << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;
    return true;
}

int Account::checkAmount(void) const 
{
    return _amount;
}

void Account::displayStatus(void) const 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

Account::Account(void) {}
