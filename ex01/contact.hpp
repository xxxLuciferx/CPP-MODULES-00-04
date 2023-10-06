#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
public:

	Contact();
	~Contact();

	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string	getPhoneNumber();
	std::string getSecret();
	

	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickName(std::string name);
	void setPhoneNumber(std::string number);
	void setSecret(std::string secret);
	
private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_secret;
};

#endif