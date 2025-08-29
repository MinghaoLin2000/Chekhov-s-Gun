__ZN3TSP21DataPropertiesEntryV15ClearEv
__int64 __fastcall TSP::DataPropertiesEntryV1::Clear(TSP::DataPropertiesEntryV1 *this)
{
  int v1; // w8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x9
  __int64 result; // x0
  char v5; // t1

  *((_DWORD *)this + 6) = 0;
  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 3) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      v2 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v2 + 23) < 0 )
      {
        **(_BYTE **)v2 = 0;
        *(_QWORD *)(v2 + 8) = 0LL;
        if ( (v1 & 2) == 0 )
          goto LABEL_11;
        goto LABEL_6;
      }
      *(_BYTE *)v2 = 0;
      *(_BYTE *)(v2 + 23) = 0;
    }
    if ( (v1 & 2) == 0 )
      goto LABEL_11;
LABEL_6:
    v3 = *((_QWORD *)this + 7) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v3 + 23) < 0 )
    {
      **(_BYTE **)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v3 = 0;
      *(_BYTE *)(v3 + 23) = 0;
    }
  }
LABEL_11:
  if ( (v1 & 0xC) != 0 )
  {
    *((_BYTE *)this + 72) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v5 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}