__ZN6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex13FindExtensionENS0_11StringPieceEi
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindExtension(
        google::protobuf::EncodedDescriptorDatabase::DescriptorIndex *a1,
        const void *a2,
        signed __int64 a3,
        int a4)
{
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  int *v11; // x23
  const void *v12; // x0
  __int64 v13; // x1
  _QWORD v15[2]; // [xsp+8h] [xbp-58h] BYREF
  int v16; // [xsp+18h] [xbp-48h]
  char v17; // [xsp+27h] [xbp-39h] BYREF
  __int64 v18; // [xsp+28h] [xbp-38h] BYREF

  google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::EnsureFlat(a1);
  v8 = *((_QWORD *)a1 + 21);
  v9 = *((_QWORD *)a1 + 22);
  v15[0] = a2;
  v15[1] = a3;
  v16 = a4;
  v18 = *((_QWORD *)a1 + 20);
  v17 = 0;
  v10 = sub_1000BE18C(v8, v9, v15, &v18, &v17);
  if ( *((_QWORD *)a1 + 22) != v10
    && (v11 = (int *)v10, v12 = (const void *)sub_1000BC584(), v13 == a3)
    && (a3 < 1 || v12 == a2 || !memcmp(v12, a2, a3))
    && v11[8] == a4 )
  {
    return *(_QWORD *)(*(_QWORD *)a1 + 40LL * *v11);
  }
  else
  {
    return 0LL;
  }
}