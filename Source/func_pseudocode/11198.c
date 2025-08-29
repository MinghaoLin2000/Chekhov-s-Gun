__ZNK6google8protobuf11FileOptions18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::FileOptions::_InternalSerialize(
        google::protobuf::FileOptions *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  int v7; // w21
  int i; // w22
  google::protobuf::UninterpretedOption *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  const google::protobuf::UnknownFieldSet *result; // x0
  google::protobuf::io::EpsCopyOutputStream *v16; // x3
  __int64 v17; // x8
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x10
  unsigned __int8 v22; // w8
  unsigned __int8 v23; // w8
  unsigned __int8 v24; // w8
  unsigned __int8 v25; // w8
  unsigned __int8 v26; // w8
  unsigned __int8 v27; // w8
  unsigned __int8 v28; // w8
  unsigned __int8 v29; // w8
  unsigned __int8 v30; // w8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 9) & 0xFFFFFFFE, a2);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 0x40000) == 0 )
        goto LABEL_4;
LABEL_38:
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v18 = *((int *)this + 40);
      *v4 = 72;
      if ( (unsigned int)v18 > 0x7F )
      {
        v4[1] = v18 | 0x80;
        v19 = v18 >> 7;
        if ( (unsigned int)v18 >> 14 )
        {
          v4 += 3;
          do
          {
            *(v4 - 1) = v19 | 0x80;
            v20 = v19 >> 7;
            ++v4;
            v21 = v19 >> 14;
            v19 >>= 7;
          }
          while ( v21 );
          *(v4 - 1) = v20;
          if ( (v6 & 0x400) != 0 )
            goto LABEL_49;
        }
        else
        {
          v4[2] = v19;
          v4 += 3;
          if ( (v6 & 0x400) != 0 )
            goto LABEL_49;
        }
      }
      else
      {
        v4[1] = v18;
        v4 += 2;
        if ( (v6 & 0x400) != 0 )
          goto LABEL_49;
      }
LABEL_5:
      if ( (v6 & 4) == 0 )
        goto LABEL_6;
      goto LABEL_52;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 8, (unsigned int)*((_QWORD *)this + 10) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x40000) != 0 )
    goto LABEL_38;
LABEL_4:
  if ( (v6 & 0x400) == 0 )
    goto LABEL_5;
LABEL_49:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v22 = *((_BYTE *)this + 152);
  *v4 = 80;
  v4[1] = v22;
  v4 += 2;
  if ( (v6 & 4) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x2000) == 0 )
      goto LABEL_7;
    goto LABEL_53;
  }
LABEL_52:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 11, (unsigned int)*((_QWORD *)this + 11) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x2000) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x4000) == 0 )
      goto LABEL_8;
    goto LABEL_56;
  }
LABEL_53:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v23 = *((_BYTE *)this + 155);
  *(_WORD *)v4 = 384;
  v4[2] = v23;
  v4 += 3;
  if ( (v6 & 0x4000) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x8000) == 0 )
      goto LABEL_9;
    goto LABEL_59;
  }
LABEL_56:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v24 = *((_BYTE *)this + 156);
  *(_WORD *)v4 = 392;
  v4[2] = v24;
  v4 += 3;
  if ( (v6 & 0x8000) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x800) == 0 )
      goto LABEL_10;
    goto LABEL_62;
  }
LABEL_59:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v25 = *((_BYTE *)this + 157);
  *(_WORD *)v4 = 400;
  v4[2] = v25;
  v4 += 3;
  if ( (v6 & 0x800) == 0 )
  {
LABEL_10:
    if ( (v6 & 0x20000) == 0 )
      goto LABEL_11;
    goto LABEL_65;
  }
LABEL_62:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v26 = *((_BYTE *)this + 153);
  *(_WORD *)v4 = 416;
  v4[2] = v26;
  v4 += 3;
  if ( (v6 & 0x20000) == 0 )
  {
LABEL_11:
    if ( (v6 & 0x1000) == 0 )
      goto LABEL_12;
    goto LABEL_68;
  }
LABEL_65:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v27 = *((_BYTE *)this + 159);
  *(_WORD *)v4 = 440;
  v4[2] = v27;
  v4 += 3;
  if ( (v6 & 0x1000) == 0 )
  {
LABEL_12:
    if ( (v6 & 0x80000) == 0 )
      goto LABEL_13;
    goto LABEL_71;
  }
LABEL_68:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v28 = *((_BYTE *)this + 154);
  *(_WORD *)v4 = 472;
  v4[2] = v28;
  v4 += 3;
  if ( (v6 & 0x80000) == 0 )
  {
LABEL_13:
    if ( (v6 & 8) == 0 )
      goto LABEL_14;
    goto LABEL_74;
  }
LABEL_71:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v29 = *((_BYTE *)this + 164);
  *(_WORD *)v4 = 504;
  v4[2] = v29;
  v4 += 3;
  if ( (v6 & 8) == 0 )
  {
LABEL_14:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_15;
    goto LABEL_75;
  }
LABEL_74:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 36, (unsigned int)*((_QWORD *)this + 12) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_15:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_16;
    goto LABEL_76;
  }
LABEL_75:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 37, (unsigned int)*((_QWORD *)this + 13) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_16:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_17;
    goto LABEL_77;
  }
LABEL_76:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 39, (unsigned int)*((_QWORD *)this + 14) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x40) == 0 )
  {
LABEL_17:
    if ( (v6 & 0x80) == 0 )
      goto LABEL_18;
    goto LABEL_78;
  }
LABEL_77:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 40, (unsigned int)*((_QWORD *)this + 15) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x80) == 0 )
  {
LABEL_18:
    if ( (v6 & 0x10000) == 0 )
      goto LABEL_19;
    goto LABEL_79;
  }
LABEL_78:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 41, (unsigned int)*((_QWORD *)this + 16) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x10000) == 0 )
  {
LABEL_19:
    if ( (v6 & 0x100) == 0 )
      goto LABEL_20;
    goto LABEL_82;
  }
LABEL_79:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v30 = *((_BYTE *)this + 158);
  *(_WORD *)v4 = 720;
  v4[2] = v30;
  v4 += 3;
  if ( (v6 & 0x100) == 0 )
  {
LABEL_20:
    if ( (v6 & 0x200) == 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_82:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 44, (unsigned int)*((_QWORD *)this + 17) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x200) != 0 )
LABEL_21:
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 45, (unsigned int)*((_QWORD *)this + 18) & 0xFFFFFFFE, v4);
LABEL_22:
  v7 = *((_DWORD *)this + 14);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v9 = *(google::protobuf::UninterpretedOption **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *(_WORD *)v4 = 16058;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        v4[2] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = v4 + 4;
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
          v4[3] = v12;
          v11 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v10;
        v11 = v4 + 3;
      }
      v4 = (unsigned __int8 *)google::protobuf::UninterpretedOption::_InternalSerialize(v9, v11, a3);
    }
  }
  result = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::ExtensionSet::_InternalSerialize(
                                                        (google::protobuf::FileOptions *)((char *)this + 16),
                                                        1000,
                                                        0x20000000,
                                                        v4,
                                                        a3);
  v17 = *((_QWORD *)this + 1);
  if ( (v17 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)((v17 & 0xFFFFFFFFFFFFFFFELL)
                                                                                                 + 8),
                                                        result,
                                                        (unsigned __int8 *)a3,
                                                        v16);
  }
  return result;
}