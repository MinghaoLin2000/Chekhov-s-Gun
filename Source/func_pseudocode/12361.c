__ZN6google8protobuf8internal24UTF8GenericScanFastAsciiEPKNS1_19UTF8StateMachineObjEPKciPi
__int64 __fastcall google::protobuf::internal::UTF8GenericScanFastAscii(unsigned int *a1, char *a2, int a3, _DWORD *a4)
{
  char *v8; // x23
  unsigned __int64 v9; // x24
  char *v10; // x25
  __int64 v11; // x8
  char v12; // w9
  signed __int64 v13; // x8
  __int64 result; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF

  *a4 = 0;
  if ( !a3 )
    return 241LL;
  v8 = &a2[a3];
  if ( a3 >= 7 )
    v9 = (unsigned __int64)(v8 - 7);
  else
    v9 = (unsigned __int64)a2;
  v15 = 0;
  v10 = a2;
  do
  {
    v11 = (unsigned __int8)v10 & 7;
    if ( ((unsigned __int8)v10 & 7) != 0 && v10 < v8 )
    {
      v12 = (_BYTE)v10 + 1;
      while ( (*v10 & 0x80000000) == 0 )
      {
        ++v10;
        v11 = v12 & 7;
        if ( (v12 & 7) != 0 )
        {
          ++v12;
          if ( v10 < v8 )
            continue;
        }
        goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( !v11 )
      {
        while ( (unsigned __int64)v10 < v9 && ((*((_DWORD *)v10 + 1) | *(_DWORD *)v10) & 0x80808080) == 0 )
          v10 += 8;
      }
    }
    if ( v10 < v8 )
    {
      v13 = v8 - v10;
      while ( (*v10 & 0x80000000) == 0 )
      {
        ++v10;
        if ( !--v13 )
        {
          v10 = v8;
          break;
        }
      }
    }
    result = google::protobuf::internal::UTF8GenericScan(a1, &a2[(int)v10 - (int)a2], a3 - ((int)v10 - (int)a2), &v15);
    v10 += v15;
  }
  while ( (_DWORD)result == 253 );
  *a4 = (_DWORD)v10 - (_DWORD)a2;
  return result;
}