__ZNK6google8protobuf30DescriptorProto_ExtensionRange18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::DescriptorProto_ExtensionRange::_InternalSerialize(
        google::protobuf::DescriptorProto_ExtensionRange *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  google::protobuf::ExtensionRangeOptions *v15; // x0
  unsigned int v16; // w9
  unsigned __int8 *v17; // x1
  unsigned int v18; // w8
  unsigned int v19; // w9
  unsigned int v20; // w10
  __int64 v21; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((int *)this + 8);
    *a2 = 8;
    if ( (unsigned int)v7 > 0x7F )
    {
      a2[1] = v7 | 0x80;
      v8 = v7 >> 7;
      if ( (unsigned int)v7 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v8 | 0x80;
          v9 = v8 >> 7;
          ++a2;
          v10 = v8 >> 14;
          v8 >>= 7;
        }
        while ( v10 );
        *(a2 - 1) = v9;
        if ( (v6 & 4) != 0 )
          goto LABEL_16;
      }
      else
      {
        a2[2] = v8;
        a2 += 3;
        if ( (v6 & 4) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      a2[1] = v7;
      a2 += 2;
      if ( (v6 & 4) != 0 )
        goto LABEL_16;
    }
LABEL_3:
    if ( (v6 & 1) == 0 )
      goto LABEL_37;
    goto LABEL_27;
  }
  if ( (v6 & 4) == 0 )
    goto LABEL_3;
LABEL_16:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v11 = *((int *)this + 9);
  *a2 = 16;
  if ( (unsigned int)v11 > 0x7F )
  {
    a2[1] = v11 | 0x80;
    v12 = v11 >> 7;
    if ( (unsigned int)v11 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v12 | 0x80;
        v13 = v12 >> 7;
        ++a2;
        v14 = v12 >> 14;
        v12 >>= 7;
      }
      while ( v14 );
      *(a2 - 1) = v13;
      if ( (v6 & 1) == 0 )
        goto LABEL_37;
    }
    else
    {
      a2[2] = v12;
      a2 += 3;
      if ( (v6 & 1) == 0 )
        goto LABEL_37;
    }
  }
  else
  {
    a2[1] = v11;
    a2 += 2;
    if ( (v6 & 1) == 0 )
      goto LABEL_37;
  }
LABEL_27:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v15 = (google::protobuf::ExtensionRangeOptions *)*((_QWORD *)this + 3);
  *a2 = 26;
  v16 = *((_DWORD *)v15 + 16);
  if ( v16 > 0x7F )
  {
    a2[1] = v16 | 0x80;
    v18 = v16 >> 7;
    if ( v16 >> 14 )
    {
      v17 = a2 + 3;
      do
      {
        *(v17 - 1) = v18 | 0x80;
        v19 = v18 >> 7;
        ++v17;
        v20 = v18 >> 14;
        v18 >>= 7;
      }
      while ( v20 );
      *(v17 - 1) = v19;
    }
    else
    {
      a2[2] = v18;
      v17 = a2 + 3;
    }
  }
  else
  {
    a2[1] = v16;
    v17 = a2 + 2;
  }
  a2 = (unsigned __int8 *)google::protobuf::ExtensionRangeOptions::_InternalSerialize(v15, v17, a3);
LABEL_37:
  v21 = *((_QWORD *)this + 1);
  if ( (v21 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}