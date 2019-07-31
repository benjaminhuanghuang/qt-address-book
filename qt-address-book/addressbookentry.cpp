
#include "addressbookentry.h"

AddressBookEntity::AddressBookEntity(QObject *parent) : QObject(parent)
{

}

QString AddressBookEntity::name() const
{
    return m_name;
}

void AddressBookEntity::setName(const QString &name)
{
    if(name != m_name)
    {
        m_name = name;
        emit nameChanged();
    }
}

QString AddressBookEntity::address() const
{
    return m_address;
}

void AddressBookEntity::setAddress(const QString &address)
{
    if(address != m_address){
        m_address = address;
        emit addressChanged();
    }
}

QDate AddressBookEntity::birthday() const
{
    return m_birthday;
}

void AddressBookEntity::setBirthday(const QDate &birthday)
{
    if(m_birthday != birthday){
        m_birthday = birthday;
        emit birthdayChanged();
    }
}

QStringList AddressBookEntity::phoneNumbers() const
{
    return m_phoneNumbers;
}

void AddressBookEntity::setPhoneNumbers(const QStringList &phoneNumbers)
{
    if(phoneNumbers != m_phoneNumbers)
    {
        m_phoneNumbers = phoneNumbers;
        emit phoneNumbersChange();
    }
}
