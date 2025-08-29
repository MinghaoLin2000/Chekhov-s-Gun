__ZNK3TSP15PackageMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::PackageMetadata::_InternalSerialize(
        TSP::PackageMetadata *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w21
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  TSP::DocumentRevision *v9; // x0
  unsigned int v10; // w9
  google::protobuf::UnknownFieldSet *v11; // x1
  unsigned int v12; // w8
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x10
  unsigned int v15; // w9
  unsigned int v16; // w10
  int v17; // w22
  int i; // w23
  TSP::ComponentInfo *v19; // x0
  unsigned int v20; // w9
  unsigned __int8 *v21; // x1
  unsigned int v22; // w8
  unsigned int v23; // w9
  unsigned int v24; // w10
  int v25; // w22
  int j; // w23
  TSP::DataInfo *v27; // x0
  unsigned int v28; // w9
  unsigned __int8 *v29; // x1
  unsigned int v30; // w8
  unsigned int v31; // w9
  unsigned int v32; // w10
  int v33; // w3
  int v34; // w3
  google::protobuf::io::EpsCopyOutputStream *v35; // x3
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x9
  unsigned __int64 v39; // x10
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x9
  unsigned __int64 v43; // x10
  TSP::Reference *v44; // x0
  unsigned int v45; // w9
  unsigned __int8 *v46; // x1
  unsigned int v47; // w8
  unsigned int v48; // w9
  unsigned int v49; // w10
  int v50; // w21
  int k; // w22
  TSP::ComponentInfo *v52; // x0
  unsigned int v53; // w9
  unsigned __int8 *v54; // x1
  unsigned int v55; // w8
  unsigned int v56; // w9
  unsigned int v57; // w10
  __int64 v58; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 4) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = *((_QWORD *)this + 23);
    *v4 = 8;
    if ( v7 <= 0x7F )
    {
      v4[1] = v7;
      v4 += 2;
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
      goto LABEL_10;
    }
    v4[1] = v7 | 0x80;
    v8 = v7 >> 7;
    if ( v7 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v8 | 0x80;
        v13 = v8 >> 7;
        ++v4;
        v14 = v8 >> 14;
        v8 >>= 7;
      }
      while ( v14 );
      *(v4 - 1) = v13;
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
      goto LABEL_10;
    }
    v4[2] = v8;
    v4 += 3;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_24;
LABEL_10:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v9 = (TSP::DocumentRevision *)*((_QWORD *)this + 21);
  *v4 = 18;
  v10 = *((_DWORD *)v9 + 5);
  if ( v10 > 0x7F )
  {
    v4[1] = v10 | 0x80;
    v12 = v10 >> 7;
    if ( v10 >> 14 )
    {
      v11 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
      do
      {
        *((_BYTE *)v11 - 1) = v12 | 0x80;
        v15 = v12 >> 7;
        v11 = (google::protobuf::UnknownFieldSet *)((char *)v11 + 1);
        v16 = v12 >> 14;
        v12 >>= 7;
      }
      while ( v16 );
      *((_BYTE *)v11 - 1) = v15;
    }
    else
    {
      v4[2] = v12;
      v11 = (google::protobuf::UnknownFieldSet *)(v4 + 3);
    }
  }
  else
  {
    v4[1] = v10;
    v11 = (google::protobuf::UnknownFieldSet *)(v4 + 2);
  }
  v4 = (unsigned __int8 *)TSP::DocumentRevision::_InternalSerialize(v9, v11, a3);
LABEL_24:
  v17 = *((_DWORD *)this + 8);
  if ( v17 )
  {
    for ( i = 0; i != v17; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v19 = *(TSP::ComponentInfo **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *v4 = 26;
      v20 = *((_DWORD *)v19 + 5);
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
      v4 = TSP::ComponentInfo::_InternalSerialize(v19, v21, a3);
    }
  }
  v25 = *((_DWORD *)this + 14);
  if ( v25 )
  {
    for ( j = 0; j != v25; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v27 = *(TSP::DataInfo **)(*((_QWORD *)this + 8) + 8LL * j + 8);
      *v4 = 34;
      v28 = *((_DWORD *)v27 + 5);
      if ( v28 > 0x7F )
      {
        v4[1] = v28 | 0x80;
        v30 = v28 >> 7;
        if ( v28 >> 14 )
        {
          v29 = v4 + 3;
          do
          {
            *(v29 - 1) = v30 | 0x80;
            v31 = v30 >> 7;
            ++v29;
            v32 = v30 >> 14;
            v30 >>= 7;
          }
          while ( v32 );
          *(v29 - 1) = v31;
        }
        else
        {
          v4[2] = v30;
          v29 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v28;
        v29 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::DataInfo::_InternalSerialize(v27, v29, a3);
    }
  }
  v33 = *((_DWORD *)this + 22);
  if ( v33 > 0 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 5, (int)this + 72, v33, v4);
  v34 = *((_DWORD *)this + 28);
  if ( v34 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 6, (int)this + 96, v34, v4);
  v35 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 34);
  if ( (int)v35 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 7, (int)this + 120, (int)v35, v4);
  if ( (v6 & 8) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v36 = *((_QWORD *)this + 24);
    *v4 = 64;
    if ( v36 > 0x7F )
    {
      v4[1] = v36 | 0x80;
      v37 = v36 >> 7;
      if ( v36 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v37 | 0x80;
          v38 = v37 >> 7;
          ++v4;
          v39 = v37 >> 14;
          v37 >>= 7;
        }
        while ( v39 );
        *(v4 - 1) = v38;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_69;
      }
      else
      {
        v4[2] = v37;
        v4 += 3;
        if ( (v6 & 0x10) != 0 )
          goto LABEL_69;
      }
    }
    else
    {
      v4[1] = v36;
      v4 += 2;
      if ( (v6 & 0x10) != 0 )
        goto LABEL_69;
    }
LABEL_56:
    if ( (v6 & 2) == 0 )
      goto LABEL_90;
    goto LABEL_80;
  }
  if ( (v6 & 0x10) == 0 )
    goto LABEL_56;
LABEL_69:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v40 = *((int *)this + 50);
  *v4 = 72;
  if ( (unsigned int)v40 > 0x7F )
  {
    v4[1] = v40 | 0x80;
    v41 = v40 >> 7;
    if ( (unsigned int)v40 >> 14 )
    {
      v4 += 3;
      do
      {
        *(v4 - 1) = v41 | 0x80;
        v42 = v41 >> 7;
        ++v4;
        v43 = v41 >> 14;
        v41 >>= 7;
      }
      while ( v43 );
      *(v4 - 1) = v42;
      if ( (v6 & 2) == 0 )
        goto LABEL_90;
    }
    else
    {
      v4[2] = v41;
      v4 += 3;
      if ( (v6 & 2) == 0 )
        goto LABEL_90;
    }
  }
  else
  {
    v4[1] = v40;
    v4 += 2;
    if ( (v6 & 2) == 0 )
      goto LABEL_90;
  }
LABEL_80:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v44 = (TSP::Reference *)*((_QWORD *)this + 22);
  *v4 = 82;
  v45 = *((_DWORD *)v44 + 5);
  if ( v45 > 0x7F )
  {
    v4[1] = v45 | 0x80;
    v47 = v45 >> 7;
    if ( v45 >> 14 )
    {
      v46 = v4 + 3;
      do
      {
        *(v46 - 1) = v47 | 0x80;
        v48 = v47 >> 7;
        ++v46;
        v49 = v47 >> 14;
        v47 >>= 7;
      }
      while ( v49 );
      *(v46 - 1) = v48;
    }
    else
    {
      v4[2] = v47;
      v46 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v45;
    v46 = v4 + 2;
  }
  v4 = (unsigned __int8 *)TSP::Reference::_InternalSerialize(v44, v46, a3);
LABEL_90:
  v50 = *((_DWORD *)this + 38);
  if ( v50 )
  {
    for ( k = 0; k != v50; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v52 = *(TSP::ComponentInfo **)(*((_QWORD *)this + 20) + 8LL * k + 8);
      *v4 = 90;
      v53 = *((_DWORD *)v52 + 5);
      if ( v53 > 0x7F )
      {
        v4[1] = v53 | 0x80;
        v55 = v53 >> 7;
        if ( v53 >> 14 )
        {
          v54 = v4 + 3;
          do
          {
            *(v54 - 1) = v55 | 0x80;
            v56 = v55 >> 7;
            ++v54;
            v57 = v55 >> 14;
            v55 >>= 7;
          }
          while ( v57 );
          *(v54 - 1) = v56;
        }
        else
        {
          v4[2] = v55;
          v54 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v53;
        v54 = v4 + 2;
      }
      v4 = TSP::ComponentInfo::_InternalSerialize(v52, v54, a3);
    }
  }
  v58 = *((_QWORD *)this + 1);
  if ( (v58 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v58 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v35);
}