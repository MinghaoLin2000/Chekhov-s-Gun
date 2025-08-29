__urfSetLineSize
__int64 __fastcall _urfSetLineSize(__int64 a1, unsigned __int8 *a2)
{
  __int128 v3; // q0
  unsigned int v4; // w8
  __int64 result; // x0
  const char *v7; // x8
  unsigned int v8; // w9
  unsigned int v10; // w9
  unsigned int v11; // w8
  unsigned __int64 v12; // x20
  void *v13; // x0
  void *v14; // x0

  v3 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 40) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  switch ( a2[1] )
  {
    case 0u:
    case 4u:
      v4 = *a2;
      if ( v4 == 8 || v4 == 16 )
        goto LABEL_19;
      goto LABEL_32;
    case 1u:
      v4 = *a2;
      if ( v4 != 24 )
        goto LABEL_32;
      goto LABEL_19;
    case 2u:
      v4 = *a2;
      if ( v4 != 32 )
        goto LABEL_32;
      goto LABEL_19;
    case 3u:
    case 5u:
      v4 = *a2;
      if ( v4 == 24 )
        goto LABEL_19;
      goto LABEL_18;
    case 6u:
      v4 = *a2;
      if ( v4 != 32 && v4 != 64 )
        goto LABEL_32;
      goto LABEL_19;
    case 7u:
      v4 = *a2;
LABEL_18:
      if ( v4 == 48 )
        goto LABEL_19;
      goto LABEL_32;
    case 8u:
      v4 = *a2;
      if ( v4 != 16 )
      {
LABEL_32:
        result = 0LL;
        v7 = "Bad bitsPerPixel in page header";
        goto LABEL_33;
      }
LABEL_19:
      if ( a2[2] >= 4u )
      {
        result = 0LL;
        v7 = "Bad duplexMode in page header";
LABEL_33:
        *(_QWORD *)(a1 + 112) = v7;
        return result;
      }
      v8 = a2[3];
      if ( v8 > 5 || v8 - 1 <= 1 )
      {
        result = 0LL;
        v7 = "Bad printQuality in page header";
        goto LABEL_33;
      }
      v10 = *((_DWORD *)a2 + 3);
      if ( !v10 )
      {
        result = 0LL;
        v7 = "Bad width in page header";
        goto LABEL_33;
      }
      if ( !*((_DWORD *)a2 + 4) )
      {
        result = 0LL;
        v7 = "Bad height in page header";
        goto LABEL_33;
      }
      if ( !*((_DWORD *)a2 + 5) )
      {
        result = 0LL;
        v7 = "Bad resolution in page header";
        goto LABEL_33;
      }
      v11 = v4 >> 3;
      v12 = v10 * (unsigned __int64)v11;
      v13 = *(void **)(a1 + 56);
      if ( v13 )
        v14 = malloc_type_realloc(v13, v10 * (unsigned __int64)v11, 0x9092D853uLL);
      else
        v14 = malloc_type_malloc(v10 * (unsigned __int64)v11, 0x62CE6984uLL);
      if ( !v14 )
      {
        free(*(void **)(a1 + 56));
        result = 0LL;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        v7 = "Unable to allocate memory for line buffer";
        goto LABEL_33;
      }
      *(_QWORD *)(a1 + 56) = v14;
      *(_QWORD *)(a1 + 72) = v12;
      return 1LL;
    default:
      result = 0LL;
      v7 = "Bad colorSpace in page header";
      goto LABEL_33;
  }
}