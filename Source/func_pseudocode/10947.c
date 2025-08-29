__ZN6google8protobuf17DescriptorBuilder22ValidateServiceOptionsEPNS0_17ServiceDescriptorERKNS0_22ServiceDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateServiceOptions(
        google::protobuf::FileOptions *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // x22
  __int64 v7; // x23
  __int64 v8; // x8
  __int64 v9; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 136);
    if ( v7 != google::protobuf::FileOptions::default_instance(a1) && *(_DWORD *)(*(_QWORD *)(v3 + 136) + 160LL) == 3 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 136LL);
      if ( *(_BYTE *)(v8 + 155) || *(_BYTE *)(v8 + 156) )
      {
        v9 = *(_QWORD *)(a2 + 8);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)a1,
          v9,
          a3,
          0LL,
          "Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic_services "
          "and java_generic_services to false.");
      }
    }
  }
}