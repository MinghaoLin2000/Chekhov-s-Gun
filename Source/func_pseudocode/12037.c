__ZN6google8protobuf22FastUInt32ToBufferLeftEjPc
_BYTE *__fastcall google::protobuf::FastUInt32ToBufferLeft(google::protobuf *this, _BYTE *a2, char *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x9
  _BYTE *v7; // x1

  if ( (unsigned int)this >= 0x3B9ACA00 )
  {
    v3 = (unsigned int)this / 0x5F5E100uLL;
    *(_WORD *)a2 = word_10018CD9D[v3];
    a2 += 2;
    goto LABEL_3;
  }
  if ( (unsigned int)this > 0x63 )
  {
    if ( (unsigned int)this >> 4 <= 0x270 )
    {
      if ( (unsigned int)this <= 0x3E7 )
      {
        LODWORD(v6) = (unsigned __int16)this / 0x64u;
        *a2++ = v6 + 48;
        goto LABEL_9;
      }
LABEL_8:
      v6 = (unsigned int)this / 0x64uLL;
      *(_WORD *)a2 = word_10018CD9D[v6];
      a2 += 2;
LABEL_9:
      LODWORD(this) = (_DWORD)this - 100 * v6;
      goto LABEL_10;
    }
    if ( (unsigned int)this < 0xF4240 )
    {
      if ( (unsigned int)this >> 5 <= 0xC34 )
      {
        LODWORD(v5) = (unsigned int)this / 0x2710;
        *a2++ = (unsigned int)this / 0x2710 + 48;
        goto LABEL_7;
      }
LABEL_6:
      v5 = (unsigned int)this / 0x2710uLL;
      *(_WORD *)a2 = word_10018CD9D[v5];
      a2 += 2;
LABEL_7:
      LODWORD(this) = (_DWORD)this - 10000 * v5;
      goto LABEL_8;
    }
    if ( (unsigned int)this < 0x5F5E100 )
    {
      if ( (unsigned int)this <= 0x98967F )
      {
        LODWORD(v4) = (unsigned int)this / 0xF4240;
        *a2++ = (unsigned int)this / 0xF4240 + 48;
        goto LABEL_5;
      }
LABEL_4:
      v4 = (unsigned int)this / 0xF4240uLL;
      *(_WORD *)a2 = word_10018CD9D[v4];
      a2 += 2;
LABEL_5:
      LODWORD(this) = (_DWORD)this - 1000000 * v4;
      goto LABEL_6;
    }
    LODWORD(v3) = (unsigned int)this / 0x5F5E100;
    *a2++ = (unsigned int)this / 0x5F5E100 + 48;
LABEL_3:
    LODWORD(this) = (_DWORD)this - 100000000 * v3;
    goto LABEL_4;
  }
  if ( (unsigned int)this <= 9 )
  {
    *a2 = (_BYTE)this + 48;
    v7 = a2 + 1;
    goto LABEL_11;
  }
LABEL_10:
  *(_WORD *)a2 = word_10018CD9D[(unsigned int)this];
  v7 = a2 + 2;
LABEL_11:
  *v7 = 0;
  return v7;
}