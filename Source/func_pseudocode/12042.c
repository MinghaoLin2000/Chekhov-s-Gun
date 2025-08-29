__ZN6google8protobuf14DoubleToBufferEdPc
google::protobuf *__fastcall google::protobuf::DoubleToBuffer(google::protobuf *this, double a2, char *a3)
{
  int v5; // w8
  char **v7; // x2
  char *v8; // x1
  double v9; // d0

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
  snprintf((char *)this, 0x20uLL, "%.*g", 15, a2);
  google::protobuf::internal::NoLocaleStrtod(this, 0LL, v7);
  if ( v9 != a2 )
    snprintf((char *)this, 0x20uLL, "%.*g", 17, a2);
  google::protobuf::DelocalizeRadix(this, v8);
  return this;
}