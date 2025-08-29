_ModelKeyServerAPIRawKeyReadFrom
bool __fastcall ModelKeyServerAPIRawKeyReadFrom(__int64 a1, __int64 a2)
{
  char v4; // w9
  unsigned int v5; // w10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  char v8; // w13
  int v10; // w9
  id v12; // x8
  __int64 v13; // x9
  void *v14; // x0

  if ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) < *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
  {
    while ( 1 )
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
      if ( (unsigned int)(v6 >> 3) == 2 )
        break;
      if ( (unsigned int)(v6 >> 3) == 1 )
      {
        v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadData(a2));
        v13 = 16LL;
LABEL_21:
        v14 = *(void **)(a1 + v13);
        *(_QWORD *)(a1 + v13) = v12;
        objc_release(v14);
        goto LABEL_23;
      }
      if ( (PBReaderSkipValueWithTag(a2) & 1) == 0 )
        return 0LL;
LABEL_23:
      if ( *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__pos) >= *(_QWORD *)(a2 + OBJC_IVAR___PBDataReader__length) )
        return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
    }
    v12 = objc_retainAutoreleasedReturnValue((id)PBReaderReadData(a2));
    v13 = 8LL;
    goto LABEL_21;
  }
  return *(_BYTE *)(a2 + OBJC_IVAR___PBDataReader__error) == 0;
}