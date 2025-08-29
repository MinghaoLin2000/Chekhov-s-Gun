__ZN6google8protobuf13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcPc
__int64 __fastcall google::protobuf::StringAppendV(std::string *a1, char *__format, va_list a3)
{
  __int64 result; // x0
  int v6; // w21
  char *v7; // x22
  int v8; // w0
  char __str[1024]; // [xsp+18h] [xbp-438h] BYREF

  result = vsnprintf(__str, 0x400uLL, __format, a3);
  v6 = result;
  if ( (int)result > 1023 )
  {
    v7 = (char *)operator new[]((unsigned int)(result + 1), 0x1000C8077774924LL);
    v8 = vsnprintf(v7, (unsigned int)(v6 + 1), __format, a3);
    if ( (v8 & 0x80000000) == 0 && v8 <= v6 )
      std::string::append(a1, v7, (unsigned int)v8);
    return operator delete[](v7, 0x1000C8077774924LL);
  }
  else if ( (result & 0x80000000) == 0 )
  {
    return (__int64)std::string::append(a1, __str, (unsigned int)result);
  }
  return result;
}