_ModelKeyServerAPIFetchKeyResponseReadFrom
__int64 __fastcall ModelKeyServerAPIFetchKeyResponseReadFrom(__int64 a1, __int64 a2)
{
  char v4; // w9
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  char v8; // w13
  int v10; // w9
  unsigned __int64 v12; // x1
  unsigned int v13; // w8
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x11
  int v16; // w10
  ModelKeyServerAPIResultError *v18; // x21
  __int64 result; // x0
  __int64 v20; // [xsp+0h] [xbp-60h] BYREF
  __int64 v21; // [xsp+8h] [xbp-58h]

  while ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) < *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
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
    v12 = v6 >> 3;
    if ( (unsigned int)(v6 >> 3) == 2 )
    {
      objc_msgSend((id)a1, "clearOneofValuesForResult");
      *(_BYTE *)(a1 + 32) |= 1u;
      *(_DWORD *)(a1 + 16) = 2;
      v18 = objc_alloc_init(&OBJC_CLASS___ModelKeyServerAPIResultError);
      objc_storeStrong((id *)(a1 + 8), v18);
      v20 = 0LL;
      v21 = 0LL;
      if ( !(unsigned int)PBReaderPlaceMark(a2, &v20) || (ModelKeyServerAPIResultErrorReadFrom(v18, a2) & 1) == 0 )
      {
LABEL_38:
        objc_release(v18);
        return 0LL;
      }
    }
    else
    {
      if ( (_DWORD)v12 != 1 )
      {
        if ( (_DWORD)v12 )
        {
          result = PBReaderSkipValueWithTag(a2);
          if ( !(_DWORD)result )
            return result;
        }
        else
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos);
            if ( v14 == -1LL || v14 >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
              break;
            v15 = v14 + 1;
            v16 = *(char *)(*(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__bytes) + v14);
            *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) = v15;
            if ( v16 < 0 && v13++ <= 8 )
              continue;
            goto LABEL_36;
          }
          *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) = 1;
        }
        continue;
      }
      objc_msgSend((id)a1, "clearOneofValuesForResult");
      *(_BYTE *)(a1 + 32) |= 1u;
      *(_DWORD *)(a1 + 16) = 1;
      v18 = objc_alloc_init(&OBJC_CLASS___ModelKeyServerAPIFetchKeyResult);
      objc_storeStrong((id *)(a1 + 24), v18);
      v20 = 0LL;
      v21 = 0LL;
      if ( !(unsigned int)PBReaderPlaceMark(a2, &v20)
        || (ModelKeyServerAPIFetchKeyResultReadFrom((__int64)v18, a2) & 1) == 0 )
      {
        goto LABEL_38;
      }
    }
    PBReaderRecallMark(a2, &v20);
    objc_release(v18);
LABEL_36:
    ;
  }
  return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
}