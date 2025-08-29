_XORBlockWithoutKey
__int64 __fastcall XORBlockWithoutKey(__int64 result, _BYTE *a2)
{
  __int64 v2; // x8

  if ( (_DWORD)result )
  {
    v2 = (unsigned int)result;
    do
    {
      *a2++ ^= 0xAAu;
      --v2;
    }
    while ( v2 );
  }
  return result;
}