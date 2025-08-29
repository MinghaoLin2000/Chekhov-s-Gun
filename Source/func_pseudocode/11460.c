__ZN6google8protobuf21DynamicMessageFactory18GetPrototypeNoLockEPKNS0_10DescriptorE
_QWORD *__fastcall google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2)
{
  google::protobuf::MessageFactory *v3; // x19
  google::protobuf::MessageFactory *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x8
  _QWORD *v8; // x21
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x25
  __int64 *v12; // x19
  const google::protobuf::Descriptor *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x9
  int v16; // w26
  __int64 v17; // x10
  int v18; // w11
  __int64 (*v19)(void); // x2
  int v21; // w8
  bool v22; // vf
  int v23; // w8
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x0
  const google::protobuf::Descriptor *v28; // x9
  __int64 v29; // x8
  int v30; // w19
  __int64 v31; // x23
  int v32; // w20
  __int64 v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x11
  int v38; // w12
  int v39; // w11
  int v41; // w10
  int v42; // w10
  int v43; // w11
  int v44; // w10
  int v45; // w8
  int v46; // w10
  int v47; // w8
  int v48; // w12
  char v49; // cc
  int v50; // w8
  int v51; // w27
  __int64 v52; // x28
  __int64 v53; // x22
  __int64 v54; // x19
  __int64 v55; // x24
  __int64 v56; // x8
  std::once_flag::_State_type *v57; // x0
  int v58; // w8
  int v59; // w8
  unsigned int v60; // w8
  int v61; // w9
  int v62; // w9
  google::protobuf::internal::LogMessage *v63; // x0
  int v64; // w11
  __int64 v65; // x8
  __int64 v66; // x10
  int v67; // w12
  int v68; // w11
  __int64 i; // x24
  __int64 v70; // x8
  int v71; // w10
  __int64 v72; // x25
  __int64 v73; // x8
  __int64 v74; // x26
  std::once_flag::_State_type *v75; // x0
  int v76; // w8
  int v77; // w8
  google::protobuf::internal::LogMessage *v78; // x0
  __int64 v79; // x9
  _QWORD *v80; // x9
  int v81; // w10
  int v82; // w9
  size_t v83; // x22
  void *v84; // x3
  int v85; // w10
  int v86; // w8
  __int64 v87; // x22
  __int64 v88; // x0
  int v89; // [xsp+Ch] [xbp-B4h]
  google::protobuf::DynamicMessageFactory *v90; // [xsp+10h] [xbp-B0h]
  __int64 v91; // [xsp+18h] [xbp-A8h]
  const google::protobuf::Descriptor *v92; // [xsp+20h] [xbp-A0h] BYREF
  void (__fastcall **v93)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+28h] [xbp-98h] BYREF
  __int128 v94; // [xsp+30h] [xbp-90h]
  int v95; // [xsp+40h] [xbp-80h]
  int v96; // [xsp+44h] [xbp-7Ch]
  int32x2_t v97; // [xsp+48h] [xbp-78h]
  int v98; // [xsp+50h] [xbp-70h]
  int v99; // [xsp+54h] [xbp-6Ch]
  __int64 v100; // [xsp+58h] [xbp-68h] BYREF
  void (__fastcall *v101)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+60h] [xbp-60h] BYREF
  void (__fastcall ***v102)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+68h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v92 = a2;
  if ( !*((_BYTE *)this + 16)
    || (v3 = *(google::protobuf::MessageFactory **)(*((_QWORD *)a2 + 2) + 16LL),
        v4 = (google::protobuf::MessageFactory *)google::protobuf::DescriptorPool::generated_pool(this),
        v3 != v4) )
  {
    v5 = *((_QWORD *)this + 3);
    v93 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v92;
    v6 = sub_1000C0A7C(v5, &v92, &unk_10018B5AD, &v93, &v102);
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
      return *(_QWORD **)(v7 + 64);
    v9 = v6;
    v10 = operator new(80LL, 0x1070C40B706855ELL);
    v11 = v10;
    *(_OWORD *)(v10 + 40) = 0u;
    v12 = (__int64 *)(v10 + 40);
    *(_OWORD *)(v10 + 56) = 0u;
    *(_QWORD *)(v9 + 24) = v10;
    v13 = v92;
    *(_QWORD *)(v10 + 32) = v92;
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
      v14 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    *(_QWORD *)(v10 + 16) = this;
    *(_QWORD *)(v10 + 24) = v14;
    v15 = *((unsigned int *)v13 + 27);
    if ( (int)v15 < 1 )
    {
      v16 = 0;
    }
    else
    {
      v16 = 0;
      v17 = *((_QWORD *)v13 + 6) + 32LL;
      do
      {
        v18 = *(_DWORD *)(v17 - 8) != 1 || *(_BYTE *)(**(_QWORD **)v17 + 65LL) == 0;
        v17 += 48LL;
        v16 += v18;
        --v15;
      }
      while ( v15 );
    }
    v90 = this;
    v21 = *((_DWORD *)v13 + 26);
    v22 = __OFADD__(v21, v16);
    v23 = v21 + v16;
    v49 = (v23 < 0) ^ v22;
    v24 = 4LL * v23;
    if ( v49 )
      v25 = -1LL;
    else
      v25 = v24;
    v26 = operator new[](v25, 0x1000C8052888210LL);
    v27 = *v12;
    *v12 = v26;
    if ( v27 )
      operator delete[](v27, 0x1000C8052888210LL);
    *(_DWORD *)(v11 + 4) = -1;
    v28 = v92;
    LODWORD(v29) = *((_DWORD *)v92 + 26);
    v30 = 32;
    if ( (int)v29 >= 1 )
    {
      v31 = 0LL;
      v32 = 0;
      while ( 1 )
      {
        v33 = *((_QWORD *)v28 + 5);
        if ( *(_BYTE *)(v33 + 152 * v31 + 65) )
          break;
        v37 = v33 + 152 * v31;
        v38 = *(_DWORD *)(*(_QWORD *)(v37 + 40) + 60LL);
        v39 = *(_DWORD *)(v37 + 60);
        if ( v38 == 2 && v39 == 1 )
        {
          if ( !*(_QWORD *)(v33 + 152 * v31 + 88) )
            break;
        }
        else if ( v39 == 2 )
        {
          break;
        }
LABEL_41:
        ++v31;
        v29 = *((int *)v28 + 26);
        if ( v31 >= v29 )
        {
          v41 = v32 + 31;
          if ( v32 + 31 < 0 )
            v41 = v32 + 62;
          v42 = 4 * (v41 >> 5) + 39;
          v43 = v42 & 7;
          if ( v42 <= 0 )
            v43 = -(-v42 & 7);
          v44 = v42 - v43;
          if ( v32 <= 0 )
            v30 = 32;
          else
            v30 = v44;
          goto LABEL_49;
        }
      }
      if ( !*(_BYTE *)(*(_QWORD *)(v33 + 152 * v31 + 120) + 79LL) )
      {
        if ( *(_DWORD *)(v11 + 4) == -1 )
        {
          *(_DWORD *)(v11 + 4) = 32;
          v34 = operator new[](4LL * (int)v29, 0x1000C8052888210LL);
          v28 = v92;
          if ( *((int *)v92 + 26) >= 1 )
          {
            v35 = 0LL;
            do
              *(_DWORD *)(v34 + 4 * v35++) = -1;
            while ( v35 < *((int *)v28 + 26) );
          }
          v36 = *(_QWORD *)(v11 + 48);
          *(_QWORD *)(v11 + 48) = v34;
          if ( v36 )
          {
            operator delete[](v36, 0x1000C8052888210LL);
            v28 = v92;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4 * v31) = v32++;
      }
      goto LABEL_41;
    }
LABEL_49:
    v89 = v16;
    if ( v16 >= 1 )
    {
      *(_DWORD *)(v11 + 8) = v30;
      v45 = v30 + 4 * v16 + 7;
      v46 = v45 & 7;
      if ( v45 <= 0 )
        v46 = -(-v45 & 7);
      v30 = v45 - v46;
    }
    v47 = *((_DWORD *)v28 + 31);
    if ( v30 + 31 <= 0 )
      v48 = -(-(v30 + 31) & 7);
    else
      v48 = (v30 + 31) & 7;
    v49 = v47 < 1;
    if ( v47 >= 1 )
      v50 = v30;
    else
      v50 = -1;
    if ( v49 )
      v51 = v30;
    else
      v51 = v30 + 31 - v48;
    v91 = v11;
    *(_DWORD *)(v11 + 12) = v50;
    if ( *((int *)v28 + 26) >= 1 )
    {
      v52 = 0LL;
      v53 = 0LL;
      while ( 1 )
      {
        v54 = *((_QWORD *)v28 + 5);
        v55 = v54 + v52;
        v56 = *(_QWORD *)(v54 + v52 + 88);
        if ( v56 && (*(_DWORD *)(v56 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v56 + 32) + 65LL)) )
          goto LABEL_83;
        v57 = *(std::once_flag::_State_type **)(v55 + 48);
        if ( *(_DWORD *)(v55 + 60) == 3 )
          break;
        if ( v57 )
        {
          v100 = v54 + v52;
          v101 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v57, memory_order_acquire) != -1LL )
          {
            v93 = &v101;
            *(_QWORD *)&v94 = &v100;
            v102 = &v93;
            std::__call_once(v57, &v102, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v60 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v54 + v52 + 56)];
        if ( v60 > 0xA )
        {
LABEL_92:
          google::protobuf::internal::LogMessage::LogMessage(
            &v93,
            2LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/dynamic_message.cc",
            196LL);
          v63 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                            &v93,
                                                            "Can't get here.");
          google::protobuf::internal::LogFinisher::operator=((int)&v102, v63);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v93);
          v59 = 0;
          v61 = 0;
          goto LABEL_82;
        }
        if ( ((1 << v60) & 0x634) != 0 )
        {
          v59 = 8;
LABEL_81:
          v61 = 8;
          goto LABEL_82;
        }
        if ( ((1 << v60) & 0x14A) != 0 )
        {
          v59 = 4;
          v61 = 4;
        }
        else
        {
          if ( v60 != 7 )
            goto LABEL_92;
          v59 = 1;
          v61 = 1;
        }
LABEL_82:
        v62 = (v51 + v61 - 1) / v61 * v61;
        *(_DWORD *)(v26 + 4 * v53) = v62;
        v51 = v62 + v59;
        v28 = v92;
LABEL_83:
        ++v53;
        v52 += 152LL;
        if ( v53 >= *((int *)v28 + 26) )
          goto LABEL_94;
      }
      if ( v57 )
      {
        v100 = v54 + v52;
        v101 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v57, memory_order_acquire) != -1LL )
        {
          v93 = &v101;
          *(_QWORD *)&v94 = &v100;
          v102 = &v93;
          std::__call_once(v57, &v102, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      v58 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v54 + v52 + 56)];
      if ( (unsigned int)(v58 - 1) >= 8 )
      {
        if ( v58 == 9 )
        {
          v59 = 24;
        }
        else
        {
          if ( v58 != 10 )
            goto LABEL_92;
          if ( (unsigned int)sub_1000BF2A4((google::protobuf::FieldDescriptor *)(v54 + v52)) )
            v59 = 152;
          else
            v59 = 24;
        }
      }
      else
      {
        v59 = 16;
      }
      goto LABEL_81;
    }
LABEL_94:
    v64 = *((_DWORD *)v28 + 27);
    if ( v64 <= 0 )
    {
      *(_DWORD *)(v11 + 72) = -1;
      *(_DWORD *)v11 = v51;
    }
    else
    {
      v65 = 0LL;
      v66 = *((_QWORD *)v28 + 6) + 32LL;
      do
      {
        if ( *(_DWORD *)(v66 - 8) != 1 || !*(_BYTE *)(**(_QWORD **)v66 + 65LL) )
        {
          if ( v51 + 7 <= 0 )
            v67 = -(-(v51 + 7) & 7);
          else
            v67 = (v51 + 7) & 7;
          v68 = v51 + 7 - v67;
          *(_DWORD *)(v26 + 4 * (v65 + *((int *)v28 + 26))) = v68;
          v51 = v68 + 8;
          v64 = *((_DWORD *)v28 + 27);
        }
        v66 += 48LL;
        ++v65;
      }
      while ( v65 < v64 );
      *(_DWORD *)(v11 + 72) = -1;
      *(_DWORD *)v11 = v51;
      if ( v64 >= 1 )
      {
        for ( i = 0LL; i < *((int *)v28 + 27); ++i )
        {
          v70 = *((_QWORD *)v28 + 6);
          v71 = *(_DWORD *)(v70 + 48 * i + 24);
          if ( v71 == 1 )
          {
            if ( !*(_BYTE *)(**(_QWORD **)(v70 + 48 * i + 32) + 65LL) )
              goto LABEL_109;
          }
          else if ( v71 >= 1 )
          {
LABEL_109:
            v72 = 0LL;
            do
            {
              v73 = *(_QWORD *)(v70 + 48 * i + 32);
              v74 = *(_QWORD *)(v73 + 8 * v72);
              v75 = *(std::once_flag::_State_type **)(v74 + 48);
              if ( v75 )
              {
                v100 = *(_QWORD *)(v73 + 8 * v72);
                v101 = google::protobuf::FieldDescriptor::TypeOnceInit;
                if ( atomic_load_explicit((atomic_ullong *volatile)v75, memory_order_acquire) != -1LL )
                {
                  v93 = &v101;
                  *(_QWORD *)&v94 = &v100;
                  v102 = &v93;
                  std::__call_once(v75, &v102, (void (__cdecl *)(void *))sub_10007A460);
                }
              }
              v76 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v74 + 56)] - 1;
              if ( (unsigned int)v76 >= 0xA )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  &v93,
                  2LL,
                  "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/persistence/google/protobuf/dynamic_message.cc",
                  234LL);
                v78 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                                  &v93,
                                                                  "Can't get here.");
                google::protobuf::internal::LogFinisher::operator=((int)&v102, v78);
                google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v93);
                v77 = 0;
              }
              else
              {
                v77 = dword_10018B5B0[v76];
              }
              if ( *(_BYTE *)(v74 + 67) )
              {
                v79 = *(_QWORD *)(v74 + 96);
                if ( v79 )
                  v80 = (_QWORD *)(v79 + 80);
                else
                  v80 = (_QWORD *)(*(_QWORD *)(v74 + 40) + 128LL);
              }
              else
              {
                v80 = (_QWORD *)(*(_QWORD *)(v74 + 80) + 40LL);
              }
              v81 = (v51 + v77 - 1) / v77 * v77;
              *(_DWORD *)(v26 + 4LL * (int)(678152731 * ((unsigned __int64)(v74 - *v80) >> 3))) = v81;
              v51 = v81 + v77;
              ++v72;
              v28 = v92;
              v70 = *((_QWORD *)v92 + 6);
            }
            while ( v72 < *(int *)(v70 + 48 * i + 24) );
          }
        }
      }
    }
    if ( v51 + 7 <= 0 )
      v82 = -(-(v51 + 7) & 7);
    else
      v82 = (v51 + 7) & 7;
    v83 = v51 + 7 - v82;
    v8 = operator new(v83);
    bzero(v8, v83);
    *v8 = off_1001D96E8;
    v8[1] = 0LL;
    v8[2] = v91;
    *((_DWORD *)v8 + 6) = 0;
    *(_QWORD *)(v91 + 64) = v8;
    google::protobuf::DynamicMessage::SharedCtor((google::protobuf::DynamicMessage *)v8, 0);
    if ( v89 > 0 )
      google::protobuf::DynamicMessageFactory::ConstructDefaultOneofInstance(
        *(google::protobuf::DynamicMessageFactory **)(v91 + 32),
        *(const google::protobuf::Descriptor **)(v91 + 40),
        (const unsigned int *)v8,
        v84);
    v93 = *(void (__fastcall ***)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))(v91 + 64);
    v94 = *(_OWORD *)(v91 + 40);
    v85 = *(_DWORD *)v91;
    v95 = *(_DWORD *)(v91 + 4);
    v96 = 8;
    v97 = vrev64_s32(*(int32x2_t *)(v91 + 8));
    v86 = *(_DWORD *)(v91 + 72);
    v98 = v85;
    v99 = v86;
    v87 = operator new(80LL, 0x1070C4026DFEB36LL);
    google::protobuf::Reflection::Reflection(v87, *(_QWORD *)(v91 + 32), &v93, *(_QWORD *)(v91 + 24), v90);
    v88 = *(_QWORD *)(v91 + 56);
    *(_QWORD *)(v91 + 56) = v87;
    if ( v88 )
      operator delete(v88, 0x1070C4026DFEB36LL);
    google::protobuf::DynamicMessage::CrossLinkPrototypes((google::protobuf::DynamicMessage *)v8);
    return v8;
  }
  v19 = *(__int64 (**)(void))(*(_QWORD *)google::protobuf::MessageFactory::generated_factory(v4) + 16LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (_QWORD *)v19();
}