__ZNK6google8protobuf6Option18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Option::_InternalSerialize(
        google::protobuf::Option *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  unsigned __int64 v7; // x0
  google::protobuf::Any *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  __int64 v14; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = *((_QWORD *)this + 2) & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(char *)(v7 + 23) & 0x80000000) == 0 )
  {
    if ( !*(_BYTE *)(v7 + 23) )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v7 + 8) )
  {
    v7 = *(_QWORD *)v7;
LABEL_6:
    google::protobuf::internal::WireFormatLite::VerifyUtf8String(v7);
    a2 = (google::protobuf::UnknownFieldSet *)sub_100038F08(
                                                (int)a3,
                                                1,
                                                (unsigned int)*((_QWORD *)this + 2) & 0xFFFFFFFE,
                                                (unsigned __int8 *)a2);
  }
LABEL_7:
  if ( this != (google::protobuf::Option *)&google::protobuf::_Option_default_instance_ )
  {
    v8 = (google::protobuf::Any *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      {
        a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                    a3,
                                                    (unsigned __int8 *)a2);
        v8 = (google::protobuf::Any *)*((_QWORD *)this + 3);
      }
      *(_BYTE *)a2 = 18;
      v9 = *((_DWORD *)v8 + 8);
      if ( v9 > 0x7F )
      {
        *((_BYTE *)a2 + 1) = v9 | 0x80;
        v11 = v9 >> 7;
        if ( v9 >> 14 )
        {
          v10 = (unsigned __int8 *)a2 + 3;
          do
          {
            *(v10 - 1) = v11 | 0x80;
            v12 = v11 >> 7;
            ++v10;
            v13 = v11 >> 14;
            v11 >>= 7;
          }
          while ( v13 );
          *(v10 - 1) = v12;
        }
        else
        {
          *((_BYTE *)a2 + 2) = v11;
          v10 = (unsigned __int8 *)a2 + 3;
        }
      }
      else
      {
        *((_BYTE *)a2 + 1) = v9;
        v10 = (unsigned __int8 *)a2 + 2;
      }
      a2 = (google::protobuf::UnknownFieldSet *)google::protobuf::Any::_InternalSerialize(v8, v10, a3, a4);
    }
  }
  v14 = *((_QWORD *)this + 1);
  if ( (v14 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                (google::protobuf::internal::WireFormat *)((v14 & 0xFFFFFFFFFFFFFFFELL)
                                                                                         + 8),
                                                a2,
                                                (unsigned __int8 *)a3,
                                                a4);
}