__ZN6google8protobuf15CEscapeInternalEPKciPcibb
__int64 __fastcall google::protobuf::CEscapeInternal(
        google::protobuf *this,
        const char *a2,
        __int64 a3,
        char *a4,
        int a5,
        char a6)
{
  int v6; // w21
  char v9; // w23
  unsigned __int8 *v10; // x24
  char v11; // w8
  __int64 v12; // x19
  const char *v13; // x25
  unsigned __int8 *v14; // x26
  int v15; // w9

  v6 = (int)a4;
  if ( (int)a2 >= 1 )
  {
    v9 = a5;
    v10 = (unsigned __int8 *)this;
    v11 = 0;
    LODWORD(v12) = 0;
    if ( a5 )
      v13 = "\\x%02x";
    else
      v13 = "\\%03o";
    v14 = (unsigned __int8 *)this + (int)a2;
    while ( 1 )
    {
      if ( v6 - (int)v12 < 2 )
        return 0xFFFFFFFFLL;
      v15 = (char)*v10;
      if ( v15 > 33 )
      {
        switch ( v15 )
        {
          case '"':
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 8796;
            goto LABEL_20;
          case '\'':
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 10076;
            goto LABEL_20;
          case '\\':
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 23644;
            goto LABEL_20;
        }
      }
      else
      {
        switch ( v15 )
        {
          case 9:
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 29788;
            goto LABEL_20;
          case 10:
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 28252;
            goto LABEL_20;
          case 13:
            v11 = 0;
            *(_WORD *)(a3 + (int)v12) = 29276;
LABEL_20:
            v12 = (unsigned int)(v12 + 2);
            goto LABEL_21;
        }
      }
      if ( v15 < 0 && (a6 & 1) != 0
        || (unsigned int)(v15 - 32) <= 0x5E
        && ((v11 & 1) == 0
         || (unsigned int)(v15 - 48) >= 0xA
         && ((unsigned int)*v10 - 65 > 0x25 || ((1LL << ((unsigned __int8)v15 - 65)) & 0x3F0000003FLL) == 0)) )
      {
        v11 = 0;
        *(_BYTE *)(a3 + (int)v12) = v15;
        v12 = (unsigned int)(v12 + 1);
      }
      else
      {
        if ( (unsigned int)(v6 - v12) < 4 )
          return 0xFFFFFFFFLL;
        sprintf((char *)(a3 + (int)v12), v13, *v10);
        v12 = (unsigned int)(v12 + 4);
        v11 = v9;
      }
LABEL_21:
      if ( ++v10 >= v14 )
        goto LABEL_34;
    }
  }
  v12 = 0LL;
LABEL_34:
  if ( (int)v12 >= v6 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(a3 + (int)v12) = 0;
  return v12;
}