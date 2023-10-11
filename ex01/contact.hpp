#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{

	std::string C_firstName;
	std::string C_lastName;
	std::string C_nickName;
	std::string	C_phoneNumber;
	std::string	C_secret;

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
	
};

#endif