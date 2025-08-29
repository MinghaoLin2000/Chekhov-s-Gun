__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter10PrintInt64ExPNS1_17BaseTextGeneratorE
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt64(
        int a1,
        google::protobuf *this,
        char *a3)
{
  void **v4; // x1
  unsigned __int64 v5; // x2
  void *__p[2]; // [xsp+0h] [xbp-70h] BYREF
  unsigned __int8 v7; // [xsp+17h] [xbp-59h]
  void *__src; // [xsp+18h] [xbp-58h]
  size_t v9; // [xsp+20h] [xbp-50h]
  _BYTE v10[32]; // [xsp+28h] [xbp-48h] BYREF

  __src = v10;
  v9 = google::protobuf::FastInt64ToBufferLeft((__int64)this, v10, a3) - v10;
  sub_10007A6A8(__p, v10, v9);
  if ( (v7 & 0x80u) == 0 )
    v4 = __p;
  else
    v4 = (void **)__p[0];
  if ( (v7 & 0x80u) == 0 )
    v5 = v7;
  else
    v5 = (unsigned __int64)__p[1];
  (*(void (__fastcall **)(char *, void **, unsigned __int64))(*(_QWORD *)a3 + 40LL))(a3, v4, v5);
  if ( (char)v7 < 0 )
    operator delete(__p[0]);
}