_uarpPlatformDarwinHashInfo
__int64 __fastcall uarpPlatformDarwinHashInfo(__int64 result, _DWORD *a2, int *a3)
{
  int v3; // w9
  int v4; // w8
  int v5; // w9

  v3 = result - 1;
  if ( (unsigned int)(result - 1) > 2 )
  {
    v4 = 0;
    v5 = 0;
  }
  else
  {
    v4 = *(_DWORD *)&aH[4 * v3];
    v5 = 16 * v3 + 32;
  }
  *a2 = v4;
  *a3 = v5;
  return result;
}