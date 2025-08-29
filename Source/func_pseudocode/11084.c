__ZNK6google8protobuf20FieldDescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::FieldDescriptorProto::_InternalSerialize(
        google::protobuf::FieldDescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x10
  google::protobuf::FieldOptions *v19; // x0
  unsigned int v20; // w9
  unsigned __int8 *v21; // x1
  unsigned int v22; // w8
  unsigned int v23; // w9
  unsigned int v24; // w10
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x10
  unsigned __int8 v29; // w8
  __int64 v30; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, a2);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 0x40) == 0 )
        goto LABEL_4;
LABEL_15:
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v7 = *((int *)this + 18);
      *v4 = 24;
      if ( (unsigned int)v7 > 0x7F )
      {
        v4[1] = v7 | 0x80;
        v8 = v7 >> 7;
        if ( (unsigned int)v7 >> 14 )
        {
          v4 += 3;
          do
          {
            *(v4 - 1) = v8 | 0x80;
            v9 = v8 >> 7;
            ++v4;
            v10 = v8 >> 14;
            v8 >>= 7;
          }
          while ( v10 );
          *(v4 - 1) = v9;
          if ( (v6 & 0x200) != 0 )
            goto LABEL_26;
        }
        else
        {
          v4[2] = v8;
          v4 += 3;
          if ( (v6 & 0x200) != 0 )
            goto LABEL_26;
        }
      }
      else
      {
        v4[1] = v7;
        v4 += 2;
        if ( (v6 & 0x200) != 0 )
          goto LABEL_26;
      }
LABEL_5:
      if ( (v6 & 0x400) == 0 )
        goto LABEL_6;
LABEL_37:
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v15 = *((int *)this + 22);
      *v4 = 40;
      if ( (unsigned int)v15 > 0x7F )
      {
        v4[1] = v15 | 0x80;
        v16 = v15 >> 7;
        if ( (unsigned int)v15 >> 14 )
        {
          v4 += 3;
          do
          {
            *(v4 - 1) = v16 | 0x80;
            v17 = v16 >> 7;
            ++v4;
            v18 = v16 >> 14;
            v16 >>= 7;
          }
          while ( v18 );
          *(v4 - 1) = v17;
          if ( (v6 & 4) != 0 )
            goto LABEL_48;
        }
        else
        {
          v4[2] = v16;
          v4 += 3;
          if ( (v6 & 4) != 0 )
            goto LABEL_48;
        }
      }
      else
      {
        v4[1] = v15;
        v4 += 2;
        if ( (v6 & 4) != 0 )
          goto LABEL_48;
      }
LABEL_7:
      if ( (v6 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_49;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 4) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x40) != 0 )
    goto LABEL_15;
LABEL_4:
  if ( (v6 & 0x200) == 0 )
    goto LABEL_5;
LABEL_26:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v11 = *((int *)this + 21);
  *v4 = 32;
  if ( (unsigned int)v11 > 0x7F )
  {
    v4[1] = v11 | 0x80;
    v12 = v11 >> 7;
    if ( (unsigned int)v11 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v12 | 0x80;
        v13 = v12 >> 7;
        ++v4;
        v14 = v12 >> 14;
        v12 >>= 7;
      }
      while ( v14 );
      *(v4 - 1) = v13;
      if ( (v6 & 0x400) != 0 )
        goto LABEL_37;
    }
    else
    {
      v4[2] = v12;
      v4 += 3;
      if ( (v6 & 0x400) != 0 )
        goto LABEL_37;
    }
  }
  else
  {
    v4[1] = v11;
    v4 += 2;
    if ( (v6 & 0x400) != 0 )
      goto LABEL_37;
  }
LABEL_6:
  if ( (v6 & 4) == 0 )
    goto LABEL_7;
LABEL_48:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 6, (unsigned int)*((_QWORD *)this + 5) & 0xFFFFFFFE, v4);
  if ( (v6 & 8) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_50;
  }
LABEL_49:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 7, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x80) == 0 )
      goto LABEL_10;
LABEL_60:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v25 = *((int *)this + 19);
    *v4 = 72;
    if ( (unsigned int)v25 > 0x7F )
    {
      v4[1] = v25 | 0x80;
      v26 = v25 >> 7;
      if ( (unsigned int)v25 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v26 | 0x80;
          v27 = v26 >> 7;
          ++v4;
          v28 = v26 >> 14;
          v26 >>= 7;
        }
        while ( v28 );
        *(v4 - 1) = v27;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_71;
      }
      else
      {
        v4[2] = v26;
        v4 += 3;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_71;
      }
    }
    else
    {
      v4[1] = v25;
      v4 += 2;
      if ( (v6 & 0x10) != 0 )
        goto LABEL_71;
    }
LABEL_11:
    if ( (v6 & 0x100) == 0 )
      goto LABEL_75;
    goto LABEL_72;
  }
LABEL_50:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v19 = (google::protobuf::FieldOptions *)*((_QWORD *)this + 8);
  *v4 = 66;
  v20 = *((_DWORD *)v19 + 11);
  if ( v20 > 0x7F )
  {
    v4[1] = v20 | 0x80;
    v22 = v20 >> 7;
    if ( v20 >> 14 )
    {
      v21 = v4 + 3;
      do
      {
        *(v21 - 1) = v22 | 0x80;
        v23 = v22 >> 7;
        ++v21;
        v24 = v22 >> 14;
        v22 >>= 7;
      }
      while ( v24 );
      *(v21 - 1) = v23;
    }
    else
    {
      v4[2] = v22;
      v21 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v20;
    v21 = v4 + 2;
  }
  v4 = (unsigned __int8 *)google::protobuf::FieldOptions::_InternalSerialize(v19, v21, a3);
  if ( (v6 & 0x80) != 0 )
    goto LABEL_60;
LABEL_10:
  if ( (v6 & 0x10) == 0 )
    goto LABEL_11;
LABEL_71:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 10, (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x100) == 0 )
    goto LABEL_75;
LABEL_72:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v29 = *((_BYTE *)this + 80);
  *(_WORD *)v4 = 392;
  v4[2] = v29;
  v4 += 3;
LABEL_75:
  v30 = *((_QWORD *)this + 1);
  if ( (v30 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v30 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}