#include "atascii.h"

std::map<char, QChar> Atascii::mapping;
Atascii::Atascii()
{
    initMapping();
}

void Atascii::initMapping()
{
    // Table (C) 2006 by kalm, All rights reserved.
    // You can use, modify, distribute this table freely.
    // http://funktor.org/dist/ucstable/atascii.txt
    mapping = {
        { 0x00, QChar(0x2665) },
        { 0x01,	QChar(0x251C) },
        { 0x02,	QChar(' ') },
        { 0x03,	QChar(0x2518) },
        { 0x04,	QChar(0x2524) },
        { 0x05,	QChar(0x2510) },
        { 0x06,	QChar(0x2571) },
        { 0x07,	QChar(0x2572) },
        { 0x08,	QChar(0x25E2) },
        { 0x09,	QChar(0x2597) },
        { 0x0A,	QChar(0x25E3) },
        { 0x0B,	QChar(0x259D) },
        { 0x0C,	QChar(0x2598) },
        { 0x0D, QChar(' ') },
        { 0x0E, QChar(0x2582) },
        { 0x0F,	QChar(0x2596) },
        { 0x10,	QChar(0x2663) },
        { 0x11,	QChar(0x250C) },
        { 0x12,	QChar(0x2500) },
        { 0x13,	QChar(0x253C) },
        { 0x14,	QChar(0x25CF) },
        { 0x15,	QChar(0x2584) },
        { 0x16, QChar(0x258E) },
        { 0x17,	QChar(0x252C) },
        { 0x18,	QChar(0x2534) },
        { 0x19,	QChar(0x258C) },
        { 0x1A,	QChar(0x2514) },
        { 0x1B,	QChar(0x001B) },
        { 0x1C,	QChar(0x2191) },
        { 0x1D,	QChar(0x2193) },
        { 0x1E,	QChar(0x2190) },
        { 0x1F,	QChar(0x2192) },
        { 0x20,	QChar(0x0020) },
        { 0x21,	QChar(0x0021) },
        { 0x22,	QChar(0x0022) },
        { 0x23,	QChar(0x0023) },
        { 0x24,	QChar(0x0024) },
        { 0x25,	QChar(0x0025) },
        { 0x26,	QChar(0x0026) },
        { 0x27,	QChar(0x0027) },
        { 0x28,	QChar(0x0028) },
        { 0x29,	QChar(0x0029) },
        { 0x2A,	QChar(0x002A) },
        { 0x2B,	QChar(0x002B) },
        { 0x2C,	QChar(0x002C) },
        { 0x2D,	QChar(0x002D) },
        { 0x2E,	QChar(0x002E) },
        { 0x2F,	QChar(0x002F) },
        { 0x30,	QChar(0x0030) },
        { 0x31,	QChar(0x0031) },
        { 0x32,	QChar(0x0032) },
        { 0x33,	QChar(0x0033) },
        { 0x34,	QChar(0x0034) },
        { 0x35,	QChar(0x0035) },
        { 0x36,	QChar(0x0036) },
        { 0x37,	QChar(0x0037) },
        { 0x38,	QChar(0x0038) },
        { 0x39,	QChar(0x0039) },
        { 0x3A,	QChar(0x003A) },
        { 0x3B,	QChar(0x003B) },
        { 0x3C,	QChar(0x003C) },
        { 0x3D,	QChar(0x003D) },
        { 0x3E,	QChar(0x003E) },
        { 0x3F,	QChar(0x003F) },
        { 0x40,	QChar(0x0040) },
        { 0x41,	QChar(0x0041) },
        { 0x42,	QChar(0x0042) },
        { 0x43,	QChar(0x0043) },
        { 0x44,	QChar(0x0044) },
        { 0x45,	QChar(0x0045) },
        { 0x46,	QChar(0x0046) },
        { 0x47,	QChar(0x0047) },
        { 0x48,	QChar(0x0048) },
        { 0x49,	QChar(0x0049) },
        { 0x4A,	QChar(0x004A) },
        { 0x4B,	QChar(0x004B) },
        { 0x4C,	QChar(0x004C) },
        { 0x4D,	QChar(0x004D) },
        { 0x4E,	QChar(0x004E) },
        { 0x4F,	QChar(0x004F) },
        { 0x50,	QChar(0x0050) },
        { 0x51,	QChar(0x0051) },
        { 0x52,	QChar(0x0052) },
        { 0x53,	QChar(0x0053) },
        { 0x54,	QChar(0x0054) },
        { 0x55,	QChar(0x0055) },
        { 0x56,	QChar(0x0056) },
        { 0x57,	QChar(0x0057) },
        { 0x58,	QChar(0x0058) },
        { 0x59,	QChar(0x0059) },
        { 0x5A,	QChar(0x005A) },
        { 0x5B,	QChar(0x005B) },
        { 0x5C,	QChar(0x005C) },
        { 0x5D,	QChar(0x005D) },
        { 0x5E,	QChar(0x005E) },
        { 0x5F,	QChar(0x005F) },
        { 0x60,	QChar(0x2666) },
        { 0x61,	QChar(0x0061) },
        { 0x62,	QChar(0x0062) },
        { 0x63,	QChar(0x0063) },
        { 0x64,	QChar(0x0064) },
        { 0x65,	QChar(0x0065) },
        { 0x66,	QChar(0x0066) },
        { 0x67,	QChar(0x0067) },
        { 0x68,	QChar(0x0068) },
        { 0x69,	QChar(0x0069) },
        { 0x6A,	QChar(0x006A) },
        { 0x6B,	QChar(0x006B) },
        { 0x6C,	QChar(0x006C) },
        { 0x6D,	QChar(0x006D) },
        { 0x6E,	QChar(0x006E) },
        { 0x6F,	QChar(0x006F) },
        { 0x70,	QChar(0x0070) },
        { 0x71,	QChar(0x0071) },
        { 0x72,	QChar(0x0072) },
        { 0x73,	QChar(0x0073) },
        { 0x74,	QChar(0x0074) },
        { 0x75,	QChar(0x0075) },
        { 0x76,	QChar(0x0076) },
        { 0x77,	QChar(0x0077) },
        { 0x78,	QChar(0x0078) },
        { 0x79,	QChar(0x0079) },
        { 0x7A,	QChar(0x007A) },
        { 0x7B,	QChar(0x2660) },
        { 0x7C,	QChar(0x007C) },
        { 0x7D,	QChar(0x21B0) },
        { 0x7E,	QChar(0x25C0) },
        { 0x7F,	QChar(0x25B6) }
    };
}


QChar Atascii::operator() (const char atascii) const
{
    return mapping.at(atascii);
}

char Atascii::operator() (const QChar &unicode) const
{
    std::map<char, QChar>::iterator it;
    for (it = mapping.begin(); it != mapping.end(); ++it)
    {
        if (unicode == it->second)
        {
            return it->first;
        }
        throw new std::invalid_argument("Unknown unicode mapping");
    }

    return 0;
}