__ZN6google8protobuf8internal10WireFormat9SkipFieldEPNS0_2io16CodedInputStreamEjPNS0_15UnknownFieldSetE
bool __fastcall google::protobuf::internal::WireFormat::SkipField(
        google::protobuf::internal::WireFormat *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::UnknownFieldSet *a3,
        google::protobuf::UnknownFieldSet *a4)
{
  __int64 v4; // x22
  int v6; // w23
  unsigned int v9; // w20
  char *v10; // x8
  __int64 Varint64Fallback; // x2
  unsigned __int64 *v12; // x8
  char *v13; // x8
  __int64 Varint32Fallback; // x22
  int v15; // w8
  bool v16; // vf
  google::protobuf::io::CodedInputStream *v17; // x1
  unsigned int *v18; // x8
  char v19; // w1
  int v20; // w8
  std::string *v21; // x0
  int v22; // w2
  unsigned int v23; // [xsp+4h] [xbp-3Ch] BYREF
  unsigned __int64 v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (unsigned int)a2 < 8 )
    return 0LL;
  v6 = (int)a2;
  v4 = 0LL;
  v9 = (unsigned int)a2 >> 3;
  switch ( (unsigned __int8)a2 & 7 )
  {
    case 0:
      v10 = *(char **)this;
      if ( *(_QWORD *)this >= *((_QWORD *)this + 1) || *v10 < 0 )
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
        v4 = v19 & 1;
        if ( !a3 )
          return v4;
      }
      else
      {
        Varint64Fallback = (unsigned __int8)*v10;
        *(_QWORD *)this = v10 + 1;
        v4 = 1LL;
        if ( !a3 )
          return v4;
      }
      if ( (_DWORD)v4 )
      {
        google::protobuf::UnknownFieldSet::AddVarint(a3, v9, Varint64Fallback);
        return 1LL;
      }
      return v4;
    case 1:
      v24 = 0LL;
      v12 = *(unsigned __int64 **)this;
      if ( (int)(*((_DWORD *)this + 2) - *(_QWORD *)this) < 8 )
      {
        v4 = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(this, &v24);
        if ( !a3 )
          return v4;
      }
      else
      {
        v24 = *v12;
        *(_QWORD *)this = v12 + 1;
        v4 = 1LL;
        if ( !a3 )
          return v4;
      }
      if ( (_DWORD)v4 )
        google::protobuf::UnknownFieldSet::AddFixed64(a3, v9, v24);
      return v4;
    case 2:
      v13 = *(char **)this;
      if ( *(_QWORD *)this >= *((_QWORD *)this + 1) )
      {
        LODWORD(Varint32Fallback) = 0;
      }
      else
      {
        Varint32Fallback = (unsigned __int8)*v13;
        if ( (*v13 & 0x80000000) == 0 )
        {
          *(_QWORD *)this = v13 + 1;
          goto LABEL_35;
        }
      }
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(this, Varint32Fallback);
      if ( Varint32Fallback < 0 )
        return 0LL;
LABEL_35:
      if ( a3 )
      {
        v21 = (std::string *)google::protobuf::UnknownFieldSet::AddLengthDelimited(a3, v9);
        if ( !(unsigned int)google::protobuf::io::CodedInputStream::ReadString(this, v21, Varint32Fallback) )
          return 0LL;
      }
      else
      {
        if ( (Varint32Fallback & 0x80000000) != 0 )
          return 0LL;
        v22 = *((_DWORD *)this + 2) - *(_QWORD *)this;
        if ( (int)Varint32Fallback <= v22 )
        {
          *(_QWORD *)this += (unsigned int)Varint32Fallback;
        }
        else if ( (google::protobuf::io::CodedInputStream::SkipFallback(this, Varint32Fallback, v22) & 1) == 0 )
        {
          return 0LL;
        }
      }
      return 1LL;
    case 3:
      v15 = *((_DWORD *)this + 13);
      v16 = __OFSUB__(v15--, 1);
      *((_DWORD *)this + 13) = v15;
      if ( v15 < 0 != v16 )
        return 0LL;
      v17 = a3
          ? (google::protobuf::io::CodedInputStream *)google::protobuf::UnknownFieldSet::AddGroup(
                                                        a3,
                                                        (unsigned int)a2 >> 3)
          : 0LL;
      if ( !(unsigned int)google::protobuf::internal::WireFormat::SkipMessage(this, v17, a3) )
        return 0LL;
      v20 = *((_DWORD *)this + 13);
      if ( v20 < *((_DWORD *)this + 14) )
        *((_DWORD *)this + 13) = v20 + 1;
      return *((_DWORD *)this + 8) == (v6 & 0xFFFFFFF8 | 4);
    case 5:
      v23 = 0;
      v18 = *(unsigned int **)this;
      if ( (int)(*((_DWORD *)this + 2) - *(_QWORD *)this) < 4 )
      {
        v4 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(this, &v23);
        if ( !a3 )
          return v4;
      }
      else
      {
        v23 = *v18;
        *(_QWORD *)this = v18 + 1;
        v4 = 1LL;
        if ( !a3 )
          return v4;
      }
      if ( (_DWORD)v4 )
        google::protobuf::UnknownFieldSet::AddFixed32(a3, v9, v23);
      break;
    default:
      return v4;
  }
  return v4;
}