__ZNK3TSP8DataInfo18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::DataInfo::_InternalSerialize(
        TSP::DataInfo *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  __int64 v7; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x10
  unsigned __int8 v13; // w8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x10
  TSP::DataAttributes *v18; // x0
  unsigned int v19; // w9
  unsigned __int8 *v20; // x1
  unsigned int v21; // w8
  unsigned int v22; // w9
  unsigned int v23; // w10
  TSP::EncryptionInfo *v24; // x0
  unsigned int v25; // w9
  unsigned __int8 *v26; // x1
  unsigned int v27; // w8
  unsigned int v28; // w9
  unsigned int v29; // w10
  TSP::IndexSet *v30; // x0
  unsigned int v31; // w9
  unsigned __int8 *v32; // x1
  unsigned int v33; // w8
  unsigned int v34; // w9
  unsigned int v35; // w10
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x9
  unsigned __int64 v39; // x10
  unsigned __int8 v40; // w8
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x8
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x10
  __int64 v45; // d0
  unsigned __int64 v46; // x9
  unsigned __int64 v47; // x8
  unsigned __int64 v48; // x9
  unsigned __int64 v49; // x10
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 0x800) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v9 = *((_QWORD *)this + 14);
    *v4 = 8;
    if ( v9 > 0x7F )
    {
      v4[1] = v9 | 0x80;
      v10 = v9 >> 7;
      if ( v9 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v10 | 0x80;
          v11 = v10 >> 7;
          ++v4;
          v12 = v10 >> 14;
          v10 >>= 7;
        }
        while ( v12 );
        *(v4 - 1) = v11;
        if ( (v6 & 1) != 0 )
          goto LABEL_34;
      }
      else
      {
        v4[2] = v10;
        v4 += 3;
        if ( (v6 & 1) != 0 )
          goto LABEL_34;
      }
    }
    else
    {
      v4[1] = v9;
      v4 += 2;
      if ( (v6 & 1) != 0 )
        goto LABEL_34;
    }
LABEL_3:
    if ( (v6 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_35;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_3;
LABEL_34:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 2, (unsigned int)*((_QWORD *)this + 3) & 0xFFFFFFFE, v4);
  if ( (v6 & 2) == 0 )
  {
LABEL_4:
    if ( (v6 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_36;
  }
LABEL_35:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 3, (unsigned int)*((_QWORD *)this + 4) & 0xFFFFFFFE, v4);
  if ( (v6 & 4) == 0 )
  {
LABEL_5:
    if ( (v6 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_37;
  }
LABEL_36:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 4, (unsigned int)*((_QWORD *)this + 5) & 0xFFFFFFFE, v4);
  if ( (v6 & 8) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_38;
  }
LABEL_37:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 5, (unsigned int)*((_QWORD *)this + 6) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_8;
    goto LABEL_39;
  }
LABEL_38:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 6, (unsigned int)*((_QWORD *)this + 7) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x1000) == 0 )
      goto LABEL_9;
    goto LABEL_40;
  }
LABEL_39:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 7, (unsigned int)*((_QWORD *)this + 8) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x1000) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x40000) == 0 )
      goto LABEL_10;
LABEL_43:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v14 = *((int *)this + 38);
    *v4 = 72;
    if ( (unsigned int)v14 > 0x7F )
    {
      v4[1] = v14 | 0x80;
      v15 = v14 >> 7;
      if ( (unsigned int)v14 >> 14 )
      {
        v4 += 3;
        do
        {
          *(v4 - 1) = v15 | 0x80;
          v16 = v15 >> 7;
          ++v4;
          v17 = v15 >> 14;
          v15 >>= 7;
        }
        while ( v17 );
        *(v4 - 1) = v16;
        if ( (v6 & 0x100) != 0 )
          goto LABEL_54;
      }
      else
      {
        v4[2] = v15;
        v4 += 3;
        if ( (v6 & 0x100) != 0 )
          goto LABEL_54;
      }
    }
    else
    {
      v4[1] = v14;
      v4 += 2;
      if ( (v6 & 0x100) != 0 )
        goto LABEL_54;
    }
LABEL_11:
    if ( (v6 & 0x200) == 0 )
      goto LABEL_12;
    goto LABEL_64;
  }
LABEL_40:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v13 = *((_BYTE *)this + 120);
  *v4 = 64;
  v4[1] = v13;
  v4 += 2;
  if ( (v6 & 0x40000) != 0 )
    goto LABEL_43;
LABEL_10:
  if ( (v6 & 0x100) == 0 )
    goto LABEL_11;
LABEL_54:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v18 = (TSP::DataAttributes *)*((_QWORD *)this + 11);
  *v4 = 82;
  v19 = *((_DWORD *)v18 + 10);
  if ( v19 > 0x7F )
  {
    v4[1] = v19 | 0x80;
    v21 = v19 >> 7;
    if ( v19 >> 14 )
    {
      v20 = v4 + 3;
      do
      {
        *(v20 - 1) = v21 | 0x80;
        v22 = v21 >> 7;
        ++v20;
        v23 = v21 >> 14;
        v21 >>= 7;
      }
      while ( v23 );
      *(v20 - 1) = v22;
    }
    else
    {
      v4[2] = v21;
      v20 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v19;
    v20 = v4 + 2;
  }
  v4 = (unsigned __int8 *)TSP::DataAttributes::_InternalSerialize(v18, v20, a3);
  if ( (v6 & 0x200) == 0 )
  {
LABEL_12:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_13;
    goto LABEL_74;
  }
LABEL_64:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v24 = (TSP::EncryptionInfo *)*((_QWORD *)this + 12);
  *v4 = 90;
  v25 = *((_DWORD *)v24 + 5);
  if ( v25 > 0x7F )
  {
    v4[1] = v25 | 0x80;
    v27 = v25 >> 7;
    if ( v25 >> 14 )
    {
      v26 = v4 + 3;
      do
      {
        *(v26 - 1) = v27 | 0x80;
        v28 = v27 >> 7;
        ++v26;
        v29 = v27 >> 14;
        v27 >>= 7;
      }
      while ( v29 );
      *(v26 - 1) = v28;
    }
    else
    {
      v4[2] = v27;
      v26 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v25;
    v26 = v4 + 2;
  }
  v4 = (unsigned __int8 *)TSP::EncryptionInfo::_InternalSerialize(v24, v26, a3);
  if ( (v6 & 0x40) == 0 )
  {
LABEL_13:
    if ( (v6 & 0x400) == 0 )
      goto LABEL_14;
    goto LABEL_75;
  }
LABEL_74:
  v4 = (unsigned __int8 *)sub_100038F08((int)a3, 12, (unsigned int)*((_QWORD *)this + 9) & 0xFFFFFFFE, v4);
  if ( (v6 & 0x400) == 0 )
  {
LABEL_14:
    if ( (v6 & 0x8000) == 0 )
      goto LABEL_15;
LABEL_85:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v36 = *((_QWORD *)this + 16);
    *v4 = 112;
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
        if ( (v6 & 0x2000) != 0 )
          goto LABEL_96;
      }
      else
      {
        v4[2] = v37;
        v4 += 3;
        if ( (v6 & 0x2000) != 0 )
          goto LABEL_96;
      }
    }
    else
    {
      v4[1] = v36;
      v4 += 2;
      if ( (v6 & 0x2000) != 0 )
        goto LABEL_96;
    }
LABEL_16:
    if ( (v6 & 0x4000) == 0 )
      goto LABEL_17;
LABEL_99:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v41 = *((int *)this + 31);
    *(_WORD *)v4 = 384;
    if ( (unsigned int)v41 > 0x7F )
    {
      v4[2] = v41 | 0x80;
      v42 = v41 >> 7;
      if ( (unsigned int)v41 >> 14 )
      {
        v4 += 4;
        do
        {
          *(v4 - 1) = v42 | 0x80;
          v43 = v42 >> 7;
          ++v4;
          v44 = v42 >> 14;
          v42 >>= 7;
        }
        while ( v44 );
        *(v4 - 1) = v43;
        if ( (v6 & 0x10000) != 0 )
          goto LABEL_110;
      }
      else
      {
        v4[3] = v42;
        v4 += 4;
        if ( (v6 & 0x10000) != 0 )
          goto LABEL_110;
      }
    }
    else
    {
      v4[2] = v41;
      v4 += 3;
      if ( (v6 & 0x10000) != 0 )
        goto LABEL_110;
    }
LABEL_18:
    if ( (v6 & 0x20000) == 0 )
      goto LABEL_19;
    goto LABEL_113;
  }
LABEL_75:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v30 = (TSP::IndexSet *)*((_QWORD *)this + 13);
  *v4 = 106;
  v31 = *((_DWORD *)v30 + 10);
  if ( v31 > 0x7F )
  {
    v4[1] = v31 | 0x80;
    v33 = v31 >> 7;
    if ( v31 >> 14 )
    {
      v32 = v4 + 3;
      do
      {
        *(v32 - 1) = v33 | 0x80;
        v34 = v33 >> 7;
        ++v32;
        v35 = v33 >> 14;
        v33 >>= 7;
      }
      while ( v35 );
      *(v32 - 1) = v34;
    }
    else
    {
      v4[2] = v33;
      v32 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v31;
    v32 = v4 + 2;
  }
  v4 = (unsigned __int8 *)TSP::IndexSet::_InternalSerialize(v30, v32, a3);
  if ( (v6 & 0x8000) != 0 )
    goto LABEL_85;
LABEL_15:
  if ( (v6 & 0x2000) == 0 )
    goto LABEL_16;
LABEL_96:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v40 = *((_BYTE *)this + 121);
  *v4 = 120;
  v4[1] = v40;
  v4 += 2;
  if ( (v6 & 0x4000) != 0 )
    goto LABEL_99;
LABEL_17:
  if ( (v6 & 0x10000) == 0 )
    goto LABEL_18;
LABEL_110:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v45 = *((_QWORD *)this + 17);
  *(_WORD *)v4 = 393;
  *(_QWORD *)(v4 + 2) = v45;
  v4 += 10;
  if ( (v6 & 0x20000) == 0 )
  {
LABEL_19:
    if ( (v6 & 0x80) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_113:
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v46 = *((_QWORD *)this + 18);
  *(_WORD *)v4 = 400;
  if ( v46 <= 0x7F )
  {
    v4[2] = v46;
    v4 += 3;
    if ( (v6 & 0x80) == 0 )
      goto LABEL_21;
LABEL_20:
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 99, (unsigned int)*((_QWORD *)this + 10) & 0xFFFFFFFE, v4);
    goto LABEL_21;
  }
  v4[2] = v46 | 0x80;
  v47 = v46 >> 7;
  if ( v46 >> 14 )
  {
    v4 += 4;
    do
    {
      *(v4 - 1) = v47 | 0x80;
      v48 = v47 >> 7;
      ++v4;
      v49 = v47 >> 14;
      v47 >>= 7;
    }
    while ( v49 );
    *(v4 - 1) = v48;
    if ( (v6 & 0x80) != 0 )
      goto LABEL_20;
  }
  else
  {
    v4[3] = v47;
    v4 += 4;
    if ( (v6 & 0x80) != 0 )
      goto LABEL_20;
  }
LABEL_21:
  v7 = *((_QWORD *)this + 1);
  if ( (v7 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}