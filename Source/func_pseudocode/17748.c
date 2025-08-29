_ModelKeyServerAPISignedKeyReadFrom
__int64 __fastcall ModelKeyServerAPISignedKeyReadFrom(__int64 a1, __int64 a2)
{
  char v4; // w9
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  char v8; // w13
  int v10; // w9
  id v12; // x0
  void *v13; // x8
  __int64 result; // x0

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
      break;
    if ( (unsigned int)(v6 >> 3) == 1 )
    {
      v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadData(a2));
      v13 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v12;
      objc_release(v13);
    }
    else
    {
      result = PBReaderSkipValueWithTag(a2);
      if ( !(_DWORD)result )
        return result;
    }
  }
  return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
}