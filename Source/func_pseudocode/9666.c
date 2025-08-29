__ZNK3TSP13ComponentInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::ComponentInfo::_InternalSerialize(
        TSP::ComponentInfo *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  int v6; // w21
  int v7; // w3
  int v8; // w3
  int v9; // w22
  int i; // w23
  TSP::ComponentExternalReference *v11; // x0
  unsigned int v12; // w9
  unsigned __int8 *v13; // x1
  unsigned int v14; // w8
  unsigned int v15; // w9
  unsigned int v16; // w10
  int v17; // w22
  int j; // w23
  TSP::ComponentDataReference *v19; // x0
  unsigned int v20; // w9
  unsigned __int8 *v21; // x1
  unsigned int v22; // w8
  unsigned int v23; // w9
  unsigned int v24; // w10
  unsigned __int8 v25; // w8
  int v26; // w22
  int k; // w23
  TSP::ObjectUUIDMapEntry *v28; // x0
  unsigned int v29; // w9
  unsigned __int8 *v30; // x1
  unsigned int v31; // w8
  unsigned int v32; // w9
  unsigned int v33; // w10
  unsigned __int64 v34; // x9
  unsigned __int64 v35; // x9
  unsigned __int64 v36; // x8
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x9
  unsigned __int64 v39; // x10
  int v40; // w22
  int m; // w23
  TSP::FeatureInfo *v42; // x0
  unsigned int v43; // w9
  unsigned __int8 *v44; // x1
  unsigned int v45; // w8
  unsigned int v46; // w9
  unsigned int v47; // w10
  int v48; // w3
  int v49; // w3
  unsigned int v50; // w9
  unsigned int v51; // w8
  unsigned __int8 v52; // w8
  int v53; // w22
  int n; // w23
  TSP::ComponentExternalReference *v55; // x0
  unsigned int v56; // w9
  unsigned __int8 *v57; // x1
  unsigned int v58; // w8
  unsigned int v59; // w9
  unsigned int v60; // w10
  unsigned __int8 v61; // w8
  google::protobuf::io::EpsCopyOutputStream *v62; // x3
  unsigned int v63; // w9
  unsigned int v64; // w8
  unsigned __int64 v65; // x9
  unsigned __int64 v66; // x10
  unsigned int v67; // w9
  unsigned int v68; // w10
  unsigned int v69; // w9
  unsigned int v70; // w10
  __int64 v71; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 4) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v35 = *((_QWORD *)this + 35);
    *v4 = 8;
    if ( v35 > 0x7F )
    {
      v4[1] = v35 | 0x80;
      v37 = v35 >> 7;
      if ( v35 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v37 | 0x80;
          v65 = v37 >> 7;
          ++v4;
          v66 = v37 >> 14;
          v37 >>= 7;
        }
        while ( v66 );
        *(v4 - 1) = v65;
        if ( (v6 & 1) != 0 )
          goto LABEL_123;
      }
      else
      {
        v4[2] = v37;
        v4 += 3;
        if ( (v6 & 1) != 0 )
          goto LABEL_123;
      }
    }
    else
    {
      v4[1] = v35;
      v4 += 2;
      if ( (v6 & 1) != 0 )
        goto LABEL_123;
    }
LABEL_3:
    if ( (v6 & 2) == 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_3;
LABEL_123:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 33) & 0xFFFFFFFE, v4);
  if ( (v6 & 2) != 0 )
LABEL_4:
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 34) & 0xFFFFFFFE, v4);
LABEL_5:
  v7 = *((_DWORD *)this + 10);
  if ( v7 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 4, (int)this + 24, v7, v4);
  v8 = *((_DWORD *)this + 16);
  if ( v8 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 5, (int)this + 48, v8, v4);
  v9 = *((_DWORD *)this + 20);
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v11 = *(TSP::ComponentExternalReference **)(*((_QWORD *)this + 11) + 8LL * i + 8);
      *v4 = 50;
      v12 = *((_DWORD *)v11 + 5);
      if ( v12 > 0x7F )
      {
        v4[1] = v12 | 0x80;
        v14 = v12 >> 7;
        if ( v12 >> 14 )
        {
          v13 = v4 + 3;
          do
          {
            *(v13 - 1) = v14 | 0x80;
            v15 = v14 >> 7;
            ++v13;
            v16 = v14 >> 14;
            v14 >>= 7;
          }
          while ( v16 );
          *(v13 - 1) = v15;
        }
        else
        {
          v4[2] = v14;
          v13 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v12;
        v13 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::ComponentExternalReference::_InternalSerialize(v11, v13, a3);
    }
  }
  v17 = *((_DWORD *)this + 26);
  if ( v17 )
  {
    for ( j = 0; j != v17; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v19 = *(TSP::ComponentDataReference **)(*((_QWORD *)this + 14) + 8LL * j + 8);
      *v4 = 58;
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
      v4 = (unsigned __int8 *)TSP::ComponentDataReference::_InternalSerialize(v19, v21, a3);
    }
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v25 = *((_BYTE *)this + 296);
    *v4 = 80;
    v4[1] = v25;
    v4 += 2;
  }
  v26 = *((_DWORD *)this + 32);
  if ( v26 )
  {
    for ( k = 0; k != v26; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v28 = *(TSP::ObjectUUIDMapEntry **)(*((_QWORD *)this + 17) + 8LL * k + 8);
      *v4 = 90;
      v29 = *((_DWORD *)v28 + 5);
      if ( v29 > 0x7F )
      {
        v4[1] = v29 | 0x80;
        v31 = v29 >> 7;
        if ( v29 >> 14 )
        {
          v30 = v4 + 3;
          do
          {
            *(v30 - 1) = v31 | 0x80;
            v32 = v31 >> 7;
            ++v30;
            v33 = v31 >> 14;
            v31 >>= 7;
          }
          while ( v33 );
          *(v30 - 1) = v32;
        }
        else
        {
          v4[2] = v31;
          v30 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v29;
        v30 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::ObjectUUIDMapEntry::_InternalSerialize(v28, v30, a3);
    }
  }
  if ( (v6 & 8) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v34 = *((_QWORD *)this + 36);
    *v4 = 96;
    if ( v34 > 0x7F )
    {
      v4[1] = v34 | 0x80;
      v36 = v34 >> 7;
      if ( v34 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v36 | 0x80;
          v38 = v36 >> 7;
          ++v4;
          v39 = v36 >> 14;
          v36 >>= 7;
        }
        while ( v39 );
        *(v4 - 1) = v38;
      }
      else
      {
        v4[2] = v36;
        v4 += 3;
      }
    }
    else
    {
      v4[1] = v34;
      v4 += 2;
    }
  }
  v40 = *((_DWORD *)this + 38);
  if ( v40 )
  {
    for ( m = 0; m != v40; ++m )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v42 = *(TSP::FeatureInfo **)(*((_QWORD *)this + 20) + 8LL * m + 8);
      *v4 = 106;
      v43 = *((_DWORD *)v42 + 5);
      if ( v43 > 0x7F )
      {
        v4[1] = v43 | 0x80;
        v45 = v43 >> 7;
        if ( v43 >> 14 )
        {
          v44 = v4 + 3;
          do
          {
            *(v44 - 1) = v45 | 0x80;
            v46 = v45 >> 7;
            ++v44;
            v47 = v45 >> 14;
            v45 >>= 7;
          }
          while ( v47 );
          *(v44 - 1) = v46;
        }
        else
        {
          v4[2] = v45;
          v44 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v43;
        v44 = v4 + 2;
      }
      v4 = (unsigned __int8 *)TSP::FeatureInfo::_InternalSerialize(v42, v44, a3);
    }
  }
  v48 = *((_DWORD *)this + 46);
  if ( v48 > 0 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 14, (int)this + 168, v48, v4);
  v49 = *((_DWORD *)this + 52);
  if ( v49 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 15, (int)this + 192, v49, v4);
  if ( (v6 & 0x80) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v50 = *((_DWORD *)this + 75);
    *(_WORD *)v4 = 384;
    if ( v50 <= 0x7F )
    {
      v4[2] = v50;
      v4 += 3;
      if ( (v6 & 0x20) == 0 )
        goto LABEL_95;
      goto LABEL_92;
    }
    v4[2] = v50 | 0x80;
    v51 = v50 >> 7;
    if ( v50 >> 14 )
    {
      v4 += 4;
      do
      {
        *(v4 - 1) = v51 | 0x80;
        v67 = v51 >> 7;
        ++v4;
        v68 = v51 >> 14;
        v51 >>= 7;
      }
      while ( v68 );
      *(v4 - 1) = v67;
      if ( (v6 & 0x20) == 0 )
        goto LABEL_95;
      goto LABEL_92;
    }
    v4[3] = v51;
    v4 += 4;
  }
  if ( (v6 & 0x20) == 0 )
    goto LABEL_95;
LABEL_92:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v52 = *((_BYTE *)this + 297);
  *(_WORD *)v4 = 392;
  v4[2] = v52;
  v4 += 3;
LABEL_95:
  v53 = *((_DWORD *)this + 56);
  if ( v53 )
  {
    for ( n = 0; n != v53; ++n )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v55 = *(TSP::ComponentExternalReference **)(*((_QWORD *)this + 29) + 8LL * n + 8);
      *(_WORD *)v4 = 402;
      v56 = *((_DWORD *)v55 + 5);
      if ( v56 > 0x7F )
      {
        v4[2] = v56 | 0x80;
        v58 = v56 >> 7;
        if ( v56 >> 14 )
        {
          v57 = v4 + 4;
          do
          {
            *(v57 - 1) = v58 | 0x80;
            v59 = v58 >> 7;
            ++v57;
            v60 = v58 >> 14;
            v58 >>= 7;
          }
          while ( v60 );
          *(v57 - 1) = v59;
        }
        else
        {
          v4[3] = v58;
          v57 = v4 + 4;
        }
      }
      else
      {
        v4[2] = v56;
        v57 = v4 + 3;
      }
      v4 = (unsigned __int8 *)TSP::ComponentExternalReference::_InternalSerialize(v55, v57, a3);
    }
  }
  if ( (v6 & 0x40) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v61 = *((_BYTE *)this + 298);
    *(_WORD *)v4 = 408;
    v4[2] = v61;
    v4 += 3;
  }
  v62 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 64);
  if ( (int)v62 >= 1 )
    v4 = (unsigned __int8 *)sub_1000546FC(a3, 20, (int)this + 240, (int)v62, v4);
  if ( (v6 & 0x100) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v63 = *((_DWORD *)this + 76);
    *(_WORD *)v4 = 424;
    if ( v63 > 0x7F )
    {
      v4[2] = v63 | 0x80;
      v64 = v63 >> 7;
      if ( v63 >> 14 )
      {
        v4 += 4;
        do
        {
          *(v4 - 1) = v64 | 0x80;
          v69 = v64 >> 7;
          ++v4;
          v70 = v64 >> 14;
          v64 >>= 7;
        }
        while ( v70 );
        *(v4 - 1) = v69;
      }
      else
      {
        v4[3] = v64;
        v4 += 4;
      }
    }
    else
    {
      v4[2] = v63;
      v4 += 3;
    }
  }
  v71 = *((_QWORD *)this + 1);
  if ( (v71 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v71 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v62);
}