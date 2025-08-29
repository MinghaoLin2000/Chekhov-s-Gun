__Z9ippReadIOPvPFlS_PhmEP5ipp_t
__int64 __fastcall ippReadIO(void *a1, __int64 (__fastcall *a2)(void *, unsigned __int8 *, unsigned __int64), id a3)
{
  id v5; // x0
  void *v6; // x19
  __int64 v7; // x20
  int v9; // [xsp+8h] [xbp-68h] BYREF
  int v10; // [xsp+Ch] [xbp-64h] BYREF
  _BYTE v11[24]; // [xsp+10h] [xbp-60h] BYREF
  id v12; // [xsp+28h] [xbp-48h]

  v5 = objc_retain(a3);
  v6 = v5;
  v7 = 0xFFFFFFFFLL;
  if ( a1 && v5 )
  {
    sub_100005314(v11, a2, a1);
    v9 = 0;
    v10 = 19;
    sub_100003C98(v11, &v9, &v10, 0LL, v6);
    v7 = 3LL;
    objc_release(v12);
  }
  objc_release(v6);
  return v7;
}