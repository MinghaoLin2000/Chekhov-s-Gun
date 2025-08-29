__ZNK6google8protobuf19UninterpretedOption18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::UninterpretedOption::_InternalSerialize(
        google::protobuf::UninterpretedOption *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  int v6; // w21
  int i; // w22
  google::protobuf::UninterpretedOption_NamePart *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  int v14; // w21
  __int64 v15; // x8
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x10
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x10
  __int64 v25; // d0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 8);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v8 = *(google::protobuf::UninterpretedOption_NamePart **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 18;
      v9 = *((_DWORD *)v8 + 5);
      if ( v9 > 0x7F )
      {
        a2[1] = v9 | 0x80;
        v11 = v9 >> 7;
        if ( v9 >> 14 )
        {
          v10 = a2 + 3;
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
          a2[2] = v11;
          v10 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v9;
        v10 = a2 + 2;
      }
      a2 = google::protobuf::UninterpretedOption_NamePart::_InternalSerialize(v8, v10, a3);
    }
  }
  v14 = *((_DWORD *)this + 4);
  if ( (v14 & 1) != 0 )
  {
    a2 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, a2);
    if ( (v14 & 8) == 0 )
    {
LABEL_15:
      if ( (v14 & 0x10) == 0 )
        goto LABEL_16;
LABEL_34:
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v21 = *((_QWORD *)this + 10);
      *a2 = 40;
      if ( v21 > 0x7F )
      {
        a2[1] = v21 | 0x80;
        v22 = v21 >> 7;
        if ( v21 >> 14 )
        {
          a2 += 3;
          do
          {
            *(a2 - 1) = v22 | 0x80;
            v23 = v22 >> 7;
            ++a2;
            v24 = v22 >> 14;
            v22 >>= 7;
          }
          while ( v24 );
          *(a2 - 1) = v23;
          if ( (v14 & 0x20) != 0 )
            goto LABEL_45;
        }
        else
        {
          a2[2] = v22;
          a2 += 3;
          if ( (v14 & 0x20) != 0 )
            goto LABEL_45;
        }
      }
      else
      {
        a2[1] = v21;
        a2 += 2;
        if ( (v14 & 0x20) != 0 )
          goto LABEL_45;
      }
LABEL_17:
      if ( (v14 & 2) == 0 )
        goto LABEL_18;
      goto LABEL_48;
    }
  }
  else if ( (v14 & 8) == 0 )
  {
    goto LABEL_15;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v17 = *((_QWORD *)this + 9);
  *a2 = 32;
  if ( v17 > 0x7F )
  {
    a2[1] = v17 | 0x80;
    v18 = v17 >> 7;
    if ( v17 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v18 | 0x80;
        v19 = v18 >> 7;
        ++a2;
        v20 = v18 >> 14;
        v18 >>= 7;
      }
      while ( v20 );
      *(a2 - 1) = v19;
      if ( (v14 & 0x10) != 0 )
        goto LABEL_34;
    }
    else
    {
      a2[2] = v18;
      a2 += 3;
      if ( (v14 & 0x10) != 0 )
        goto LABEL_34;
    }
  }
  else
  {
    a2[1] = v17;
    a2 += 2;
    if ( (v14 & 0x10) != 0 )
      goto LABEL_34;
  }
LABEL_16:
  if ( (v14 & 0x20) == 0 )
    goto LABEL_17;
LABEL_45:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v25 = *((_QWORD *)this + 11);
  *a2 = 49;
  *(_QWORD *)(a2 + 1) = v25;
  a2 += 9;
  if ( (v14 & 2) == 0 )
  {
LABEL_18:
    if ( (v14 & 4) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_48:
  a2 = (unsigned __int8 *)sub_100038F08((int)a3, 7, (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE, a2);
  if ( (v14 & 4) != 0 )
LABEL_19:
    a2 = (unsigned __int8 *)sub_100038F08((int)a3, 8, (unsigned int)*((_QWORD *)this + 8) & 0xFFFFFFFE, a2);
LABEL_20:
  v15 = *((_QWORD *)this + 1);
  if ( (v15 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)a2);
}