__ZN6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex23FindAllExtensionNumbersENS0_11StringPieceEPNSt3__16vectorIiNS4_9allocatorIiEEEE
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindAllExtensionNumbers(
        google::protobuf::EncodedDescriptorDatabase::DescriptorIndex *a1,
        const void *a2,
        signed __int64 a3,
        __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x23
  const void *v12; // x0
  __int64 v13; // x1
  char v14; // w27
  unsigned __int64 v15; // x8
  _DWORD *v16; // x9
  _DWORD *v17; // x27
  _DWORD *v18; // x0
  __int64 v19; // x27
  unsigned __int64 v20; // x10
  __int64 v21; // x8
  __int64 v22; // x1
  __int64 v23; // x8
  _DWORD *v24; // x10
  int v25; // t1
  __int64 v26; // x1
  _QWORD v28[2]; // [xsp+8h] [xbp-78h] BYREF
  int v29; // [xsp+18h] [xbp-68h]
  char v30; // [xsp+27h] [xbp-59h] BYREF
  __int64 v31; // [xsp+28h] [xbp-58h] BYREF

  google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::EnsureFlat(a1);
  v8 = *((_QWORD *)a1 + 21);
  v9 = *((_QWORD *)a1 + 22);
  v28[0] = a2;
  v28[1] = a3;
  v29 = 0;
  v31 = *((_QWORD *)a1 + 20);
  v30 = 0;
  v10 = sub_1000BE18C(v8, v9, v28, &v31, &v30);
  if ( *((_QWORD *)a1 + 22) == v10 || (v11 = v10, v12 = (const void *)((__int64 (*)(void))sub_1000BC584)(), v13 != a3) )
  {
    v14 = 0;
  }
  else
  {
    v14 = 0;
    while ( a3 < 1 || v12 == a2 || !memcmp(v12, a2, a3) )
    {
      v16 = *(_DWORD **)(a4 + 8);
      v15 = *(_QWORD *)(a4 + 16);
      if ( (unsigned __int64)v16 >= v15 )
      {
        v18 = *(_DWORD **)a4;
        v19 = ((__int64)v16 - *(_QWORD *)a4) >> 2;
        v20 = v19 + 1;
        if ( (unsigned __int64)(v19 + 1) >> 62 )
          sub_100097888(a4);
        v21 = v15 - (_QWORD)v18;
        if ( v21 >> 1 > v20 )
          v20 = v21 >> 1;
        if ( (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL )
          v22 = 0x3FFFFFFFFFFFFFFFLL;
        else
          v22 = v20;
        if ( v22 )
        {
          v23 = sub_10009C294(a4 + 16);
          v18 = *(_DWORD **)a4;
          v16 = *(_DWORD **)(a4 + 8);
        }
        else
        {
          v23 = 0LL;
        }
        v24 = (_DWORD *)(v23 + 4 * v19);
        *v24 = *(_DWORD *)(v11 + 32);
        v17 = v24 + 1;
        while ( v16 != v18 )
        {
          v25 = *--v16;
          *--v24 = v25;
        }
        *(_QWORD *)a4 = v24;
        *(_QWORD *)(a4 + 8) = v17;
        *(_QWORD *)(a4 + 16) = v23 + 4 * v22;
        if ( v18 )
          operator delete(v18);
      }
      else
      {
        *v16 = *(_DWORD *)(v11 + 32);
        v17 = v16 + 1;
      }
      *(_QWORD *)(a4 + 8) = v17;
      v11 += 40LL;
      if ( v11 == *((_QWORD *)a1 + 22) )
      {
        v14 = 1;
        return v14 & 1;
      }
      v12 = (const void *)sub_1000BC584(v11, a1);
      v14 = 1;
      if ( v26 != a3 )
        return v14 & 1;
    }
  }
  return v14 & 1;
}