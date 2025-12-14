#include "user.h"
#include <QJsonObject>
#include <QJsonValue>

QJsonObject UserData::toJson() const {
    QJsonObject json;

    json["loginUsername"] = loginUsername;
    json["password"] = password;
    json["fullName"] = fullName;
    json["address"] = address;
    json["dateOfBirth"] = dateOfBirth;
    json["studentCode"] = studentCode;
    json["gender"] = gender;
    json["nationalId"] = nationalId;
    json["year"] = year;
    json["image"] = image;
    json["schedule"] = schedule;
    json["finalimage"] = finalimage;
    json["receiptdate"] = receiptdate;
    json["receiptnumber"] = receiptnumber;
    json["typefee"] = typefee;
    json["value"] = value;
    json["cat"] = cat;
    json["problem"] = problem;
    json["subject1_name"] = subject1_name;
    json["subject2_name"] = subject2_name;
    json["subject3_name"] = subject3_name;
    json["subject4_name"] = subject4_name;
    json["subject5_name"] = subject5_name;
    json["sub1"] = sub1;
    json["sub2"] = sub2;
    json["sub3"] = sub3;
    json["sub4"] = sub4;
    json["sub5"] = sub5;

    return json;
}
void UserData::fromJson(const QJsonObject& jsonObject) {
    loginUsername = jsonObject["loginUsername"].toString();
    password = jsonObject["password"].toString();
    fullName = jsonObject["fullName"].toString();
    address = jsonObject["address"].toString();
    dateOfBirth = jsonObject["dateOfBirth"].toString();
    studentCode = jsonObject["studentCode"].toString();
    gender = jsonObject["gender"].toString();
    nationalId = jsonObject["nationalId"].toString();
    year = jsonObject["year"].toString();
    image = jsonObject["image"].toString();
    schedule = jsonObject["schedule"].toString();
    finalimage = jsonObject["finalimage"].toString();
    receiptdate = jsonObject["receiptdate"].toString();
    receiptnumber = jsonObject["receiptnumber"].toInt();
    typefee = jsonObject["typefee"].toString();
    value = jsonObject["value"].toInt();
    cat = jsonObject["cat"].toString();
    problem = jsonObject["problem"].toString();
    subject1_name = jsonObject["subject1_name"].toString();
    subject2_name = jsonObject["subject2_name"].toString();
    subject3_name = jsonObject["subject3_name"].toString();
    subject4_name = jsonObject["subject4_name"].toString();
    subject5_name = jsonObject["subject5_name"].toString();
    sub1 = jsonObject["sub1"].toDouble();
    sub2 = jsonObject["sub2"].toDouble();
    sub3 = jsonObject["sub3"].toDouble();
    sub4 = jsonObject["sub4"].toDouble();
    sub5 = jsonObject["sub5"].toDouble();

    alltotal = sub1 + sub2 + sub3 + sub4 + sub5;
    total = alltotal / 5.0;
}
