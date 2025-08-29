$s34AppleMediaServicesUIDynamicService15AppQueryRequestVwet
__int64 __fastcall getEnumTagSinglePayload for AppQueryRequest(__int64 *a1, unsigned int a2)
{
  int v2; // w8
  __int64 v3; // x8

  if ( a2 )
  {
    if ( a2 >= 0x7FFFFFFF && *((_BYTE *)a1 + 16) )
    {
      v2 = *(_DWORD *)a1 + 2147483646;
    }
    else
    {
      v3 = *a1;
      if ( (unsigned __int64)*a1 >= 0xFFFFFFFF )
        LODWORD(v3) = -1;
      v2 = v3 - 1;
      if ( v2 < 0 )
        v2 = -1;
    }
  }
  else
  {
    v2 = -1;
  }
  return (unsigned int)(v2 + 1);
}