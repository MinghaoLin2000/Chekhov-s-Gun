__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter11PrintDoubleEdPNS1_17BaseTextGeneratorE
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintDouble(double a1, __int64 a2, char *a3)
{
  void **v4; // x1
  unsigned __int64 v5; // x2
  void *__p[2]; // [xsp+8h] [xbp-28h] BYREF
  unsigned __int8 v7; // [xsp+1Fh] [xbp-11h]

  google::protobuf::SimpleDtoa(a1, a3, (int)__p);
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