_ModelKeyServerAPIFetchKeyRequestReadFrom
__int64 __fastcall ModelKeyServerAPIFetchKeyRequestReadFrom(__int64 a1, __int64 a2)
{
  char v4; // w9
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  char v8; // w13
  bool v9; // cf
  int v10; // w9
  id v12; // x0
  __int64 v13; // x9
  __int64 result; // x0
  void *v15; // x8
  char v16; // w9
  unsigned int v17; // w10
  __int64 v18; // x8
  unsigned __int64 v19; // x12
  char v20; // w13

  while ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) < *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
  {
    if ( *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) )
      break;
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos);
      if ( v7 == -1LL || v7 >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
        break;
      v8 = *(_BYTE *)(*(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__bytes) + v7);
      *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) = v7 + 1;
      v6 |= (unsigned __int64)(v8 & 0x7F) << v4;
      if ( (v8 & 0x80) == 0 )
        goto LABEL_11;
      v4 += 7;
      v9 = v5++ >= 9;
      if ( v9 )
      {
        v6 = 0LL;
        v10 = *(unsigned __int8 *)(a2 + OBJC_IVAR___PBDataReader__error);
        goto LABEL_13;
      }
    }
    *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) = 1;
LABEL_11:
    v10 = *(unsigned __int8 *)(a2 + OBJC_IVAR___PBDataReader__error);
    if ( *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) )
      v6 = 0LL;
LABEL_13:
    if ( v10 || (v6 & 7) == 4 )
      break;
    switch ( (unsigned int)(v6 >> 3) )
    {
      case 1u:
        v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadString(a2));
        v13 = 8LL;
        goto LABEL_23;
      case 2u:
        v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadString(a2));
        v13 = 24LL;
        goto LABEL_23;
      case 3u:
        v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadData(a2));
        v13 = 16LL;
LABEL_23:
        v15 = *(void **)(a1 + v13);
        *(_QWORD *)(a1 + v13) = v12;
        objc_release(v15);
        continue;
      case 4u:
        v16 = 0;
        v17 = 0;
        v18 = 0LL;
        *(_BYTE *)(a1 + 36) |= 1u;
        break;
      default:
        result = PBReaderSkipValueWithTag(a2);
        if ( !(_DWORD)result )
          return result;
        continue;
    }
    while ( 1 )
    {
      v19 = *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos);
      if ( v19 == -1LL || v19 >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
        break;
      v20 = *(_BYTE *)(*(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__bytes) + v19);
      *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) = v19 + 1;
      v18 |= (unsigned __int64)(v20 & 0x7F) << v16;
      if ( (v20 & 0x80) == 0 )
        goto LABEL_32;
      v16 += 7;
      v9 = v17++ >= 9;
      if ( v9 )
      {
        v18 = 0LL;
        goto LABEL_34;
      }
    }
    *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) = 1;
LABEL_32:
    if ( *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) )
      v18 = 0LL;
LABEL_34:
    *(_BYTE *)(a1 + 32) = v18 != 0;
  }
  return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
}