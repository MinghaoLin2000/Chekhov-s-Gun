__ZN6google8protobuf8internal12ExtensionSet5EraseEi
char *__fastcall google::protobuf::internal::ExtensionSet::Erase(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  unsigned int v3; // w8
  char *result; // x0
  __int64 v5; // x8
  char *v6; // x9
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x12
  int *v9; // x13
  char *v10; // x13
  int v11; // t1
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = a2;
  v3 = *((unsigned __int16 *)this + 4);
  result = (char *)*((_QWORD *)this + 2);
  if ( v3 >= 0x101 )
    return (char *)sub_1000C9028(result, &v12);
  v5 = *((unsigned __int16 *)this + 5);
  if ( *((_WORD *)this + 5) )
  {
    v6 = &result[32 * v5];
    v7 = *((unsigned __int16 *)this + 5);
    do
    {
      v8 = v7 >> 1;
      v9 = (int *)&result[32 * (v7 >> 1)];
      v11 = *v9;
      v10 = (char *)(v9 + 8);
      v7 += ~(v7 >> 1);
      if ( v11 < a2 )
        result = v10;
      else
        v7 = v8;
    }
    while ( v7 );
    if ( result != v6 && *(_DWORD *)result == a2 )
    {
      if ( v6 != result + 32 )
      {
        result = (char *)memmove(result, result + 32, v6 - (result + 32));
        LOWORD(v5) = *((_WORD *)this + 5);
      }
      *((_WORD *)this + 5) = v5 - 1;
    }
  }
  return result;
}