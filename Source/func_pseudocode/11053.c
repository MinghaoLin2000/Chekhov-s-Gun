__ZNK6google8protobuf15DescriptorProto18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::DescriptorProto::_InternalSerialize(
        google::protobuf::DescriptorProto *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  unsigned __int8 *v4; // x3
  int v6; // w21
  int v7; // w22
  int i; // w23
  google::protobuf::FieldDescriptorProto *v9; // x0
  unsigned int v10; // w9
  unsigned __int8 *v11; // x1
  unsigned int v12; // w8
  unsigned int v13; // w9
  unsigned int v14; // w10
  int v15; // w22
  int j; // w23
  google::protobuf::DescriptorProto *v17; // x0
  unsigned int v18; // w9
  unsigned __int8 *v19; // x1
  unsigned int v20; // w8
  unsigned int v21; // w9
  unsigned int v22; // w10
  int v23; // w22
  int k; // w23
  google::protobuf::EnumDescriptorProto *v25; // x0
  unsigned int v26; // w9
  unsigned __int8 *v27; // x1
  unsigned int v28; // w8
  unsigned int v29; // w9
  unsigned int v30; // w10
  int v31; // w22
  int m; // w23
  google::protobuf::DescriptorProto_ExtensionRange *v33; // x0
  unsigned int v34; // w9
  unsigned __int8 *v35; // x1
  unsigned int v36; // w8
  unsigned int v37; // w9
  unsigned int v38; // w10
  int v39; // w22
  int n; // w23
  google::protobuf::FieldDescriptorProto *v41; // x0
  unsigned int v42; // w9
  unsigned __int8 *v43; // x1
  unsigned int v44; // w8
  unsigned int v45; // w9
  unsigned int v46; // w10
  google::protobuf::MessageOptions *v47; // x0
  unsigned int v48; // w9
  unsigned __int8 *v49; // x1
  unsigned int v50; // w8
  unsigned int v51; // w9
  unsigned int v52; // w10
  int v53; // w21
  int ii; // w22
  google::protobuf::OneofDescriptorProto *v55; // x0
  unsigned int v56; // w9
  unsigned __int8 *v57; // x1
  unsigned int v58; // w8
  unsigned int v59; // w9
  unsigned int v60; // w10
  int v61; // w21
  int jj; // w22
  google::protobuf::DescriptorProto_ReservedRange *v63; // x0
  unsigned int v64; // w9
  unsigned __int8 *v65; // x1
  unsigned int v66; // w8
  unsigned int v67; // w9
  unsigned int v68; // w10
  __int64 v69; // x8
  __int64 v70; // x21
  __int64 v71; // x22
  __int64 v72; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a2;
  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
    v4 = (unsigned __int8 *)sub_100038F08((int)a3, 1, (unsigned int)*((_QWORD *)this + 27) & 0xFFFFFFFE, a2);
  v7 = *((_DWORD *)this + 8);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v9 = *(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *v4 = 18;
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 > 0x7F )
      {
        v4[1] = v10 | 0x80;
        v12 = v10 >> 7;
        if ( v10 >> 14 )
        {
          v11 = v4 + 3;
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
          v4[2] = v12;
          v11 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v10;
        v11 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::FieldDescriptorProto::_InternalSerialize(v9, v11, a3);
    }
  }
  v15 = *((_DWORD *)this + 14);
  if ( v15 )
  {
    for ( j = 0; j != v15; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v17 = *(google::protobuf::DescriptorProto **)(*((_QWORD *)this + 8) + 8LL * j + 8);
      *v4 = 26;
      v18 = *((_DWORD *)v17 + 5);
      if ( v18 > 0x7F )
      {
        v4[1] = v18 | 0x80;
        v20 = v18 >> 7;
        if ( v18 >> 14 )
        {
          v19 = v4 + 3;
          do
          {
            *(v19 - 1) = v20 | 0x80;
            v21 = v20 >> 7;
            ++v19;
            v22 = v20 >> 14;
            v20 >>= 7;
          }
          while ( v22 );
          *(v19 - 1) = v21;
        }
        else
        {
          v4[2] = v20;
          v19 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v18;
        v19 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::DescriptorProto::_InternalSerialize(v17, v19, a3);
    }
  }
  v23 = *((_DWORD *)this + 20);
  if ( v23 )
  {
    for ( k = 0; k != v23; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v25 = *(google::protobuf::EnumDescriptorProto **)(*((_QWORD *)this + 11) + 8LL * k + 8);
      *v4 = 34;
      v26 = *((_DWORD *)v25 + 5);
      if ( v26 > 0x7F )
      {
        v4[1] = v26 | 0x80;
        v28 = v26 >> 7;
        if ( v26 >> 14 )
        {
          v27 = v4 + 3;
          do
          {
            *(v27 - 1) = v28 | 0x80;
            v29 = v28 >> 7;
            ++v27;
            v30 = v28 >> 14;
            v28 >>= 7;
          }
          while ( v30 );
          *(v27 - 1) = v29;
        }
        else
        {
          v4[2] = v28;
          v27 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v26;
        v27 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::EnumDescriptorProto::_InternalSerialize(v25, v27, a3);
    }
  }
  v31 = *((_DWORD *)this + 26);
  if ( v31 )
  {
    for ( m = 0; m != v31; ++m )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v33 = *(google::protobuf::DescriptorProto_ExtensionRange **)(*((_QWORD *)this + 14) + 8LL * m + 8);
      *v4 = 42;
      v34 = *((_DWORD *)v33 + 5);
      if ( v34 > 0x7F )
      {
        v4[1] = v34 | 0x80;
        v36 = v34 >> 7;
        if ( v34 >> 14 )
        {
          v35 = v4 + 3;
          do
          {
            *(v35 - 1) = v36 | 0x80;
            v37 = v36 >> 7;
            ++v35;
            v38 = v36 >> 14;
            v36 >>= 7;
          }
          while ( v38 );
          *(v35 - 1) = v37;
        }
        else
        {
          v4[2] = v36;
          v35 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v34;
        v35 = v4 + 2;
      }
      v4 = google::protobuf::DescriptorProto_ExtensionRange::_InternalSerialize(
             v33,
             v35,
             a3,
             (google::protobuf::io::EpsCopyOutputStream *)v4);
    }
  }
  v39 = *((_DWORD *)this + 32);
  if ( v39 )
  {
    for ( n = 0; n != v39; ++n )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v41 = *(google::protobuf::FieldDescriptorProto **)(*((_QWORD *)this + 17) + 8LL * n + 8);
      *v4 = 50;
      v42 = *((_DWORD *)v41 + 5);
      if ( v42 > 0x7F )
      {
        v4[1] = v42 | 0x80;
        v44 = v42 >> 7;
        if ( v42 >> 14 )
        {
          v43 = v4 + 3;
          do
          {
            *(v43 - 1) = v44 | 0x80;
            v45 = v44 >> 7;
            ++v43;
            v46 = v44 >> 14;
            v44 >>= 7;
          }
          while ( v46 );
          *(v43 - 1) = v45;
        }
        else
        {
          v4[2] = v44;
          v43 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v42;
        v43 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::FieldDescriptorProto::_InternalSerialize(v41, v43, a3);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
      v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
    v47 = (google::protobuf::MessageOptions *)*((_QWORD *)this + 28);
    *v4 = 58;
    v48 = *((_DWORD *)v47 + 11);
    if ( v48 > 0x7F )
    {
      v4[1] = v48 | 0x80;
      v50 = v48 >> 7;
      if ( v48 >> 14 )
      {
        v49 = v4 + 3;
        do
        {
          *(v49 - 1) = v50 | 0x80;
          v51 = v50 >> 7;
          ++v49;
          v52 = v50 >> 14;
          v50 >>= 7;
        }
        while ( v52 );
        *(v49 - 1) = v51;
      }
      else
      {
        v4[2] = v50;
        v49 = v4 + 3;
      }
    }
    else
    {
      v4[1] = v48;
      v49 = v4 + 2;
    }
    v4 = (unsigned __int8 *)google::protobuf::MessageOptions::_InternalSerialize(v47, v49, a3);
  }
  v53 = *((_DWORD *)this + 38);
  if ( v53 )
  {
    for ( ii = 0; ii != v53; ++ii )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v55 = *(google::protobuf::OneofDescriptorProto **)(*((_QWORD *)this + 20) + 8LL * ii + 8);
      *v4 = 66;
      v56 = *((_DWORD *)v55 + 5);
      if ( v56 > 0x7F )
      {
        v4[1] = v56 | 0x80;
        v58 = v56 >> 7;
        if ( v56 >> 14 )
        {
          v57 = v4 + 3;
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
          v4[2] = v58;
          v57 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v56;
        v57 = v4 + 2;
      }
      v4 = (unsigned __int8 *)google::protobuf::OneofDescriptorProto::_InternalSerialize(v55, v57, a3);
    }
  }
  v61 = *((_DWORD *)this + 44);
  if ( v61 )
  {
    for ( jj = 0; jj != v61; ++jj )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)v4 )
        v4 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, v4);
      v63 = *(google::protobuf::DescriptorProto_ReservedRange **)(*((_QWORD *)this + 23) + 8LL * jj + 8);
      *v4 = 74;
      v64 = *((_DWORD *)v63 + 5);
      if ( v64 > 0x7F )
      {
        v4[1] = v64 | 0x80;
        v66 = v64 >> 7;
        if ( v64 >> 14 )
        {
          v65 = v4 + 3;
          do
          {
            *(v65 - 1) = v66 | 0x80;
            v67 = v66 >> 7;
            ++v65;
            v68 = v66 >> 14;
            v66 >>= 7;
          }
          while ( v68 );
          *(v65 - 1) = v67;
        }
        else
        {
          v4[2] = v66;
          v65 = v4 + 3;
        }
      }
      else
      {
        v4[1] = v64;
        v65 = v4 + 2;
      }
      v4 = google::protobuf::DescriptorProto_ReservedRange::_InternalSerialize(
             v63,
             v65,
             a3,
             (google::protobuf::io::EpsCopyOutputStream *)v4);
    }
  }
  v69 = *((unsigned int *)this + 50);
  if ( (int)v69 >= 1 )
  {
    v70 = 0LL;
    v71 = 8 * v69;
    do
    {
      v4 = (unsigned __int8 *)sub_1000A2FD0((int)a3, 10, *(_QWORD *)(*((_QWORD *)this + 26) + v70 + 8), v4);
      v70 += 8LL;
    }
    while ( v71 != v70 );
  }
  v72 = *((_QWORD *)this + 1);
  if ( (v72 & 1) == 0 )
    return v4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v72 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)v4,
                              (unsigned __int8 *)a3,
                              (google::protobuf::io::EpsCopyOutputStream *)v4);
}