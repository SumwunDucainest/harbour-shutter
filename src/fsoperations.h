#ifndef FSOPERATIONS_H
#define FSOPERATIONS_H

#include <QObject>

class FSOperations : public QObject
{
    Q_OBJECT
public:
    explicit FSOperations(QObject *parent = nullptr);
    Q_INVOKABLE bool deleteFile(const QString &path);
    Q_INVOKABLE QString writableLocation(const QString &type, const QString &baseDir);
    Q_INVOKABLE bool createFolder(const QString &path);
    Q_INVOKABLE qint64 getFileSize(const QString &path);
    Q_INVOKABLE QString getFileSizeHuman(const QString &path);
Q_SIGNALS:
    void rescan(const QString& dir);
};

#endif // FSOPERATIONS_H
