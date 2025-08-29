__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter9PrintBoolEbPNS1_17BaseTextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintBool(__int64 a1, int a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, const char *, __int64); // x3

  v3 = *(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 40LL);
  if ( a2 )
    return v3(a3, "true", 4LL);
  else
    return v3(a3, "false", 5LL);
}