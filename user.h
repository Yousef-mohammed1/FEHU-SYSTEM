#ifndef USER_H
#define USER_H

#include <QString>
#include <QJsonObject>
struct UserData {
    QString loginUsername;
    QString password;
    QString fullName;
    QString address;
    QString dateOfBirth;
    QString studentCode;
    QString gender;
    QString nationalId;
    QString year;
    QString image;
    QString schedule;
    QString finalimage;
    QString receiptdate;
    int receiptnumber;
    QString typefee;
    int value;
    QString cat;
    QString problem;
    QString subject1_name;
    QString subject2_name;
    QString subject3_name;
    QString subject4_name;
    QString subject5_name;
    double sub1;
    double sub2;
    double sub3;
    double sub4;
    double sub5;
    double alltotal=sub1+sub2+sub3+sub4+sub5;
    double total=alltotal/5;
    QJsonObject toJson() const;
    void fromJson(const QJsonObject& jsonObject);
};
char calculateRating(const UserData& ss);
#endif
