__ZN6google8protobuf15DelocalizeRadixEPc
char *__fastcall google::protobuf::DelocalizeRadix(google::protobuf *this, char *a2)
{
  char *result; // x0
  const char *i; // x8
  int v5; // w11
  int v7; // w9
  unsigned __int8 *v8; // x19
  const char *v9; // x20
  int v10; // w11
  bool v11; // zf
  size_t v13; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = strchr((char *)this, 46);
  if ( !result )
  {
    for ( i = (char *)this + 2; ; ++i )
    {
      v5 = *((unsigned __int8 *)i - 2);
      if ( (unsigned int)(v5 - 48) >= 0xA
        && ((unsigned int)(v5 - 43) > 0x3A || ((1LL << ((unsigned __int8)v5 - 43)) & 0x400000004000005LL) == 0) )
      {
        break;
      }
    }
    if ( *(i - 2) )
    {
      v8 = (unsigned __int8 *)(i - 1);
      v7 = *((unsigned __int8 *)i - 1);
      *((_BYTE *)i - 2) = 46;
      if ( (unsigned int)(v7 - 48) >= 0xA
        && ((unsigned int)(v7 - 43) > 0x3A || ((1LL << ((unsigned __int8)v7 - 43)) & 0x400000004000005LL) == 0) )
      {
        if ( v7 )
        {
          do
          {
            v9 = i;
            v10 = *(unsigned __int8 *)i;
            if ( (unsigned int)(v10 - 48) < 0xA )
              break;
            ++i;
            v11 = (unsigned int)(v10 - 43) > 0x3A || ((1LL << ((unsigned __int8)v10 - 43)) & 0x400000004000005LL) == 0;
          }
          while ( v11 && v10 != 0 );
          v13 = strlen(v9) + 1;
          if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return (char *)memmove(v8, v9, v13);
        }
      }
    }
  }
  return result;
}