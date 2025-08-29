_ModelKeyServerAPIFetchKeyResultReadFrom
__int64 __fastcall ModelKeyServerAPIFetchKeyResultReadFrom(__int64 a1, __int64 a2)
{
  char v4; // w9
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  char v8; // w13
  int v10; // w9
  unsigned int v12; // w8
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x11
  int v15; // w10
  __int64 result; // x0
  id v18; // x0
  __int64 v19; // x9
  ModelKeyServerAPISignedKey *v20; // x8
  ModelKeyServerAPISignedKey *v21; // x0
  ModelKeyServerAPISignedKey *v22; // x21
  __int64 v23; // [xsp+0h] [xbp-60h] BYREF
  __int64 v24; // [xsp+8h] [xbp-58h]

  if ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
    return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
  while ( 2 )
  {
    if ( *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) )
      return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
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
      if ( v5++ >= 9 )
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
      return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
    switch ( (unsigned int)(v6 >> 3) )
    {
      case 0u:
        v12 = 0;
        do
        {
          v13 = *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos);
          if ( v13 == -1LL || v13 >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
          {
            *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) = 1;
            goto LABEL_38;
          }
          v14 = v13 + 1;
          v15 = *(char *)(*(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__bytes) + v13);
          *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) = v14;
          if ( (v15 & 0x80000000) == 0 )
            break;
        }
        while ( v12++ <= 8 );
        goto LABEL_38;
      case 1u:
        v18 = objc_retainAutoreleasedReturnValue((id)PBReaderReadString(a2));
        v19 = 16LL;
        goto LABEL_30;
      case 2u:
        v18 = objc_retainAutoreleasedReturnValue((id)PBReaderReadString(a2));
        v19 = 24LL;
        goto LABEL_30;
      case 3u:
        v18 = objc_retainAutoreleasedReturnValue((id)PBReaderReadString(a2));
        v19 = 48LL;
LABEL_30:
        v20 = *(ModelKeyServerAPISignedKey **)(a1 + v19);
        *(_QWORD *)(a1 + v19) = v18;
        v21 = v20;
        goto LABEL_37;
      case 4u:
        objc_msgSend((id)a1, "clearOneofValuesForKey");
        *(_BYTE *)(a1 + 56) |= 1u;
        *(_DWORD *)(a1 + 8) = 1;
        v22 = objc_alloc_init(&OBJC_CLASS___ModelKeyServerAPISignedKey);
        objc_storeStrong((id *)(a1 + 40), v22);
        v23 = 0LL;
        v24 = 0LL;
        if ( !(unsigned int)PBReaderPlaceMark(a2, &v23) || (ModelKeyServerAPISignedKeyReadFrom(v22, a2) & 1) == 0 )
          goto LABEL_42;
        goto LABEL_36;
      case 5u:
        objc_msgSend((id)a1, "clearOneofValuesForKey");
        *(_BYTE *)(a1 + 56) |= 1u;
        *(_DWORD *)(a1 + 8) = 2;
        v22 = objc_alloc_init(&OBJC_CLASS___ModelKeyServerAPIRawKey);
        objc_storeStrong((id *)(a1 + 32), v22);
        v23 = 0LL;
        v24 = 0LL;
        if ( (unsigned int)PBReaderPlaceMark(a2, &v23) && (ModelKeyServerAPIRawKeyReadFrom(v22, a2) & 1) != 0 )
        {
LABEL_36:
          PBReaderRecallMark(a2, &v23);
          v21 = v22;
LABEL_37:
          objc_release(v21);
LABEL_38:
          if ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
            return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
          continue;
        }
LABEL_42:
        objc_release(v22);
        return 0LL;
      default:
        result = PBReaderSkipValueWithTag(a2);
        if ( !(_DWORD)result )
          return result;
        goto LABEL_38;
    }
  }
}