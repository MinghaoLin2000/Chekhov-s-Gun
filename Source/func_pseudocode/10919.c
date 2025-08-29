__ZN6google8protobuf17DescriptorBuilder23AddRecursiveImportErrorERKNS0_19FileDescriptorProtoEi
void __fastcall google::protobuf::DescriptorBuilder::AddRecursiveImportError(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FileDescriptorProto *a2,
        int a3)
{
  __int64 v6; // x8
  __int64 v7; // x25
  unsigned __int64 v8; // x26
  __int64 v9; // x8
  int v10; // w10
  const std::string::value_type *v11; // x1
  std::string::size_type v12; // x2
  unsigned __int64 v13; // x8
  int v14; // w10
  const std::string::value_type *v15; // x1
  std::string::size_type v16; // x2
  __int64 v17; // x8
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x1
  std::string v21; // [xsp+8h] [xbp-58h] BYREF

  sub_10007A754((int)&v21, "File recursively imports itself: ");
  v6 = **((_QWORD **)this + 1);
  if ( 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - v6) >> 3) > a3 )
  {
    v7 = 24LL * a3;
    v8 = a3;
    do
    {
      v9 = v6 + v7;
      v10 = *(char *)(v9 + 23);
      if ( v10 >= 0 )
        v11 = (const std::string::value_type *)v9;
      else
        v11 = *(const std::string::value_type **)v9;
      if ( v10 >= 0 )
        v12 = *(unsigned __int8 *)(v9 + 23);
      else
        v12 = *(_QWORD *)(v9 + 8);
      std::string::append(&v21, v11, v12);
      std::string::append(&v21, " -> ");
      ++v8;
      v6 = **((_QWORD **)this + 1);
      v7 += 24LL;
    }
    while ( 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - v6) >> 3) > v8 );
  }
  v13 = *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(char *)(v13 + 23);
  if ( v14 >= 0 )
    v15 = (const std::string::value_type *)(*((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL);
  else
    v15 = *(const std::string::value_type **)v13;
  if ( v14 >= 0 )
    v16 = *(unsigned __int8 *)(v13 + 23);
  else
    v16 = *(_QWORD *)(v13 + 8);
  std::string::append(&v21, v15, v16);
  v17 = **((_QWORD **)this + 1);
  v18 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - v17) >> 3) - 1;
  v19 = v17 + 24LL * (a3 + 1);
  if ( v18 <= a3 )
    v20 = *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL;
  else
    v20 = v19;
  google::protobuf::DescriptorBuilder::AddError((__int64)this, v20, (__int64)a2, 9LL, (__int64)&v21);
  if ( SHIBYTE(v21.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v21.__r_.__value_.__l.__data_);
}