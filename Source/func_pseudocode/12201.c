__ZN6google8protobuf2io9Tokenizer12ParseIntegerERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEyPy
__int64 __fastcall google::protobuf::io::Tokenizer::ParseInteger(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int8 *v3; // x11
  __int64 v4; // x8
  int v5; // t1
  unsigned int v6; // w10
  unsigned __int64 v7; // x9
  unsigned __int8 *v8; // x11
  int v9; // w12
  unsigned int v10; // w8
  int v11; // w14
  int v12; // w13
  int v13; // w12
  int v14; // t1

  if ( (a1[23] & 0x80u) == 0 )
    v3 = a1;
  else
    v3 = *(unsigned __int8 **)a1;
  LODWORD(v4) = *v3;
  if ( (_DWORD)v4 == 48 )
  {
    if ( (v3[1] | 0x20) == 0x78 )
    {
      v5 = v3[2];
      v3 += 2;
      LOBYTE(v4) = v5;
      v6 = 16;
      if ( !v5 )
      {
LABEL_9:
        v7 = 0LL;
LABEL_25:
        *a3 = v7;
        return 1LL;
      }
    }
    else
    {
      LOBYTE(v4) = 48;
      v6 = 8;
    }
  }
  else
  {
    v6 = 10;
    if ( !*v3 )
      goto LABEL_9;
  }
  v7 = 0LL;
  v8 = v3 + 1;
  while ( 1 )
  {
    v9 = (char)v4;
    v10 = (unsigned __int8)(v4 - 48);
    v11 = (unsigned int)(v9 - 65) >= 0x1A ? -1 : v9 - 55;
    v12 = (unsigned int)(v9 - 97) <= 0x19 ? v9 - 87 : v11;
    v13 = v9 - 48;
    v4 = v10 <= 9 ? (unsigned int)v13 : (unsigned int)v12;
    if ( (unsigned int)v4 >= v6 || a2 < (unsigned int)v4 || v7 > (a2 - v4) / v6 )
      return 0LL;
    v7 = v4 + v7 * v6;
    v14 = *v8++;
    LOBYTE(v4) = v14;
    if ( !v14 )
      goto LABEL_25;
  }
}