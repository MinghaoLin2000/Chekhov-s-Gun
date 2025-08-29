__ZN6google8protobuf17DescriptorBuilder12LookupSymbolERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_NS0_14DescriptorPool15PlaceholderTypeENS1_11ResolveModeEb
unsigned __int64 __fastcall google::protobuf::DescriptorBuilder::LookupSymbol(
        __int64 *a1,
        std::string *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v9; // x0
  __int64 v10; // x21
  unsigned int v11; // w8
  _QWORD v13[2]; // [xsp+0h] [xbp-30h] BYREF

  v9 = google::protobuf::DescriptorBuilder::LookupSymbolNoPlaceholder((__int64)a1, a2, a3, a5, a6);
  if ( !(_DWORD)v9 )
  {
    v10 = *a1;
    if ( !*(_BYTE *)(v10 + 42) )
    {
      v11 = 0;
      return v9 & 0xFFFFFFFF00000000LL | v11;
    }
    sub_10007A644(v13, a2);
    v9 = google::protobuf::DescriptorPool::NewPlaceholderWithMutexHeld(v10, v13[0], v13[1], a4);
  }
  v11 = v9;
  return v9 & 0xFFFFFFFF00000000LL | v11;
}