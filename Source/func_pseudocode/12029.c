__ZN6google8protobuf24UnescapeCEscapeSequencesEPKcPcPNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE
__int64 __fastcall google::protobuf::UnescapeCEscapeSequences(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *i; // x8
  int v3; // w11
  unsigned __int8 *v4; // x10
  unsigned __int8 *v5; // x0
  unsigned __int8 v6; // t1
  int v7; // w13
  char v8; // w12
  unsigned __int8 v9; // w13
  int v10; // w14
  char v11; // w13
  unsigned int v12; // w11
  unsigned __int8 *v13; // x12
  unsigned __int8 v14; // w13
  unsigned __int8 v15; // t1
  unsigned int v17; // w10
  char v18; // w13

  if ( a1 == a2 )
  {
    for ( i = a1; *i && *i != 92; ++i )
      ;
    a1 = i;
  }
  else
  {
    i = a2;
  }
  while ( 1 )
  {
    v3 = *a1;
    if ( v3 != 92 )
    {
      if ( !*a1 )
        goto LABEL_54;
      goto LABEL_52;
    }
    v4 = a1 + 1;
    v3 = (char)a1[1];
    if ( v3 <= 62 )
      break;
    if ( v3 > 97 )
    {
      switch ( a1[1] )
      {
        case 'n':
          LOBYTE(v3) = 10;
          goto LABEL_51;
        case 'o':
        case 'p':
        case 'q':
        case 's':
        case 'u':
        case 'w':
          goto LABEL_53;
        case 'r':
          LOBYTE(v3) = 13;
          goto LABEL_51;
        case 't':
          LOBYTE(v3) = 9;
          goto LABEL_51;
        case 'v':
          LOBYTE(v3) = 11;
          goto LABEL_51;
        case 'x':
          goto LABEL_25;
        default:
          if ( v3 == 102 )
          {
            LOBYTE(v3) = 12;
          }
          else
          {
            if ( v3 != 98 )
              goto LABEL_53;
            LOBYTE(v3) = 8;
          }
          break;
      }
      goto LABEL_51;
    }
    if ( v3 > 91 )
    {
      if ( v3 != 92 )
      {
        if ( v3 != 97 )
          goto LABEL_53;
        LOBYTE(v3) = 7;
      }
LABEL_51:
      a1 = v4;
LABEL_52:
      *i++ = v3;
      v4 = a1;
      goto LABEL_53;
    }
    if ( v3 == 63 )
      goto LABEL_51;
    if ( v3 != 88 )
      goto LABEL_53;
LABEL_25:
    if ( (unsigned __int8)(a1[2] - 48) < 0xAu || (v12 = a1[2] - 65, v12 <= 0x25) && ((1LL << v12) & 0x3F0000003FLL) != 0 )
    {
      LOBYTE(v3) = 0;
      v13 = a1 + 1;
      while ( 1 )
      {
        v15 = *++v13;
        v14 = v15;
        if ( (unsigned __int8)(v15 - 48) >= 0xAu
          && ((unsigned int)v14 - 65 > 0x25 || ((1LL << (v14 - 65)) & 0x3F0000003FLL) == 0) )
        {
          break;
        }
        v17 = v14;
        v18 = v14 + 9;
        if ( v17 <= 0x39 )
          v18 = v17;
        v4 = v13;
        LOBYTE(v3) = v18 & 0xF | (16 * v3);
      }
      goto LABEL_51;
    }
LABEL_53:
    a1 = v4 + 1;
  }
  if ( v3 > 47 )
  {
    if ( (unsigned int)(v3 - 48) >= 8 )
      goto LABEL_53;
    LOBYTE(v3) = v3 - 48;
    v6 = a1[2];
    v5 = a1 + 2;
    v7 = v6 & 0xF8;
    v8 = v6 + 8 * v3 - 48;
    if ( v7 == 48 )
    {
      LOBYTE(v3) = v8;
      v4 = v5;
    }
    v9 = v4[1];
    v10 = v9 & 0xF8;
    v11 = v9 + 8 * v3 - 48;
    if ( v10 == 48 )
    {
      LOBYTE(v3) = v11;
      a1 = v4 + 1;
    }
    else
    {
      a1 = v4;
    }
    goto LABEL_52;
  }
  if ( v3 == 34 || v3 == 39 )
    goto LABEL_51;
  if ( a1[1] )
    goto LABEL_53;
LABEL_54:
  *i = 0;
  return (unsigned int)((_DWORD)i - (_DWORD)a2);
}