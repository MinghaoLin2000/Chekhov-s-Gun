__ZN6google8protobuf8internal12ParseContext12ParseMessageEPNS0_7MessageEPKc_0
char *__fastcall google::protobuf::internal::ParseContext::ParseMessage(
        __int64 a1,
        __int64 a2,
        google::protobuf::internal *this)
{
  const char *v5; // x1
  char *v6; // x8
  char *result; // x0
  __int64 v8; // x9
  int v9; // w21
  int v10; // w22
  bool v11; // vf
  int v12; // w8

  v5 = (const char *)*(unsigned __int8 *)this;
  if ( *(char *)this < 0 )
  {
    result = (char *)google::protobuf::internal::ReadSizeFallback(this, v5, (unsigned int)this);
    if ( !result )
      return result;
    v6 = result;
  }
  else
  {
    v6 = (char *)this + 1;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (_DWORD)v5 + (_DWORD)v6 - v8;
  *(_QWORD *)a1 = v8 + (v9 & (v9 >> 31));
  v10 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = v9;
  LODWORD(v8) = *(_DWORD *)(a1 + 88);
  v11 = __OFSUB__((_DWORD)v8, 1);
  LODWORD(v8) = v8 - 1;
  *(_DWORD *)(a1 + 88) = v8;
  if ( (int)v8 < 0 != v11 )
    return 0LL;
  result = (char *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 88LL))(a2, v6, a1);
  if ( !result )
    return result;
  ++*(_DWORD *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) )
    return 0LL;
  v12 = *(_DWORD *)(a1 + 28) + v10 - v9;
  *(_DWORD *)(a1 + 28) = v12;
  *(_QWORD *)a1 = *(_QWORD *)(a1 + 8) + (v12 & (v12 >> 31));
  return result;
}