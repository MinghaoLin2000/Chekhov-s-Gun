__ZNK3TSP27ObjectSerializationMetadata18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::ObjectSerializationMetadata::_InternalSerialize(
        TSP::ObjectSerializationMetadata *this,
        google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x4
  google::protobuf::io::EpsCopyOutputStream *v6; // x3
  int v7; // w21
  TSP::UUID *v8; // x0
  unsigned int v9; // w9
  unsigned __int8 *v10; // x1
  unsigned int v11; // w8
  unsigned int v12; // w9
  unsigned int v13; // w10
  TSP::UUID *v14; // x0
  unsigned int v15; // w9
  unsigned __int8 *v16; // x1
  unsigned int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  TSP::ComponentInfo *v20; // x0
  unsigned int v21; // w9
  unsigned __int8 *v22; // x1
  unsigned int v23; // w8
  unsigned int v24; // w9
  unsigned int v25; // w10
  int v26; // w22
  int i; // w23
  TSP::DataInfo *v28; // x0
  unsigned int v29; // w9
  unsigned __int8 *v30; // x1
  unsigned int v31; // w8
  unsigned int v32; // w9
  unsigned int v33; // w10
  int v34; // w22
  int j; // w23
  TSP::ObjectUUIDMapEntry *v36; // x0
  unsigned int v37; // w9
  unsigned __int8 *v38; // x1
  unsigned int v39; // w8
  unsigned int v40; // w9
  unsigned int v41; // w10
  TSP::Reference *v42; // x0
  unsigned int v43; // w9
  unsigned __int8 *v44; // x1
  unsigned int v45; // w8
  unsigned int v46; // w9
  unsigned int v47; // w10
  google::protobuf::io::EpsCopyOutputStream *v48; // x3
  __int64 v49; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = (unsigned __int8 *)a2;
  v6 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 10);
  if ( (int)v6 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 1, (int)this + 24, (int)v6, (unsigned __int8 *)a2);
  v7 = *((_DWORD *)this + 4);
  if ( (v7 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v8 = (TSP::UUID *)*((_QWORD *)this + 15);
    *v4 = 18;
    v9 = *((_DWORD *)v8 + 5);
    if ( v9 > 0x7F )
    {
      v4[1] = v9 | 0x80;
      v11 = v9 >> 7;
      if ( v9 >> 14 )
      {
        v10 = v4 + 3;
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
        v4[2] = v11;
        v10 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v9;
      v10 = v4 + 2;
    }
    v4 = (unsigned __int8 *)TSP::UUID::_InternalSerialize(v8, v10, a3);
    if ( (v7 & 2) == 0 )
    {
LABEL_5:
      if ( (v7 & 4) == 0 )
        goto LABEL_37;
      goto LABEL_27;
    }
  }
  else if ( (v7 & 2) == 0 )
  {
    goto LABEL_5;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
    v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
  v14 = (TSP::UUID *)*((_QWORD *)this + 16);
  *v4 = 26;
  v15 = *((_DWORD *)v14 + 5);
  if ( v15 > 0x7F )
  {
    v4[1] = v15 | 0x80;
    v17 = v15 >> 7;
    if ( v15 >> 14 )
    {
      v16 = v4 + 3;
      do
      {
        *(v16 - 1) = v17 | 0x80;
        v18 = v17 >> 7;
        ++v16;
        v19 = v17 >> 14;
        v17 >>= 7;
      }
      while ( v19 );
      *(v16 - 1) = v18;
    }
    else
    {
      v4[2] = v17;
      v16 = v4 + 3;
    }
  }
  else
  {
    v4[1] = v15;
    v16 = v4 + 2;
  }
  v4 = (unsigned __int8 *)TSP::UUID::_InternalSerialize(v14, v16, a3);
  if ( (v7 & 4) != 0 )
  {
LABEL_27:
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v20 = (TSP::ComponentInfo *)*((_QWORD *)this + 17);
    *v4 = 34;
    v21 = *((_DWORD *)v20 + 5);
    if ( v21 > 0x7F )
    {
      v4[1] = v21 | 0x80;
      v23 = v21 >> 7;
      if ( v21 >> 14 )
      {
        v22 = v4 + 3;
        do
        {
          *(v22 - 1) = v23 | 0x80;
          v24 = v23 >> 7;
          ++v22;
          v25 = v23 >> 14;
          v23 >>= 7;
        }
        while ( v25 );
        *(v22 - 1) = v24;
      }
      else
      {
        v4[2] = v23;
        v22 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v21;
      v22 = v4 + 2;
    }
    v4 = TSP::ComponentInfo::_InternalSerialize(v20, v22, a3);
  }
LABEL_37:
  v26 = *((_DWORD *)this + 14);
  if ( v26 )
  {
    for ( i = 0; i != v26; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v28 = *(TSP::DataInfo **)(*((_QWORD *)this + 8) + 8LL * i + 8);
      *v4 = 42;
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
      v4 = TSP::DataInfo::_InternalSerialize(v28, v30, a3);
    }
  }
  v34 = *((_DWORD *)this + 20);
  if ( v34 )
  {
    for ( j = 0; j != v34; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v36 = *(TSP::ObjectUUIDMapEntry **)(*((_QWORD *)this + 11) + 8LL * j + 8);
      *v4 = 50;
      v37 = *((_DWORD *)v36 + 5);
      if ( v37 > 0x7F )
      {
        v4[1] = v37 | 0x80;
        v39 = v37 >> 7;
        if ( v37 >> 14 )
        {
          v38 = v4 + 3;
          do
          {
            *(v38 - 1) = v39 | 0x80;
            v40 = v39 >> 7;
            ++v38;
            v41 = v39 >> 14;
            v39 >>= 7;
          }
          while ( v41 );
          *(v38 - 1) = v40;
        }
        else
        {
          v4[2] = v39;
          v38 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v37;
        v38 = v4 + 2;
      }
      v4 = TSP::ObjectUUIDMapEntry::_InternalSerialize(v36, v38, a3, v6);
    }
  }
  if ( (v7 & 8) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v42 = (TSP::Reference *)*((_QWORD *)this + 18);
    *v4 = 58;
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
    v4 = (unsigned __int8 *)TSP::Reference::_InternalSerialize(v42, v44, a3);
  }
  v48 = (google::protobuf::io::EpsCopyOutputStream *)*((unsigned int *)this + 28);
  if ( (int)v48 >= 1 )
    v4 = (unsigned __int8 *)sub_100054554(a3, 8, (int)this + 96, (int)v48, v4);
  v49 = *((_QWORD *)this + 1);
  if ( (v49 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v49 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              v48);
}