__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter15PrintMessageEndERKNS0_7MessageEiibPNS1_17BaseTextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintMessageEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  const char *v6; // x1

  if ( a5 )
    v6 = "} ";
  else
    v6 = "}\n";
  return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a6 + 40LL))(a6, v6, 2LL);
}