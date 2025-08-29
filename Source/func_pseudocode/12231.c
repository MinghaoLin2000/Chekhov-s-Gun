__ZN6google8protobuf8internal10WireFormat14_InternalParseEPNS0_7MessageEPKcPNS1_12ParseContextE
google::protobuf::internal *__fastcall google::protobuf::internal::WireFormat::_InternalParse(
        google::protobuf::Message *a1,
        google::protobuf::internal *a2,
        __int64 a3)
{
  google::protobuf::Descriptor *v6; // x21
  std::mutex ***v7; // x1
  std::mutex ***v8; // x22
  google::protobuf::internal *result; // x0
  google::protobuf::FieldDescriptor *FieldByNumber; // x5
  std::mutex **v11; // x0
  __int64 ExtensionByNumber; // x0
  unsigned int v13; // w1
  unsigned int v14; // w23
  unsigned int v15; // w10
  bool v16; // zf
  _QWORD v17[3]; // [xsp+0h] [xbp-50h] BYREF
  google::protobuf::internal *v18; // [xsp+18h] [xbp-38h] BYREF

  v18 = a2;
  v6 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a1 + 152LL))(a1);
  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a1 + 152LL))(a1);
  v8 = v7;
  if ( *(_BYTE *)(*((_QWORD *)v6 + 4) + 72LL) )
  {
    v17[0] = a1;
    v17[1] = v6;
    v17[2] = v7;
    return (google::protobuf::internal *)sub_100107834(v17, a2, a3);
  }
  while ( (sub_10003A040(a3, &v18, *(unsigned int *)(a3 + 92)) & 1) == 0 )
  {
    result = (google::protobuf::internal *)((char *)v18 + 1);
    v14 = *(unsigned __int8 *)v18;
    if ( (*(char *)v18 & 0x80000000) == 0 )
      goto LABEL_17;
    v15 = v14 + (*(unsigned __int8 *)result << 7);
    v14 = v15 - 128;
    if ( (*(char *)result & 0x80000000) == 0 )
    {
      result = (google::protobuf::internal *)((char *)v18 + 2);
LABEL_17:
      v18 = result;
      goto LABEL_18;
    }
    result = (google::protobuf::internal *)google::protobuf::internal::ReadTagFallback(v18, (const char *)(v15 - 128));
    v18 = result;
    if ( !result )
      return result;
    v14 = v13;
LABEL_18:
    if ( v14 )
      v16 = (v14 & 7) == 4;
    else
      v16 = 1;
    if ( v16 )
    {
      *(_DWORD *)(a3 + 80) = v14 - 1;
      return result;
    }
    FieldByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByNumber(v6, v14 >> 3);
    if ( !FieldByNumber )
    {
      if ( google::protobuf::Descriptor::FindExtensionRangeContainingNumber(v6, v14 >> 3) )
      {
        v11 = *(std::mutex ***)(a3 + 96);
        if ( v11 )
          ExtensionByNumber = google::protobuf::DescriptorPool::FindExtensionByNumber(v11, v6, v14 >> 3);
        else
          ExtensionByNumber = google::protobuf::Reflection::FindKnownExtensionByNumber(v8, v14 >> 3);
        FieldByNumber = (google::protobuf::FieldDescriptor *)ExtensionByNumber;
      }
      else
      {
        FieldByNumber = 0LL;
      }
    }
    result = (google::protobuf::internal *)google::protobuf::internal::WireFormat::_InternalParseAndMergeField(
                                             a1,
                                             (int)v18,
                                             a3,
                                             v14,
                                             (google::protobuf::Reflection *)v8,
                                             FieldByNumber);
    v18 = result;
    if ( !result )
      return result;
  }
  return v18;
}