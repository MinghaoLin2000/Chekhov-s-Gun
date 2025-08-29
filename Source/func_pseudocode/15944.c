_uarpPayloadTagUnpack
__int64 __fastcall uarpPayloadTagUnpack(__int64 result, char *a2)
{
  unsigned int v2; // w9
  unsigned int v3; // w10
  char v4; // w12
  char v5; // w8

  v2 = (unsigned int)result >> 8;
  v3 = WORD1(result);
  if ( (_DWORD)result )
    v4 = result;
  else
    v4 = 48;
  if ( !(_DWORD)result )
  {
    LOBYTE(v2) = 48;
    LOBYTE(v3) = 48;
  }
  *a2 = v4;
  a2[1] = v2;
  if ( (_DWORD)result )
    v5 = BYTE3(result);
  else
    v5 = 48;
  a2[2] = v3;
  a2[3] = v5;
  return result;
}