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

#ifndef TRANSLITERATION_HPP
#define TRANSLITERATION_HPP

#include <QString>
#include <QMap>

bool containsCyrillic(const QString &text);
QString transliterateCyrillicToLatin(const QString &text);

#endif // TRANSLITERATION_HPP
