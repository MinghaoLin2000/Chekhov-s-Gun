__ZN6google8protobuf8internal10WireFormat46InternalSerializeUnknownMessageSetItemsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::internal::WireFormat::InternalSerializeUnknownMessageSetItemsToArray(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v8; // x22
  google::protobuf::UnknownField *v9; // x21
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  unsigned __int8 *v15; // x1

  v5 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  if ( (int)((unsigned __int64)(v4 - *(_QWORD *)this) >> 4) >= 1 )
  {
    v8 = 0LL;
    do
    {
      v9 = (google::protobuf::UnknownField *)(v5 + 16 * v8);
      if ( *((_DWORD *)v9 + 1) == 3 )
      {
        if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
          a2 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                            a3,
                                                            (unsigned __int8 *)a2);
        *(_WORD *)a2 = 4107;
        v10 = *(_DWORD *)v9;
        if ( *(_DWORD *)v9 > 0x7Fu )
        {
          *((_BYTE *)a2 + 2) = v10 | 0x80;
          v12 = v10 >> 7;
          if ( v10 >> 14 )
          {
            v11 = (unsigned __int8 *)a2 + 4;
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
            *((_BYTE *)a2 + 3) = v12;
            v11 = (unsigned __int8 *)a2 + 4;
          }
        }
        else
        {
          *((_BYTE *)a2 + 2) = v10;
          v11 = (unsigned __int8 *)a2 + 3;
        }
        *v11 = 26;
        v15 = google::protobuf::UnknownField::InternalSerializeLengthDelimitedNoTag(v9, v11 + 1, a3);
        if ( *(_QWORD *)a3 <= (unsigned __int64)v15 )
          v15 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v15);
        *v15 = 12;
        a2 = (const google::protobuf::UnknownFieldSet *)(v15 + 1);
        v5 = *(_QWORD *)this;
        v4 = *((_QWORD *)this + 1);
      }
      ++v8;
    }
    while ( v8 < (int)((unsigned __int64)(v4 - v5) >> 4) );
  }
  return a2;
}