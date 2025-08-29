__ZN6google8protobuf22FastUInt64ToBufferLeftEyPc
_BYTE *__fastcall google::protobuf::FastUInt64ToBufferLeft(google::protobuf *this, _BYTE *a2, char *a3)
{
  int v3; // w19
  unsigned __int64 v5; // x20
  _WORD *v6; // x0
  unsigned int v7; // w8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (int)this;
  if ( (unsigned __int64)this >> 32 )
  {
    v5 = (unsigned __int64)this / 0x3B9ACA00;
    v6 = (_WORD *)google::protobuf::FastUInt64ToBufferLeft(
                    (google::protobuf *)((unsigned __int64)this / 0x3B9ACA00),
                    (unsigned __int64)a2,
                    a3);
    v7 = v3 - 1000000000 * v5;
    *v6 = word_10018CD9D[v7 / 0x989680uLL];
    v7 %= 0x989680u;
    v6[1] = word_10018CD9D[v7 / 0x186A0uLL];
    v7 %= 0x186A0u;
    v6[2] = word_10018CD9D[v7 / 0x3E8uLL];
    v7 %= 0x3E8u;
    v6[3] = word_10018CD9D[v7 / 0xAuLL];
    v6[4] = (unsigned __int8)(v7 % 0xA + 48);
    return (char *)v6 + 9;
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::FastUInt32ToBufferLeft(this, a2, a3);
  }
}