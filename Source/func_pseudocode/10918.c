__ZN6google8protobuf17DescriptorBuilder15AllocateOptionsERKNS0_11FileOptionsEPNS0_14FileDescriptorE
void __fastcall google::protobuf::DescriptorBuilder::AllocateOptions(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileOptions *a2,
        google::protobuf::FileDescriptor *a3)
{
  _DWORD *v6; // x8
  __int64 v7; // x1
  const void **v8; // x24
  size_t v9; // x22
  void **v10; // x23
  const void *v11; // x1
  __int64 v12; // x22
  void *__p[2]; // [xsp+8h] [xbp-78h] BYREF
  char v14; // [xsp+1Fh] [xbp-61h]
  void *v15[2]; // [xsp+20h] [xbp-60h] BYREF
  char v16; // [xsp+37h] [xbp-49h]
  void *v17; // [xsp+38h] [xbp-48h] BYREF
  void *v18; // [xsp+40h] [xbp-40h]
  _DWORD *v19; // [xsp+48h] [xbp-38h] BYREF

  v19 = 0LL;
  v6 = (_DWORD *)sub_10009C294(&v19);
  *v6 = 8;
  v17 = v6;
  v19 = &v6[v7];
  v18 = v6 + 1;
  v8 = (const void **)*((_QWORD *)a3 + 1);
  if ( *((char *)v8 + 23) >= 0 )
    v9 = *((unsigned __int8 *)v8 + 23);
  else
    v9 = (size_t)v8[1];
  v10 = v15;
  sub_10007A5BC(v15, v9 + 6, __p);
  if ( v16 < 0 )
    v10 = (void **)v15[0];
  if ( v9 )
  {
    if ( *((char *)v8 + 23) >= 0 )
      v11 = v8;
    else
      v11 = *v8;
    memmove(v10, v11, v9);
  }
  strcpy((char *)v10 + v9, ".dummy");
  v12 = *(_QWORD *)a3;
  sub_10007A754((int)__p, "google.protobuf.FileOptions");
  sub_100087B58(this, v15, v12, a2, a3, &v17, __p);
  if ( v14 < 0 )
    operator delete(__p[0]);
  if ( v16 < 0 )
    operator delete(v15[0]);
  if ( v17 )
  {
    v18 = v17;
    operator delete(v17);
  }
}