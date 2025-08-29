__ZN6google8protobuf17DescriptorBuilder22ValidateMessageOptionsEPNS0_10DescriptorERKNS0_15DescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateMessageOptions(
        google::protobuf::DescriptorBuilder *this,
        google::protobuf::Descriptor *a2,
        const google::protobuf::DescriptorProto *a3)
{
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x22
  int v15; // w8
  __int64 v16; // x27
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x26
  __int128 v20; // [xsp+0h] [xbp-280h]
  void *__p[2]; // [xsp+28h] [xbp-258h] BYREF
  char v22; // [xsp+3Fh] [xbp-241h]
  __int64 v23; // [xsp+40h] [xbp-240h] BYREF
  int v24; // [xsp+48h] [xbp-238h]
  __int64 v25; // [xsp+70h] [xbp-210h] BYREF
  int v26; // [xsp+78h] [xbp-208h]
  __int64 v27; // [xsp+A0h] [xbp-1E0h] BYREF
  int v28; // [xsp+A8h] [xbp-1D8h]
  __int64 v29; // [xsp+D0h] [xbp-1B0h] BYREF
  int v30; // [xsp+D8h] [xbp-1A8h]
  __int64 v31; // [xsp+100h] [xbp-180h] BYREF
  int v32; // [xsp+108h] [xbp-178h]
  __int64 v33; // [xsp+130h] [xbp-150h] BYREF
  int v34; // [xsp+138h] [xbp-148h]
  __int64 v35; // [xsp+160h] [xbp-120h] BYREF
  int v36; // [xsp+168h] [xbp-118h]
  __int64 v37; // [xsp+190h] [xbp-F0h] BYREF
  int v38; // [xsp+198h] [xbp-E8h]
  __int64 v39; // [xsp+1C0h] [xbp-C0h] BYREF
  int v40; // [xsp+1C8h] [xbp-B8h]
  const char *v41; // [xsp+1F0h] [xbp-90h] BYREF
  int v42; // [xsp+1F8h] [xbp-88h]
  int v43; // [xsp+1FCh] [xbp-84h] BYREF

  if ( *((int *)a2 + 26) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateFieldOptions(
        this,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 5) + v6),
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 5) + 8 * v7++ + 8));
      v6 += 152LL;
    }
    while ( v7 < *((int *)a2 + 26) );
  }
  if ( *((int *)a2 + 29) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateMessageOptions(
        this,
        (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 7) + v8),
        *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8) + 8 * v9++ + 8));
      v8 += 144LL;
    }
    while ( v9 < *((int *)a2 + 29) );
  }
  if ( *((int *)a2 + 30) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateEnumOptions(
        this,
        (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 8) + v10),
        *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)a3 + 11) + 8 * v11++ + 8));
      v10 += 80LL;
    }
    while ( v11 < *((int *)a2 + 30) );
  }
  if ( *((int *)a2 + 32) >= 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::ValidateFieldOptions(
        this,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 10) + v12),
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17) + 8 * v13++ + 8));
      v12 += 152LL;
    }
    while ( v13 < *((int *)a2 + 32) );
  }
  if ( *(_BYTE *)(*((_QWORD *)a2 + 4) + 72LL) )
    v14 = 0x7FFFFFFFLL;
  else
    v14 = 0x1FFFFFFFLL;
  v15 = *((_DWORD *)a2 + 31);
  if ( v15 >= 1 )
  {
    v16 = 0LL;
    v17 = 4LL;
    do
    {
      if ( v14 + 1 < *(int *)(*((_QWORD *)a2 + 9) + v17) )
      {
        v18 = *((_QWORD *)a2 + 1);
        v19 = *(_QWORD *)(*((_QWORD *)a3 + 14) + 8 * v16 + 8);
        v41 = (const char *)google::protobuf::FastInt64ToBuffer((google::protobuf *)v14, (__int64)&v43, (char *)a3);
        v42 = strlen(v41);
        v39 = 0LL;
        v40 = -1;
        v37 = 0LL;
        v38 = -1;
        v35 = 0LL;
        v36 = -1;
        v33 = 0LL;
        v34 = -1;
        v31 = 0LL;
        v32 = -1;
        v29 = 0LL;
        v30 = -1;
        v27 = 0LL;
        v28 = -1;
        v25 = 0LL;
        v26 = -1;
        v23 = 0LL;
        v24 = -1;
        *((_QWORD *)&v20 + 1) = &v25;
        *(_QWORD *)&v20 = &v27;
        google::protobuf::strings::Substitute(
          (__int64 *)__p,
          (int)"Extension numbers cannot be greater than $0.",
          (int)&v41,
          (int)&v39,
          (int)&v37,
          (int)&v35,
          (int)&v33,
          (int)&v31,
          (int)&v29,
          v20,
          (__int64)&v23);
        google::protobuf::DescriptorBuilder::AddError((__int64)this, v18, v19, 1LL, (__int64)__p);
        if ( v22 < 0 )
          operator delete(__p[0]);
        v15 = *((_DWORD *)a2 + 31);
      }
      ++v16;
      v17 += 16LL;
    }
    while ( v16 < v15 );
  }
}