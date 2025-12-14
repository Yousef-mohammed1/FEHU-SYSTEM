#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include "user.h"
#include <QList>
#include <QString>

extern QList<UserData> g_allUsers;
extern QString g_jsonFileName; // Declare filename globally

UserData* findUserByUsername(const QString& username);

// JSON Functions
bool loadUsersFromJson(const QString& filename);
bool saveUsersToJson(const QString& filename);
void initializeUsers();

#endif
