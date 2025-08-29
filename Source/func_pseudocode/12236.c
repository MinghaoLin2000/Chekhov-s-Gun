__ZN6google8protobuf8internal10WireFormat31InternalSerializeMessageSetItemEPKNS0_15FieldDescriptorERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::internal::WireFormat::InternalSerializeMessageSetItem(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::Message *a3,
        google::protobuf::io::EpsCopyOutputStream *a4,
        google::protobuf::io::EpsCopyOutputStream *a5)
{
  google::protobuf::Reflection *v9; // x1
  google::protobuf::Reflection *v10; // x22
  unsigned int v11; // w9
  char *v12; // x23
  unsigned int v13; // w8
  unsigned int v14; // w9
  unsigned int v15; // w10
  __int64 Message; // x20
  unsigned int v17; // w0
  char *v18; // x1
  unsigned int v19; // w8
  unsigned int v20; // w9
  unsigned int v21; // w10
  unsigned __int8 *v22; // x1

  (*(void (__fastcall **)(const google::protobuf::FieldDescriptor *))(*(_QWORD *)a2 + 152LL))(a2);
  v10 = v9;
  if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
    a3 = (const google::protobuf::Message *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                              a4,
                                              (unsigned __int8 *)a3);
  *(_BYTE *)a3 = 11;
  v11 = *((_DWORD *)this + 17);
  *((_BYTE *)a3 + 1) = 16;
  if ( v11 > 0x7F )
  {
    *((_BYTE *)a3 + 2) = v11 | 0x80;
    v13 = v11 >> 7;
    if ( v11 >> 14 )
    {
      v12 = (char *)a3 + 4;
      do
      {
        *(v12 - 1) = v13 | 0x80;
        v14 = v13 >> 7;
        ++v12;
        v15 = v13 >> 14;
        v13 >>= 7;
      }
      while ( v15 );
      *(v12 - 1) = v14;
    }
    else
    {
      *((_BYTE *)a3 + 3) = v13;
      v12 = (char *)a3 + 4;
    }
  }
  else
  {
    *((_BYTE *)a3 + 2) = v11;
    v12 = (char *)a3 + 3;
  }
  Message = google::protobuf::Reflection::GetMessage(v10, a2, this, 0LL);
  *v12 = 26;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Message + 80LL))(Message);
  if ( v17 > 0x7F )
  {
    v12[1] = v17 | 0x80;
    v19 = v17 >> 7;
    if ( v17 >> 14 )
    {
      v18 = v12 + 3;
      do
      {
        *(v18 - 1) = v19 | 0x80;
        v20 = v19 >> 7;
        ++v18;
        v21 = v19 >> 14;
        v19 >>= 7;
      }
      while ( v21 );
      *(v18 - 1) = v20;
    }
    else
    {
      v12[2] = v19;
      v18 = v12 + 3;
    }
  }
  else
  {
    v12[1] = v17;
    v18 = v12 + 2;
  }
  v22 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, char *, google::protobuf::io::EpsCopyOutputStream *))(*(_QWORD *)Message + 96LL))(
                             Message,
                             v18,
                             a4);
  if ( *(_QWORD *)a4 <= (unsigned __int64)v22 )
    v22 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v22);
  *v22 = 12;
  return v22 + 1;
}