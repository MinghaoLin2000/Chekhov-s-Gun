_uarpProcessTLV
_DWORD *__fastcall uarpProcessTLV(__int64 a1, unsigned int *a2)
{
  int v4; // w20
  unsigned int v5; // w21
  int v6; // w0
  _DWORD *v7; // x22
  _DWORD *v9; // [xsp+8h] [xbp-28h] BYREF

  v4 = uarpNtohl(*a2);
  v5 = uarpNtohl(a2[1]);
  v9 = 0LL;
  v6 = UARPLayer2RequestBuffer(a1, &v9, v5 + 24);
  v7 = 0LL;
  if ( !v6 )
  {
    v7 = v9;
    *v9 = v4;
    v7[1] = v5;
    memcpy(v7 + 6, a2 + 2, v5);
    *((_QWORD *)v7 + 1) = v7 + 6;
  }
  return v7;
}