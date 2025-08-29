__ZN6google8protobuf10TextFormat7Printer24SetUseUtf8StringEscapingEb
__int64 (__fastcall ***__fastcall google::protobuf::TextFormat::Printer::SetUseUtf8StringEscaping(
        google::protobuf::TextFormat::Printer *this,
        int a2))()
{
  __int64 (__fastcall ***result)(); // x0
  __int64 (__fastcall **v5)(); // x16
  __int64 v6; // x8
  __int64 (__fastcall *v7)(__int64); // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = (__int64 (__fastcall ***)())operator new(8LL, 0x81C40B8603338LL);
  if ( a2 )
    v5 = off_1001DB780;
  else
    v5 = (__int64 (__fastcall **)())off_1001DB670;
  *result = v5;
  v6 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = result;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (__int64 (__fastcall ***)())v7(v6);
  }
  return result;
}