__Z14pwgMediaForPWGP8NSStringP10pwg_info_t
__int64 __fastcall pwgMediaForPWG(void *a1, __int64 a2)
{
  id v3; // x0
  void *v4; // x19
  __int64 v5; // x21
  char *v6; // x21
  char *v7; // x0
  char *v8; // x0
  const char *v9; // x23
  unsigned __int64 v10; // x22
  char *v11; // x0
  const char *v12; // x23
  __int64 v13; // x23
  int v14; // w25
  int v15; // w0
  int v16; // w24
  int v17; // w0
  int v18; // w22
  int v19; // w23
  _BYTE *v21; // [xsp+10h] [xbp-90h] BYREF
  char v22[32]; // [xsp+18h] [xbp-88h] BYREF
  char __str[32]; // [xsp+38h] [xbp-68h] BYREF

  v3 = objc_retain(a1);
  v4 = v3;
  v5 = 0LL;
  if ( v3 )
  {
    if ( a2 )
    {
      *(_OWORD *)(a2 + 112) = 0u;
      *(_OWORD *)(a2 + 128) = 0u;
      *(_OWORD *)(a2 + 80) = 0u;
      *(_OWORD *)(a2 + 96) = 0u;
      *(_OWORD *)(a2 + 48) = 0u;
      *(_OWORD *)(a2 + 64) = 0u;
      *(_OWORD *)(a2 + 16) = 0u;
      *(_OWORD *)(a2 + 32) = 0u;
      *(_OWORD *)a2 = 0u;
      v5 = sub_100020968(v3);
      if ( !v5 )
      {
        v6 = (char *)objc_msgSend(objc_retainAutorelease(v4), "UTF8String");
        v7 = strchr(v6, 95);
        if ( !v7 )
          goto LABEL_21;
        v8 = strchr(v7 + 1, 95);
        if ( !v8 )
          goto LABEL_21;
        v9 = v8;
        v10 = (unsigned __int64)(v8 + 1);
        v11 = strchr(v8 + 1, 95);
        if ( !v11 )
          v11 = (char *)&v9[strlen(v9)];
        v12 = v11 - 2;
        v21 = (_BYTE *)v10;
        if ( (unsigned __int64)(v11 - 2) >= v10 && (!strcmp(v11 - 2, "in") || !strncmp(v12, "in_", 3uLL)) )
        {
          v14 = 0;
          v13 = 2540LL;
        }
        else
        {
          v13 = 100LL;
          v14 = 1;
        }
        v15 = sub_1000209C4(v10, &v21, v13, 1LL);
        if ( v21 && *v21 == 120 && (v16 = v15, v17 = sub_1000209C4(v21 + 1, &v21, v13, 1LL), v21) )
        {
          v18 = v17;
          if ( !strncmp(v6, "disc_", 5uLL) )
            v19 = v18;
          else
            v19 = v16;
          *(_DWORD *)(a2 + 24) = v19;
          *(_DWORD *)(a2 + 28) = v18;
          strlcpy((char *)(a2 + 32), v6, 0x41uLL);
          *(_QWORD *)a2 = a2 + 32;
          if ( v14 )
          {
            sub_100020AAC(__str);
            sub_100020AAC(v22);
            snprintf((char *)(a2 + 97), 0x29uLL, "%sx%smm");
          }
          else
          {
            sub_100020B58(__str);
            sub_100020B58(v22);
            snprintf((char *)(a2 + 97), 0x29uLL, "%sx%s");
          }
          *(_QWORD *)(a2 + 16) = a2 + 97;
          v5 = a2;
        }
        else
        {
LABEL_21:
          v5 = 0LL;
        }
      }
    }
  }
  objc_release(v4);
  return v5;
}