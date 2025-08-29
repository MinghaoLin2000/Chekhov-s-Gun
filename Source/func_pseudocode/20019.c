__Z10ippWriteIOPvPFlS_PhmEP5ipp_t
__int64 __fastcall ippWriteIO(void *a1, __int64 (__fastcall *a2)(void *, unsigned __int8 *, unsigned __int64), id a3)
{
  id v5; // x0
  void *v6; // x19
  __int64 v7; // x20
  _QWORD v9[2]; // [xsp+0h] [xbp-70h] BYREF
  char *v10; // [xsp+10h] [xbp-60h]
  char *v11; // [xsp+18h] [xbp-58h]
  char *v12; // [xsp+20h] [xbp-50h]
  int v13; // [xsp+28h] [xbp-48h] BYREF
  int v14; // [xsp+2Ch] [xbp-44h] BYREF

  v5 = objc_retain(a3);
  v6 = v5;
  v13 = 0;
  v14 = 19;
  v7 = 0xFFFFFFFFLL;
  if ( a1 && v5 )
  {
    v9[0] = a1;
    v9[1] = a2;
    v10 = (char *)malloc_type_malloc(0x8001uLL, 0x11478DC1uLL);
    v11 = v10;
    v12 = v10 + 32769;
    sub_10002A2DC((int)v9, (int)&v13, (int)&v14, 0, v6);
    v7 = 3LL;
    sub_10002DF9C(v9);
  }
  objc_release(v6);
  return v7;
}