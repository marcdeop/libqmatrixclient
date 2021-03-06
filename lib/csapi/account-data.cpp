/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#include "account-data.h"

#include "converters.h"

#include <QtCore/QStringBuilder>

using namespace QMatrixClient;

static const auto basePath = QStringLiteral("/_matrix/client/r0");

static const auto SetAccountDataJobName = QStringLiteral("SetAccountDataJob");

SetAccountDataJob::SetAccountDataJob(const QString& userId, const QString& type, const QJsonObject& content)
    : BaseJob(HttpVerb::Put, SetAccountDataJobName,
        basePath % "/user/" % userId % "/account_data/" % type)
{
    setRequestData(Data(toJson(content)));
}

static const auto SetAccountDataPerRoomJobName = QStringLiteral("SetAccountDataPerRoomJob");

SetAccountDataPerRoomJob::SetAccountDataPerRoomJob(const QString& userId, const QString& roomId, const QString& type, const QJsonObject& content)
    : BaseJob(HttpVerb::Put, SetAccountDataPerRoomJobName,
        basePath % "/user/" % userId % "/rooms/" % roomId % "/account_data/" % type)
{
    setRequestData(Data(toJson(content)));
}

