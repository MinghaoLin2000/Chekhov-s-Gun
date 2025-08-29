__ZNK6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex16FindAllFileNamesEPNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE
__n128 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindAllFileNames(
        _QWORD *a1,
        _QWORD *a2)
{
  __n128 result; // q0
  _QWORD *v5; // x24
  __int64 v6; // x22
  __int64 v7; // x25
  _QWORD *v8; // x9
  _QWORD *v9; // x8
  bool v10; // zf
  __int64 v11; // x8
  __int64 v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  __n128 v16; // [xsp+0h] [xbp-70h] BYREF
  __n128 v17; // [xsp+10h] [xbp-60h] BYREF
  __int64 v18; // [xsp+20h] [xbp-50h]

  sub_1000BC81C(a2, a1[5] + ((__int64)(a1[8] - a1[7]) >> 5));
  v5 = (_QWORD *)a1[3];
  if ( v5 == a1 + 4 )
  {
    v11 = 0LL;
  }
  else
  {
    v6 = 0LL;
    do
    {
      sub_10007A644(&v17, v5 + 5);
      v16 = v17;
      sub_1000967C4(&v17, &v16);
      v7 = *a2 + 24 * v6;
      if ( *(char *)(v7 + 23) < 0 )
        operator delete(*(void **)v7);
      result = v17;
      *(_QWORD *)(v7 + 16) = v18;
      *(__n128 *)v7 = result;
      v8 = (_QWORD *)v5[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v5[2];
          v10 = *v9 == (_QWORD)v5;
          v5 = v9;
        }
        while ( !v10 );
      }
      ++v6;
      v5 = v9;
    }
    while ( v9 != a1 + 4 );
    v11 = (unsigned int)v6;
  }
  v13 = a1[7];
  v12 = a1[8];
  if ( v13 != v12 )
  {
    v14 = 24 * v11;
    do
    {
      sub_10007A644(&v17, v13 + 8);
      v16 = v17;
      sub_1000967C4(&v17, &v16);
      v15 = *a2 + v14;
      if ( *(char *)(v15 + 23) < 0 )
        operator delete(*(void **)v15);
      result = v17;
      *(_QWORD *)(v15 + 16) = v18;
      *(__n128 *)v15 = result;
      v13 += 32LL;
      v14 += 24LL;
    }
    while ( v13 != v12 );
  }
  return result;
}