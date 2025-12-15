#include "datamanger.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>

QList<UserData> g_allUsers;
QString g_jsonFileName = "users_data.json";

void createDefaultData() {
    g_allUsers = {
        {
            "305033101015", "leader", "Yousef Mohamed Ibrahim", "El Salam", "31/3/2005", "22249000", "Male", "305033101015", "1st year , Electrical", ":/image/image/leader.jpg", ":/image/image/gdol5.png", ":/image/image/finalgdol.png","1/9/2025", 5078, "Grievances", 150, " ", "nothing",
            "Programming", "Maths", "Discrete", "Circuits", "Solid State",
            80, 60, 50, 70, 50
        },
        {
            "306060101118", "shado", "Shady Esmat Ahmed", "El Salam", "1/6/2006", "22249003", "Male", "306060101118", "1st year , Medical", ":/image/image/babyshado.jpg", ":/image/image/gdol2",":/image/image/finalgdol1.png", "1/10/2025", 3050, "College expenses", 3750, " ", "nothing",
            "Programming", "Maths", "Discrete", "Circuits", "Solid State",
            50, 51, 65, 98, 74
        },
        {
            "307021888006", "hegzo", "Yousef Ali Hegazi", "Faisal", "18/2/2007", "22249003", "Male", "307021888006", "1st year , Computer", ":/image/image/yousef3sool.jpg", ":/image/image/gdol.png",":/image/image/finalgdol2.png", "15/9/2025", 5492, "Administrative fees", 500, " ", "nothing",
            "Programming", "Maths", "Discrete", "Circuits", "Solid State",
            100, 70, 85, 75, 95
        },
        {
            "306081501025", "dep", "Seif Mohamed Fawzy", "Alf Maskan", "15/8/2006", "22249003", "Male", "306081501025", "Preparation year", ":/image/image/littledep.jpg", ":/image/image/gdol4.png", ":/image/image/finalgdol3.png", "25/9/2025", 2594, "Fees", 1500, " ", "nothing",
            "Programming", "Maths", "Discrete", "Circuits", "Solid State",
            54, 45, 99, 62, 62
        },
        {
            "306060601078", "bob", "Basel Saeed Salah", "Madinet Nasr", "6/6/2006", "22249002", "Male", "306060601078", "1st year , Communication", ":/image/image/babyyassin.jpg", ":/image/image/gdol3.png", ":/image/image/finalgdol4.png", "20/10/2025", 8910, "Tuition fees", 3500, " ", "nothing",
            "Programming", "Maths", "Discrete", "Circuits", "Solid State",
            54, 45, 88, 99, 55
        },
        {
            "drsamar", "programming", "", "", "", "", "", "", "", "", "", "", "", 0, "", 0, "", "", "", "", "", "", " ", 0, 0, 0, 0, 0
        },
        {
            "drziad", "programming1", "", "", "", "", "", "", "", "", "", "", "", 0, "", 0, "", "", "", "", "", "", " ", 0, 0, 0, 0, 0
        },
        {
            "drnancy", "programming2", "", "", "", "", "", "", "", "", "", "", "", 0, "", 0, "", "", "", "", "", "", " ", 0, 0, 0, 0, 0
        }
    };

    for(auto &user : g_allUsers) {
        user.alltotal = user.sub1 + user.sub2 + user.sub3 + user.sub4 + user.sub5;
        user.total = user.alltotal / 5.0;
    }
}

UserData* findUserByUsername(const QString& username)
{
    for (int i = 0; i < g_allUsers.size(); ++i) {
        if (g_allUsers[i].loginUsername == username) {
            return &g_allUsers[i];
        }
    }
    return nullptr;
}

bool saveUsersToJson(const QString& filename) {
    QJsonArray jsonArray;
    for (const UserData& user : g_allUsers)
    {
        jsonArray.append(user.toJson());
    }

    QJsonDocument doc(jsonArray);
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "Failed to open file for writing:" << filename;
        return false;
    }
    file.write(doc.toJson());
    file.close();
    qDebug() << "Saved" << g_allUsers.size() << "users to JSON.";
    return true;
}

bool loadUsersFromJson(const QString& filename) {
    QFile file(filename);
    if (!file.exists()) {
        qDebug() << "JSON file does not exist. Creating default data.";
        return false;
    }
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open file for reading.";
        return false;
    }
    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull() || !doc.isArray()) {
        qDebug() << "Failed to parse JSON.";
        return false;
    }

    QJsonArray jsonArray = doc.array();
    g_allUsers.clear();

    for (const QJsonValue& value : jsonArray) {
        if (value.isObject()) {
            UserData user;
            user.fromJson(value.toObject());
            g_allUsers.append(user);
        }
    }

    qDebug() << "Loaded" << g_allUsers.size() << "users from JSON.";
    return true;
}

void initializeUsers() {
    if (!loadUsersFromJson(g_jsonFileName)) {
        createDefaultData();
        saveUsersToJson(g_jsonFileName);
    }
}
