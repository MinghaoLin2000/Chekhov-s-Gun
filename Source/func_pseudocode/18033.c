_NetFSGetMountInfo
__int64 __fastcall NetFSGetMountInfo(const __CFString *a1, __int64 a2)
{
  char *v4; // x0
  char *v5; // x21
  __int64 v6; // x19
  __int64 v7; // x0
  _OWORD v9[69]; // [xsp+0h] [xbp-8B0h] BYREF
  __int64 v10; // [xsp+458h] [xbp-458h] BYREF

  v4 = NetFSCFStringtoCString(a1);
  if ( !v4 )
    return 12LL;
  v5 = v4;
  memset(v9, 0, 512);
  if ( (unsigned int)sub_10000786C(v4, v9) )
  {
    v6 = (unsigned int)*__error();
    free(v5);
  }
  else
  {
    free(v5);
    if ( sub_100007958((char *)&v9[4] + 8, &v10) && (v7 = sub_100007BE8()) != 0 )
      return (*(__int64 (__fastcall **)(const __CFString *, __int64))(*(_QWORD *)v7 + 104LL))(a1, a2);
    else
      return 45LL;
  }
  return v6;
}