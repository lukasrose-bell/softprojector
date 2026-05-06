/***************************************************************************
//
//    softProjector - an open source media projection software
//    Transliteration utility for Cyrillic to Latin script conversion
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation version 3 of the License.
//
***************************************************************************/

#include "../headers/transliteration.hpp"

bool containsCyrillic(const QString &text)
{
    for (int i = 0; i < text.length(); ++i)
    {
        ushort code = text.at(i).unicode();
        // Cyrillic block: U+0400 to U+04FF
        if (code >= 0x0400 && code <= 0x04FF)
            return true;
    }
    return false;
}

static QMap<QChar, QString> buildTranslitMap()
{
    QMap<QChar, QString> m;

    // Russian uppercase
    m[QChar(0x0410)] = "A";    // А
    m[QChar(0x0411)] = "B";    // Б
    m[QChar(0x0412)] = "V";    // В
    m[QChar(0x0413)] = "G";    // Г
    m[QChar(0x0414)] = "D";    // Д
    m[QChar(0x0415)] = "Ye";   // Е
    m[QChar(0x0416)] = "Zh";   // Ж
    m[QChar(0x0417)] = "Z";    // З
    m[QChar(0x0418)] = "I";    // И
    m[QChar(0x0419)] = "Y";    // Й
    m[QChar(0x041A)] = "K";    // К
    m[QChar(0x041B)] = "L";    // Л
    m[QChar(0x041C)] = "M";    // М
    m[QChar(0x041D)] = "N";    // Н
    m[QChar(0x041E)] = "O";    // О
    m[QChar(0x041F)] = "P";    // П
    m[QChar(0x0420)] = "R";    // Р
    m[QChar(0x0421)] = "S";    // С
    m[QChar(0x0422)] = "T";    // Т
    m[QChar(0x0423)] = "U";    // У
    m[QChar(0x0424)] = "F";    // Ф
    m[QChar(0x0425)] = "Kh";   // Х
    m[QChar(0x0426)] = "Ts";   // Ц
    m[QChar(0x0427)] = "Ch";   // Ч
    m[QChar(0x0428)] = "Sh";   // Ш
    m[QChar(0x0429)] = "Shch"; // Щ
    m[QChar(0x042A)] = "";     // Ъ (hard sign)
    m[QChar(0x042B)] = "Y";    // Ы
    m[QChar(0x042C)] = "'";    // Ь (soft sign)
    m[QChar(0x042D)] = "E";    // Э
    m[QChar(0x042E)] = "Yu";   // Ю
    m[QChar(0x042F)] = "Ya";   // Я

    // Russian lowercase
    m[QChar(0x0430)] = "a";    // а
    m[QChar(0x0431)] = "b";    // б
    m[QChar(0x0432)] = "v";    // в
    m[QChar(0x0433)] = "g";    // г
    m[QChar(0x0434)] = "d";    // д
    m[QChar(0x0435)] = "ye";   // е
    m[QChar(0x0436)] = "zh";   // ж
    m[QChar(0x0437)] = "z";    // з
    m[QChar(0x0438)] = "i";    // и
    m[QChar(0x0439)] = "y";    // й
    m[QChar(0x043A)] = "k";    // к
    m[QChar(0x043B)] = "l";    // л
    m[QChar(0x043C)] = "m";    // м
    m[QChar(0x043D)] = "n";    // н
    m[QChar(0x043E)] = "o";    // о
    m[QChar(0x043F)] = "p";    // п
    m[QChar(0x0440)] = "r";    // р
    m[QChar(0x0441)] = "s";    // с
    m[QChar(0x0442)] = "t";    // т
    m[QChar(0x0443)] = "u";    // у
    m[QChar(0x0444)] = "f";    // ф
    m[QChar(0x0445)] = "kh";   // х
    m[QChar(0x0446)] = "ts";   // ц
    m[QChar(0x0447)] = "ch";   // ч
    m[QChar(0x0448)] = "sh";   // ш
    m[QChar(0x0449)] = "shch"; // щ
    m[QChar(0x044A)] = "";     // ъ (hard sign)
    m[QChar(0x044B)] = "y";    // ы
    m[QChar(0x044C)] = "'";    // ь (soft sign)
    m[QChar(0x044D)] = "e";    // э
    m[QChar(0x044E)] = "yu";   // ю
    m[QChar(0x044F)] = "ya";   // я

    // Common extras
    m[QChar(0x0401)] = "Yo";   // Ё
    m[QChar(0x0451)] = "yo";   // ё

    return m;
}

QString transliterateCyrillicToLatin(const QString &text)
{
    static const QMap<QChar, QString> map = buildTranslitMap();
    QString result;
    result.reserve(text.length() * 2);

    for (int i = 0; i < text.length(); ++i)
    {
        QChar ch = text.at(i);
        if (map.contains(ch))
            result += map.value(ch);
        else
            result += ch; // Keep non-Cyrillic characters as-is (spaces, punctuation, digits, etc.)
    }

    return result;
}
