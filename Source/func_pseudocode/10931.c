__ZN6google8protobuf17DescriptorBuilder18AllocateNameStringERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_
void **__fastcall google::protobuf::DescriptorBuilder::AllocateNameString(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // x8
  _QWORD *v5; // x19
  void **EmptyString; // x19
  int v8; // w8
  bool v9; // nf
  __int64 *v10; // x9
  __int64 v11; // x8
  int v12; // w8
  bool v13; // nf
  __int64 *v14; // x9
  __int64 v15; // x8
  __int128 v16; // q0
  __int128 v18; // [xsp+0h] [xbp-E0h] BYREF
  void *v19; // [xsp+10h] [xbp-D0h]
  __int64 v20[2]; // [xsp+18h] [xbp-C8h] BYREF
  _QWORD v21[6]; // [xsp+28h] [xbp-B8h] BYREF
  _QWORD v22[6]; // [xsp+58h] [xbp-88h] BYREF
  _QWORD v23[6]; // [xsp+88h] [xbp-58h] BYREF

  v4 = *((unsigned __int8 *)a2 + 23);
  if ( (v4 & 0x80u) != 0LL )
    v4 = a2[1];
  v5 = *(_QWORD **)(a1 + 8);
  if ( v4 )
  {
    EmptyString = (void **)google::protobuf::DescriptorPool::Tables::AllocateEmptyString(*(google::protobuf::DescriptorPool::Tables **)(a1 + 8));
    v8 = *((char *)a2 + 23);
    v9 = v8 < 0;
    v10 = (__int64 *)*a2;
    if ( v8 >= 0 )
      v10 = a2;
    v11 = *((unsigned __int8 *)a2 + 23);
    if ( v9 )
      v11 = a2[1];
    v23[0] = v10;
    v23[1] = v11;
    v22[0] = ".";
    v22[1] = 1LL;
    v12 = *((char *)a3 + 23);
    v13 = v12 < 0;
    v14 = (__int64 *)*a3;
    if ( v12 >= 0 )
      v14 = a3;
    v15 = *((unsigned __int8 *)a3 + 23);
    if ( v13 )
      v15 = a3[1];
    v21[0] = v14;
    v21[1] = v15;
    google::protobuf::StrCat(&v18, v23, v22, v21);
    if ( *((char *)EmptyString + 23) < 0 )
      operator delete(*EmptyString);
    v16 = v18;
    EmptyString[2] = v19;
    *(_OWORD *)EmptyString = v16;
  }
  else
  {
    sub_10007A644(v20, a3);
    return (void **)google::protobuf::DescriptorPool::Tables::AllocateString(v5, v20[0], v20[1]);
  }
  return EmptyString;
}