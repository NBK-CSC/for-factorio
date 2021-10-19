#ifndef FILEHANDLING_H
#define FILEHANDLING_H
#include <QFile>
#include <QFileDialog>
#include<QRegularExpression>
#include <iostream>
#include <bitset>
#include "lampbutton.h"

using namespace std;

class FileHandling
{
private:
    int _width;
    int _height;
    int _numberLayers;
    QString _fileName;
    QString** _optimizedMatrix;
     LampButton** _matrixButtonLamps;
public:
    FileHandling(LampButton**,int,int,int);
    FileHandling();
    ~FileHandling();
    int GetHeight();
    int GetWidth();
    int GetNumberLayers();
    void CreateDecodedMatrix();
    void SaveInFile();
    bool OpenFile();
    int DecodeIn2To10(QString);
    QString DecodeIn10To2(int);
    LampButton** GetMatrixButtonLamps();
};

#endif // FILEHANDLING_H
