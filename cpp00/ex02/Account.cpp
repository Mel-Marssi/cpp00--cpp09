#include <ctime>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	std::cout <<"index:" <<Account::_accountIndex;
	std::cout << ";amount:"<<initial_deposit;
	std::cout << ";created"<<std::endl;

	return ;
}
Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";closed"<<std::endl;
	Account::_nbAccounts--;
}
int Account::getNbAccounts(){
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(){
	return(Account::_totalAmount);
}
int Account::getNbDeposits(){
	return(Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(){
	return (Account::_totalNbWithdrawals);
}
int Account::checkAmount() const{
	return (Account::_amount);
}
void Account::_displayTimestamp( void )
{
	time_t cur;
	char formattedTime[20];
	
	time(&cur);
    struct tm* timeInfo = localtime(&cur);
    strftime(formattedTime, sizeof(formattedTime), "[%Y%m%d_%H%M%S] ", timeInfo);
	std::cout << formattedTime;
}
void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";deposits:" << deposit;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	if (Account::_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused"<<std::endl;
		return(false);
	}
	else{
		std::cout << ";withdrawal:" << withdrawal;
		Account::_amount -= withdrawal;
		Account::_totalAmount -=withdrawal;
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << Account::_amount;
		std::cout << ";nbwithdrawals:" << Account::_nbWithdrawals << std::endl;
	}
	return (true);
}