__ZNK6google8protobuf19EnumDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::EnumDescriptorProto::_InternalSerialize(
        google::protobuf::EnumDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  int v7; // w22
  int i; // w23
  google::protobuf::EnumValueDescriptorProto *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  google::protobuf::EnumOptions *v15; // x0
  unsigned int v16; // w9
  unsigned __int8 *v17; // x1
  unsigned int v18; // w8
  unsigned int v19; // w9
  unsigned int v20; // w10
  int v21; // w21
  int j; // w22
  google::protobuf::EnumDescriptorProto_EnumReservedRange *v23; // x0
  unsigned int v24; // w9
  unsigned __int8 *v25; // x1
  unsigned int v26; // w8
  unsigned int v27; // w9
  unsigned int v28; // w10
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x22
  __int64 v32; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE, a2);
  v7 = *((_DWORD *)this + 8);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v9 = *(google::protobuf::EnumValueDescriptorProto **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *v4 = 18;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        v4[1] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = v4 + 3;
          do
          {
            *(v11 - 1) = v12 | 0x80;
            v13 = v12 >> 7;
            ++v11;
            v14 = v12 >> 14;
            v12 >>= 7;
          }
          while ( v14 );
          *(v11 - 1) = v13;
        }
        else
        {
          v4[2] = v12;
          v11 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v10;
        v11 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::EnumValueDescriptorProto::_InternalSerialize(v9, v11, a3);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v15 = (google::protobuf::EnumOptions *)*((_QWORD *)this + 13);
    *v4 = 26;
    v16 = *((_DWORD *)v15 + 11);
    if ( v16 > 0x7F )
    {
      v4[1] = v16 | 0x80;
      v18 = v16 >> 7;
      if ( v16 >> 14 )
      {
        v17 = v4 + 3;
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
        v4[2] = v18;
        v17 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v16;
      v17 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::EnumOptions::_InternalSerialize(v15, v17, a3);
  }
  v21 = *((_DWORD *)this + 14);
  if ( v21 )
  {
    for ( j = 0; j != v21; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v23 = *(google::protobuf::EnumDescriptorProto_EnumReservedRange **)(*((_QWORD *)this + 8) + 8LL * j + 8);
      *v4 = 34;
      v24 = *((_DWORD *)v23 + 5);
      if ( v24 > 0x7F )
      {
        v4[1] = v24 | 0x80;
        v26 = v24 >> 7;
        if ( v24 >> 14 )
        {
          v25 = v4 + 3;
          do
          {
            *(v25 - 1) = v26 | 0x80;
            v27 = v26 >> 7;
            ++v25;
            v28 = v26 >> 14;
            v26 >>= 7;
          }
          while ( v28 );
          *(v25 - 1) = v27;
        }
        else
        {
          v4[2] = v26;
          v25 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v24;
        v25 = v4 + 2;
      }
      v4 = google::protobuf::EnumDescriptorProto_EnumReservedRange::_InternalSerialize(
             v23,
             v25,
             a3,
             (google::protobuf::io::EpsCopyOutputStream *)v4);
    }
  }
  v29 = *((unsigned int *)this + 20);
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    v31 = 8 * v29;
    do
    {
      v4 = (unsigned __int8 *)sub_1000A2FD0((int)a3, 5, *(_QWORD *)(*((_QWORD *)this + 11) + v30 + 8), v4);
      v30 += 8LL;
    }
    while ( v31 != v30 );
  }
  v32 = *((_QWORD *)this + 1);
  if ( (v32 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v32 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}