__ZNK6google8protobuf12UnknownField37InternalSerializeLengthDelimitedNoTagEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::UnknownField::InternalSerializeLengthDelimitedNoTag(
        google::protobuf::UnknownField *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  _QWORD *v4; // x1
  __int64 v5; // x9
  unsigned __int8 *v6; // x19
  unsigned int v7; // w8
  unsigned int v8; // w9
  unsigned int v9; // w10
  __int64 v10; // x8
  _QWORD *v11; // t2
  __int64 v12; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (_QWORD *)*((_QWORD *)this + 1);
  if ( *((char *)v4 + 23) < 0 )
    v5 = v4[1];
  else
    LODWORD(v5) = *((unsigned __int8 *)v4 + 23);
  if ( (unsigned int)v5 > 0x7F )
  {
    *a2 = v5 | 0x80;
    v7 = (unsigned int)v5 >> 7;
    if ( (unsigned int)v5 >> 14 )
    {
      v6 = a2 + 2;
      do
      {
        *(v6 - 1) = v7 | 0x80;
        v8 = v7 >> 7;
        ++v6;
        v9 = v7 >> 14;
        v7 >>= 7;
      }
      while ( v9 );
      *(v6 - 1) = v8;
    }
    else
    {
      a2[1] = v7;
      v6 = a2 + 2;
    }
  }
  else
  {
    *a2 = v5;
    v6 = a2 + 1;
  }
  if ( *((char *)v4 + 23) < 0 )
  {
    v11 = v4;
    v4 = (_QWORD *)*v4;
    v10 = v11[1];
  }
  else
  {
    LODWORD(v10) = *((unsigned __int8 *)v4 + 23);
  }
  if ( *(_QWORD *)a3 - (_QWORD)v6 < (int)v10 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::WriteRawFallback(a3, v4, v10, v6);
  }
  else
  {
    v12 = (int)v10;
    memcpy(v6, v4, (int)v10);
    return &v6[v12];
  }
}