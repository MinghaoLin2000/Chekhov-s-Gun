__ZNK3TSP16PasteboardObject18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall TSP::PasteboardObject::_InternalSerialize(
        TSP::PasteboardObject *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  int v6; // w21
  TSP::Reference *v7; // x0
  unsigned int v8; // w9
  unsigned __int8 *v9; // x1
  unsigned int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w10
  int v13; // w22
  int i; // w23
  TSP::Reference *v15; // x0
  unsigned int v16; // w9
  unsigned __int8 *v17; // x1
  unsigned int v18; // w8
  unsigned int v19; // w9
  unsigned int v20; // w10
  int v21; // w22
  int j; // w23
  TSP::Reference *v23; // x0
  unsigned int v24; // w9
  unsigned __int8 *v25; // x1
  unsigned int v26; // w8
  unsigned int v27; // w9
  unsigned int v28; // w10
  TSP::Reference *v29; // x0
  unsigned int v30; // w9
  unsigned __int8 *v31; // x1
  unsigned int v32; // w8
  unsigned int v33; // w9
  unsigned int v34; // w10
  TSP::Reference *v35; // x0
  unsigned int v36; // w9
  unsigned __int8 *v37; // x1
  unsigned int v38; // w8
  unsigned int v39; // w9
  unsigned int v40; // w10
  unsigned __int8 v41; // w8
  unsigned __int8 v42; // w8
  TSP::Reference *v43; // x0
  unsigned int v44; // w9
  unsigned __int8 *v45; // x1
  unsigned int v46; // w8
  unsigned int v47; // w9
  unsigned int v48; // w10
  int v49; // w22
  int k; // w23
  TSP::Reference *v51; // x0
  unsigned int v52; // w9
  unsigned __int8 *v53; // x1
  unsigned int v54; // w8
  unsigned int v55; // w9
  unsigned int v56; // w10
  int v57; // w22
  int m; // w23
  TSP::Reference *v59; // x0
  unsigned int v60; // w9
  unsigned __int8 *v61; // x1
  unsigned int v62; // w8
  unsigned int v63; // w9
  unsigned int v64; // w10
  TSP::Reference *v65; // x0
  unsigned int v66; // w9
  unsigned __int8 *v67; // x1
  unsigned int v68; // w8
  unsigned int v69; // w9
  unsigned int v70; // w10
  int v71; // w21
  int n; // w22
  TSP::Range *v73; // x0
  unsigned int v74; // w9
  unsigned __int8 *v75; // x1
  unsigned int v76; // w8
  unsigned int v77; // w9
  unsigned int v78; // w10
  __int64 v79; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = *((_DWORD *)this + 4);
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v7 = (TSP::Reference *)*((_QWORD *)this + 18);
    *a2 = 10;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 > 0x7F )
    {
      a2[1] = v8 | 0x80;
      v10 = v8 >> 7;
      if ( v8 >> 14 )
      {
        v9 = a2 + 3;
        do
        {
          *(v9 - 1) = v10 | 0x80;
          v11 = v10 >> 7;
          ++v9;
          v12 = v10 >> 14;
          v10 >>= 7;
        }
        while ( v12 );
        *(v9 - 1) = v11;
      }
      else
      {
        a2[2] = v10;
        v9 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v8;
      v9 = a2 + 2;
    }
    a2 = TSP::Reference::_InternalSerialize(v7, v9, a3, a4);
  }
  v13 = *((_DWORD *)this + 8);
  if ( v13 )
  {
    for ( i = 0; i != v13; ++i )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v15 = *(TSP::Reference **)(*((_QWORD *)this + 5) + 8LL * i + 8);
      *a2 = 18;
      v16 = *((_DWORD *)v15 + 5);
      if ( v16 > 0x7F )
      {
        a2[1] = v16 | 0x80;
        v18 = v16 >> 7;
        if ( v16 >> 14 )
        {
          v17 = a2 + 3;
          do
          {
            *(v17 - 1) = v18 | 0x80;
            v19 = v18 >> 7;
            ++v17;
            v20 = v18 >> 14;
            v18 >>= 7;
          }
          while ( v20 );
          *(v17 - 1) = v19;
        }
        else
        {
          a2[2] = v18;
          v17 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v16;
        v17 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v15, v17, a3, a4);
    }
  }
  v21 = *((_DWORD *)this + 14);
  if ( v21 )
  {
    for ( j = 0; j != v21; ++j )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v23 = *(TSP::Reference **)(*((_QWORD *)this + 8) + 8LL * j + 8);
      *a2 = 26;
      v24 = *((_DWORD *)v23 + 5);
      if ( v24 > 0x7F )
      {
        a2[1] = v24 | 0x80;
        v26 = v24 >> 7;
        if ( v24 >> 14 )
        {
          v25 = a2 + 3;
          do
          {
            *(v25 - 1) = v26 | 0x80;
            v27 = v26 >> 7;
            ++v25;
            v28 = v26 >> 14;
            v26 >>= 7;
          }
          while ( v28 );
          *(v25 - 1) = v27;
        }
        else
        {
          a2[2] = v26;
          v25 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v24;
        v25 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v23, v25, a3, a4);
    }
  }
  if ( (v6 & 2) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v29 = (TSP::Reference *)*((_QWORD *)this + 19);
    *a2 = 42;
    v30 = *((_DWORD *)v29 + 5);
    if ( v30 > 0x7F )
    {
      a2[1] = v30 | 0x80;
      v32 = v30 >> 7;
      if ( v30 >> 14 )
      {
        v31 = a2 + 3;
        do
        {
          *(v31 - 1) = v32 | 0x80;
          v33 = v32 >> 7;
          ++v31;
          v34 = v32 >> 14;
          v32 >>= 7;
        }
        while ( v34 );
        *(v31 - 1) = v33;
      }
      else
      {
        a2[2] = v32;
        v31 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v30;
      v31 = a2 + 2;
    }
    a2 = TSP::Reference::_InternalSerialize(v29, v31, a3, a4);
    if ( (v6 & 4) == 0 )
    {
LABEL_38:
      if ( (v6 & 0x20) == 0 )
        goto LABEL_39;
      goto LABEL_62;
    }
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_38;
  }
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v35 = (TSP::Reference *)*((_QWORD *)this + 20);
  *a2 = 50;
  v36 = *((_DWORD *)v35 + 5);
  if ( v36 > 0x7F )
  {
    a2[1] = v36 | 0x80;
    v38 = v36 >> 7;
    if ( v36 >> 14 )
    {
      v37 = a2 + 3;
      do
      {
        *(v37 - 1) = v38 | 0x80;
        v39 = v38 >> 7;
        ++v37;
        v40 = v38 >> 14;
        v38 >>= 7;
      }
      while ( v40 );
      *(v37 - 1) = v39;
    }
    else
    {
      a2[2] = v38;
      v37 = a2 + 3;
    }
  }
  else
  {
    a2[1] = v36;
    v37 = a2 + 2;
  }
  a2 = TSP::Reference::_InternalSerialize(v35, v37, a3, a4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_39:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_40;
    goto LABEL_65;
  }
LABEL_62:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v41 = *((_BYTE *)this + 184);
  *a2 = 56;
  a2[1] = v41;
  a2 += 2;
  if ( (v6 & 0x40) == 0 )
  {
LABEL_40:
    if ( (v6 & 8) == 0 )
      goto LABEL_78;
    goto LABEL_68;
  }
LABEL_65:
  if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
    a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
  v42 = *((_BYTE *)this + 185);
  *a2 = 64;
  a2[1] = v42;
  a2 += 2;
  if ( (v6 & 8) != 0 )
  {
LABEL_68:
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v43 = (TSP::Reference *)*((_QWORD *)this + 21);
    *a2 = 74;
    v44 = *((_DWORD *)v43 + 5);
    if ( v44 > 0x7F )
    {
      a2[1] = v44 | 0x80;
      v46 = v44 >> 7;
      if ( v44 >> 14 )
      {
        v45 = a2 + 3;
        do
        {
          *(v45 - 1) = v46 | 0x80;
          v47 = v46 >> 7;
          ++v45;
          v48 = v46 >> 14;
          v46 >>= 7;
        }
        while ( v48 );
        *(v45 - 1) = v47;
      }
      else
      {
        a2[2] = v46;
        v45 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v44;
      v45 = a2 + 2;
    }
    a2 = TSP::Reference::_InternalSerialize(v43, v45, a3, a4);
  }
LABEL_78:
  v49 = *((_DWORD *)this + 20);
  if ( v49 )
  {
    for ( k = 0; k != v49; ++k )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v51 = *(TSP::Reference **)(*((_QWORD *)this + 11) + 8LL * k + 8);
      *a2 = 82;
      v52 = *((_DWORD *)v51 + 5);
      if ( v52 > 0x7F )
      {
        a2[1] = v52 | 0x80;
        v54 = v52 >> 7;
        if ( v52 >> 14 )
        {
          v53 = a2 + 3;
          do
          {
            *(v53 - 1) = v54 | 0x80;
            v55 = v54 >> 7;
            ++v53;
            v56 = v54 >> 14;
            v54 >>= 7;
          }
          while ( v56 );
          *(v53 - 1) = v55;
        }
        else
        {
          a2[2] = v54;
          v53 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v52;
        v53 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v51, v53, a3, a4);
    }
  }
  v57 = *((_DWORD *)this + 26);
  if ( v57 )
  {
    for ( m = 0; m != v57; ++m )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v59 = *(TSP::Reference **)(*((_QWORD *)this + 14) + 8LL * m + 8);
      *a2 = 90;
      v60 = *((_DWORD *)v59 + 5);
      if ( v60 > 0x7F )
      {
        a2[1] = v60 | 0x80;
        v62 = v60 >> 7;
        if ( v60 >> 14 )
        {
          v61 = a2 + 3;
          do
          {
            *(v61 - 1) = v62 | 0x80;
            v63 = v62 >> 7;
            ++v61;
            v64 = v62 >> 14;
            v62 >>= 7;
          }
          while ( v64 );
          *(v61 - 1) = v63;
        }
        else
        {
          a2[2] = v62;
          v61 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v60;
        v61 = a2 + 2;
      }
      a2 = TSP::Reference::_InternalSerialize(v59, v61, a3, a4);
    }
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
      a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
    v65 = (TSP::Reference *)*((_QWORD *)this + 22);
    *a2 = 98;
    v66 = *((_DWORD *)v65 + 5);
    if ( v66 > 0x7F )
    {
      a2[1] = v66 | 0x80;
      v68 = v66 >> 7;
      if ( v66 >> 14 )
      {
        v67 = a2 + 3;
        do
        {
          *(v67 - 1) = v68 | 0x80;
          v69 = v68 >> 7;
          ++v67;
          v70 = v68 >> 14;
          v68 >>= 7;
        }
        while ( v70 );
        *(v67 - 1) = v69;
      }
      else
      {
        a2[2] = v68;
        v67 = a2 + 3;
      }
    }
    else
    {
      a2[1] = v66;
      v67 = a2 + 2;
    }
    a2 = TSP::Reference::_InternalSerialize(v65, v67, a3, a4);
  }
  v71 = *((_DWORD *)this + 32);
  if ( v71 )
  {
    for ( n = 0; n != v71; ++n )
    {
      if ( *(_QWORD *)a3 <= (unsigned __int64)a2 )
        a2 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a3, a2);
      v73 = *(TSP::Range **)(*((_QWORD *)this + 17) + 8LL * n + 8);
      *a2 = 106;
      v74 = *((_DWORD *)v73 + 5);
      if ( v74 > 0x7F )
      {
        a2[1] = v74 | 0x80;
        v76 = v74 >> 7;
        if ( v74 >> 14 )
        {
          v75 = a2 + 3;
          do
          {
            *(v75 - 1) = v76 | 0x80;
            v77 = v76 >> 7;
            ++v75;
            v78 = v76 >> 14;
            v76 >>= 7;
          }
          while ( v78 );
          *(v75 - 1) = v77;
        }
        else
        {
          a2[2] = v76;
          v75 = a2 + 3;
        }
      }
      else
      {
        a2[1] = v74;
        v75 = a2 + 2;
      }
      a2 = TSP::Range::_InternalSerialize(v73, v75, a3, a4);
    }
  }
  v79 = *((_QWORD *)this + 1);
  if ( (v79 & 1) == 0 )
    return a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8 *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                              (google::protobuf::internal::WireFormat *)((v79 & 0xFFFFFFFFFFFFFFFELL) + 8),
                              (const google::protobuf::UnknownFieldSet *)a2,
                              (unsigned __int8 *)a3,
                              a4);
}