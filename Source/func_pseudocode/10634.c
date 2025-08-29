__ZNK3TSP10LargeArray18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::LargeArray::_InternalSerialize(
        TSP::LargeArray *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  int i; // w22
  TSP::Range *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  int v14; // w21
  int j; // w22
  TSP::Reference *v16; // x0
  unsigned int v17; // w9
  unsigned __int8 *v18; // x1
  unsigned int v19; // w8
  unsigned int v20; // w9
  unsigned int v21; // w10
  int v22; // w21
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x10
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x10
  unsigned __int8 v31; // w8
  unsigned int v32; // w9
  unsigned int v33; // w8
  unsigned int v34; // w9
  unsigned int v35; // w10
  unsigned __int8 v36; // w8
  unsigned __int64 v37; // x9
  unsigned __int64 v38; // x8
  unsigned __int64 v39; // x9
  unsigned __int64 v40; // x10
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x8
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x10
  __int64 v45; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 8);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v8 = *(TSP::Range **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 10;
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
      a2 = TSP::Range::_InternalSerialize(v8, v10, a3, a4);
    }
  }
  v14 = *((_DWORD *)this + 14);
  if ( v14 )
  {
    for ( j = 0; j != v14; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v16 = *(TSP::Reference **)(*((_QWORD *)this + 8) + 8LL * j + 8);
      *a2 = 18;
      v17 = *((_DWORD *)v16 + 5);
      if ( v17 > 0x7F )
      {
        a2[1] = v17 | 0x80;
        v19 = v17 >> 7;
        if ( v17 >> 14 )
        {
          v18 = a2 + 3;
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
          a2[2] = v19;
          v18 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v17;
        v18 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v16, v18, a3, a4);
    }
  }
  v22 = *((_DWORD *)this + 4);
  if ( (v22 & 1) == 0 )
  {
    if ( (v22 & 2) == 0 )
      goto LABEL_27;
LABEL_44:
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v27 = *((_QWORD *)this + 10);
    *a2 = 32;
    if ( v27 > 0x7F )
    {
      a2[1] = v27 | 0x80;
      v28 = v27 >> 7;
      if ( v27 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v28 | 0x80;
          v29 = v28 >> 7;
          ++a2;
          v30 = v28 >> 14;
          v28 >>= 7;
        }
        while ( v30 );
        *(a2 - 1) = v29;
        if ( (v22 & 8) != 0 )
          goto LABEL_55;
      }
      else
      {
        a2[2] = v28;
        a2 += 3;
        if ( (v22 & 8) != 0 )
          goto LABEL_55;
      }
    }
    else
    {
      a2[1] = v27;
      a2 += 2;
      if ( (v22 & 8) != 0 )
        goto LABEL_55;
    }
LABEL_28:
    if ( (v22 & 4) == 0 )
      goto LABEL_29;
LABEL_58:
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v32 = *((_DWORD *)this + 22);
    *a2 = 48;
    if ( v32 > 0x7F )
    {
      a2[1] = v32 | 0x80;
      v33 = v32 >> 7;
      if ( v32 >> 14 )
      {
        a2 += 3;
        do
        {
          *(a2 - 1) = v33 | 0x80;
          v34 = v33 >> 7;
          ++a2;
          v35 = v33 >> 14;
          v33 >>= 7;
        }
        while ( v35 );
        *(a2 - 1) = v34;
        if ( (v22 & 0x10) != 0 )
          goto LABEL_69;
      }
      else
      {
        a2[2] = v33;
        a2 += 3;
        if ( (v22 & 0x10) != 0 )
          goto LABEL_69;
      }
    }
    else
    {
      a2[1] = v32;
      a2 += 2;
      if ( (v22 & 0x10) != 0 )
        goto LABEL_69;
    }
LABEL_30:
    if ( (v22 & 0x20) == 0 )
      goto LABEL_31;
    goto LABEL_72;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v23 = *((_QWORD *)this + 9);
  *a2 = 24;
  if ( v23 > 0x7F )
  {
    a2[1] = v23 | 0x80;
    v24 = v23 >> 7;
    if ( v23 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v24 | 0x80;
        v25 = v24 >> 7;
        ++a2;
        v26 = v24 >> 14;
        v24 >>= 7;
      }
      while ( v26 );
      *(a2 - 1) = v25;
      if ( (v22 & 2) != 0 )
        goto LABEL_44;
    }
    else
    {
      a2[2] = v24;
      a2 += 3;
      if ( (v22 & 2) != 0 )
        goto LABEL_44;
    }
  }
  else
  {
    a2[1] = v23;
    a2 += 2;
    if ( (v22 & 2) != 0 )
      goto LABEL_44;
  }
LABEL_27:
  if ( (v22 & 8) == 0 )
    goto LABEL_28;
LABEL_55:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v31 = *((_BYTE *)this + 92);
  *a2 = 40;
  a2[1] = v31;
  a2 += 2;
  if ( (v22 & 4) != 0 )
    goto LABEL_58;
LABEL_29:
  if ( (v22 & 0x10) == 0 )
    goto LABEL_30;
LABEL_69:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v36 = *((_BYTE *)this + 93);
  *a2 = 56;
  a2[1] = v36;
  a2 += 2;
  if ( (v22 & 0x20) == 0 )
  {
LABEL_31:
    if ( (v22 & 0x40) == 0 )
      goto LABEL_92;
    goto LABEL_83;
  }
LABEL_72:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v37 = *((_QWORD *)this + 12);
  *a2 = 64;
  if ( v37 > 0x7F )
  {
    a2[1] = v37 | 0x80;
    v38 = v37 >> 7;
    if ( v37 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v38 | 0x80;
        v39 = v38 >> 7;
        ++a2;
        v40 = v38 >> 14;
        v38 >>= 7;
      }
      while ( v40 );
      *(a2 - 1) = v39;
      if ( (v22 & 0x40) == 0 )
        goto LABEL_92;
    }
    else
    {
      a2[2] = v38;
      a2 += 3;
      if ( (v22 & 0x40) == 0 )
        goto LABEL_92;
    }
  }
  else
  {
    a2[1] = v37;
    a2 += 2;
    if ( (v22 & 0x40) == 0 )
      goto LABEL_92;
  }
LABEL_83:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v41 = *((_QWORD *)this + 13);
  *a2 = 72;
  if ( v41 > 0x7F )
  {
    a2[1] = v41 | 0x80;
    v42 = v41 >> 7;
    if ( v41 >> 14 )
    {
      a2 += 3;
      do
      {
        *(a2 - 1) = v42 | 0x80;
        v43 = v42 >> 7;
        ++a2;
        v44 = v42 >> 14;
        v42 >>= 7;
      }
      while ( v44 );
      *(a2 - 1) = v43;
    }
    else
    {
      a2[2] = v42;
      a2 += 3;
    }
  }
  else
  {
    a2[1] = v41;
    a2 += 2;
  }
LABEL_92:
  v45 = *((_QWORD *)this + 1);
  if ( (v45 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v45 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}