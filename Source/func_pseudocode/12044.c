__ZN6google8protobuf13FloatToBufferEfPc
google::protobuf *__fastcall google::protobuf::FloatToBuffer(google::protobuf *this, float a2, char *a3)
{
  int v5; // w8
  float *v7; // x2
  char *v8; // x1
  char v9[4]; // [xsp+1Ch] [xbp-24h] BYREF

  if ( a2 == INFINITY )
  {
    v5 = 6712937;
LABEL_5:
    *(_DWORD *)this = v5;
    return this;
  }
  if ( a2 == -INFINITY )
  {
    *((_BYTE *)this + 4) = 0;
    v5 = 1718511917;
    goto LABEL_5;
  }
  snprintf((char *)this, 0x18uLL, "%.*g", 6, a2);
  *(float *)v9 = 0.0;
  if ( !(unsigned int)google::protobuf::safe_strtof(this, v9, v7) || *(float *)v9 != a2 )
    snprintf((char *)this, 0x18uLL, "%.*g", 9, a2);
  google::protobuf::DelocalizeRadix(this, v8);
  return this;
}