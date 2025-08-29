__ZN6google8protobuf8internal10WireFormat22InternalSerializeFieldEPKNS0_15FieldDescriptorERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::Message *__fastcall google::protobuf::internal::WireFormat::InternalSerializeField(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::Message *a3,
        unsigned __int8 *a4,
        google::protobuf::io::EpsCopyOutputStream *a5)
{
  google::protobuf::io::EpsCopyOutputStream *v9; // x4
  google::protobuf::Reflection *v10; // x1
  google::protobuf::Reflection *v11; // x24
  std::once_flag::_State_type *v12; // x0
  std::once_flag::_State_type *v13; // x0
  atomic_uint *MapData; // x0
  google::protobuf::internal::WireFormat **i; // x19
  __int64 v16; // x26
  std::once_flag::_State_type *v17; // x0
  void *v18; // x19
  google::protobuf::internal::WireFormat **v19; // x25
  __int64 v20; // x3
  __int64 v21; // x4
  std::once_flag::_State_type *v22; // x0
  atomic_uint *RepeatedField; // x0
  const google::protobuf::Message *v24; // x0
  __int64 v25; // x25
  __int64 v26; // x28
  std::once_flag::_State_type *v27; // x0
  double RepeatedDouble; // d0
  unsigned __int64 RepeatedInt64; // x0
  unsigned int UInt32; // w0
  int v31; // w27
  __int64 RepeatedMessage; // x0
  int StringReference; // w0
  int RepeatedUInt32; // w0
  __int64 RepeatedUInt64; // x0
  int RepeatedInt32; // w0
  float RepeatedFloat; // s0
  int v38; // w27
  unsigned __int64 RepeatedStringReference; // x0
  int v40; // w27
  __int64 v41; // x26
  __int64 RepeatedEnum; // x0
  __int64 Int64; // x0
  int v44; // w8
  unsigned int v45; // w9
  double *v46; // x20
  unsigned int v47; // w9
  unsigned __int8 *v48; // x20
  unsigned int v49; // w9
  unsigned int v50; // w9
  unsigned int v51; // w9
  const google::protobuf::Message *v52; // x0
  unsigned int v53; // w9
  int v54; // w8
  unsigned int v55; // w9
  unsigned int v56; // w8
  char *v57; // x20
  unsigned int v58; // w9
  unsigned int v59; // w10
  int v60; // w8
  unsigned int v61; // w9
  unsigned int v62; // w8
  char *v63; // x20
  unsigned int v64; // w9
  unsigned int v65; // w10
  unsigned int v66; // w9
  int v67; // w8
  unsigned int v68; // w9
  float *v69; // x20
  int v70; // w8
  int v71; // w8
  int v72; // w26
  __int64 Message; // x0
  unsigned __int64 v74; // x8
  unsigned int v75; // w10
  unsigned int v76; // w9
  unsigned int v77; // w8
  unsigned int v78; // w8
  unsigned int v79; // w8
  unsigned int v80; // w8
  unsigned int v81; // w8
  unsigned int v82; // w8
  unsigned int v83; // w8
  unsigned int v84; // w8
  unsigned int v85; // w9
  unsigned int v86; // w8
  unsigned int v87; // w9
  unsigned int v88; // w10
  unsigned int v89; // w9
  unsigned int v90; // w10
  unsigned __int64 v91; // x8
  unsigned __int64 v92; // x9
  unsigned __int64 v93; // x10
  unsigned int v94; // w9
  unsigned int v95; // w10
  unsigned __int64 v96; // x10
  unsigned int v97; // w9
  unsigned int v98; // w10
  unsigned __int64 v99; // x10
  unsigned int v100; // w9
  unsigned int v101; // w10
  unsigned int v102; // w9
  unsigned int v103; // w10
  unsigned int v104; // w8
  unsigned int v105; // w9
  unsigned int v106; // w10
  unsigned int v107; // w9
  unsigned int v108; // w10
  unsigned int v109; // w9
  unsigned int v110; // w10
  unsigned int v111; // w9
  unsigned int v112; // w10
  unsigned int v113; // w10
  unsigned int v114; // w10
  unsigned int v115; // w10
  unsigned int v116; // w11
  unsigned __int64 v117; // x9
  unsigned int v118; // w9
  unsigned int v119; // w10
  unsigned __int64 v120; // x9
  unsigned __int64 v121; // x8
  unsigned __int64 v122; // x10
  unsigned __int64 v123; // x10
  unsigned int v124; // w26
  unsigned int v125; // w9
  char *v126; // x20
  unsigned int v127; // w8
  unsigned int v128; // w9
  unsigned int v129; // w10
  unsigned int v130; // w10
  unsigned int v131; // w9
  char *v132; // x20
  unsigned int v133; // w8
  unsigned int v134; // w9
  unsigned int v135; // w10
  unsigned int v136; // w0
  char *v137; // x20
  unsigned int v138; // w8
  unsigned int v139; // w9
  unsigned int v140; // w10
  int v141; // w26
  atomic_uint *v142; // x0
  atomic_uint *v143; // x0
  int v144; // w24
  const google::protobuf::Message *v145; // x2
  int v146; // w0
  atomic_uint *v147; // x0
  int v148; // w24
  const google::protobuf::Message *v149; // x2
  int v150; // w0
  atomic_uint *v151; // x0
  atomic_uint *v152; // x0
  atomic_uint *v153; // x0
  google::protobuf::internal::LogMessage *v154; // x0
  atomic_uint *v155; // x0
  int v156; // w24
  const google::protobuf::Message *v157; // x2
  int v158; // w0
  atomic_uint *v159; // x0
  atomic_uint *v160; // x0
  atomic_uint *v161; // x0
  int v162; // w24
  const google::protobuf::Message *v163; // x2
  int v164; // w0
  atomic_uint *v165; // x0
  int v166; // w24
  const google::protobuf::Message *v167; // x2
  int v168; // w0
  google::protobuf::internal::WireFormat **v170; // [xsp+0h] [xbp-100h]
  void *v171; // [xsp+8h] [xbp-F8h]
  google::protobuf::internal::WireFormat *v172; // [xsp+10h] [xbp-F0h] BYREF
  void (__fastcall *v173)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-E8h] BYREF
  void **p_p; // [xsp+20h] [xbp-E0h] BYREF
  int v175; // [xsp+28h] [xbp-D8h]
  void *__p; // [xsp+60h] [xbp-A0h] BYREF
  google::protobuf::internal::WireFormat **v177; // [xsp+68h] [xbp-98h]
  __int64 v178; // [xsp+70h] [xbp-90h] BYREF
  __int64 v179; // [xsp+90h] [xbp-70h] BYREF

  (*(void (__fastcall **)(const google::protobuf::FieldDescriptor *))(*(_QWORD *)a2 + 152LL))(a2);
  v11 = v10;
  if ( *((_BYTE *)this + 67) && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 72LL) )
  {
    v12 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v12 )
    {
      v172 = this;
      v173 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        __p = &v173;
        v177 = &v172;
        p_p = &__p;
        std::__call_once(v12, &p_p, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)] == 10
      && *((_DWORD *)this + 15) != 3 )
    {
      return (const google::protobuf::Message *)google::protobuf::internal::WireFormat::InternalSerializeMessageSetItem(
                                                  this,
                                                  a2,
                                                  a3,
                                                  a4,
                                                  v9);
    }
  }
  v13 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v13 )
  {
    v172 = this;
    v173 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
    {
      __p = &v173;
      v177 = &v172;
      p_p = &__p;
      std::__call_once(v13, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)this + 14) == 11 )
  {
    if ( (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(this) )
    {
      MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(v11, a2, this);
      if ( google::protobuf::internal::MapFieldBase::IsMapValid(MapData) )
      {
        if ( a4[58] )
        {
          sub_10010A480((__int64 *)&__p, a2, v11);
          for ( i = (google::protobuf::internal::WireFormat **)__p; i != v177; i += 4 )
          {
            p_p = 0LL;
            v175 = 0;
            google::protobuf::Reflection::LookupMapValue(v11, (__int64)a2, this, (__int64)i, (__int64)&p_p);
            a3 = (const google::protobuf::Message *)sub_10010A614(this, i, &p_p, a3, a4);
          }
          p_p = &__p;
          sub_10010FC54(&p_p);
        }
        else
        {
          google::protobuf::Reflection::MapBegin(v11, a2, this, (__int64)&__p);
          while ( 1 )
          {
            google::protobuf::Reflection::MapEnd(v11, a2, this, (__int64)&p_p);
            v141 = (*((__int64 (__fastcall **)(google::protobuf::internal::WireFormat **, void **, void ***))*v177 + 6))(
                     v177,
                     &__p,
                     &p_p);
            sub_1000DF704(&p_p);
            if ( v141 )
              break;
            a3 = (const google::protobuf::Message *)sub_10010A614(this, &v178, &v179, a3, a4);
            (*((void (__fastcall **)(google::protobuf::internal::WireFormat **, void **))*v177 + 19))(v177, &__p);
          }
          sub_1000DF704(&__p);
        }
        return a3;
      }
    }
  }
  if ( *((_DWORD *)this + 15) != 3 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 75LL) )
    {
      v18 = 0LL;
      v19 = 0LL;
      LODWORD(v16) = 1;
      goto LABEL_31;
    }
    LODWORD(v16) = google::protobuf::Reflection::HasField(v11, a2, this);
LABEL_30:
    v18 = 0LL;
    v19 = 0LL;
    goto LABEL_31;
  }
  v16 = google::protobuf::Reflection::FieldSize(v11, a2, this);
  if ( (int)v16 < 2 )
    goto LABEL_30;
  v17 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    v172 = this;
    v173 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v17, memory_order_acquire) != -1LL )
    {
      __p = &v173;
      v177 = &v172;
      p_p = &__p;
      std::__call_once(v17, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)this + 14) != 11
    || !(unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(this)
    || !a4[58] )
  {
    goto LABEL_30;
  }
  sub_10010B0CC(&__p, a2, v16, v11, this);
  v18 = __p;
  v19 = v177;
LABEL_31:
  v171 = v18;
  if ( google::protobuf::FieldDescriptor::is_packed(this) )
  {
    if ( (_DWORD)v16 )
    {
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        a3 = (const google::protobuf::Message *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                  (unsigned __int8 *)a3);
      v22 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
      if ( v22 )
      {
        v172 = this;
        v173 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v22, memory_order_acquire) != -1LL )
        {
          __p = &v173;
          v177 = &v172;
          p_p = &__p;
          std::__call_once(v22, &p_p, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *((_DWORD *)this + 14) )
      {
        case 1:
          RepeatedField = google::protobuf::Reflection::GetRepeatedFieldInternal<double>(
                            v11,
                            (__int64)a2,
                            this,
                            v20,
                            v21);
          google::protobuf::RepeatedField<double>::RepeatedField(&__p, RepeatedField);
          v24 = (const google::protobuf::Message *)sub_10010BE4C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 2:
          v142 = google::protobuf::Reflection::GetRepeatedFieldInternal<float>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<float>::RepeatedField(&__p, v142);
          v24 = (const google::protobuf::Message *)sub_10010BD8C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 3:
        case 0x12:
          v165 = google::protobuf::Reflection::GetRepeatedFieldInternal<long long>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<long long>::RepeatedField(&__p, v165);
          v166 = *((_DWORD *)this + 17);
          v168 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v167);
          v24 = (const google::protobuf::Message *)sub_1000546FC(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     v166,
                                                     (int)&__p,
                                                     v168,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 4:
          v143 = google::protobuf::Reflection::GetRepeatedFieldInternal<unsigned long long>(
                   v11,
                   (__int64)a2,
                   this,
                   v20,
                   v21);
          google::protobuf::RepeatedField<unsigned long long>::RepeatedField(&__p, v143);
          v144 = *((_DWORD *)this + 17);
          v146 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v145);
          v24 = (const google::protobuf::Message *)sub_1000546FC(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     v144,
                                                     (int)&__p,
                                                     v146,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 5:
        case 0xE:
          v147 = google::protobuf::Reflection::GetRepeatedFieldInternal<int>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<int>::RepeatedField(&__p, v147);
          v148 = *((_DWORD *)this + 17);
          v150 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v149);
          v24 = (const google::protobuf::Message *)sub_1000B9960(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     v148,
                                                     (int)&__p,
                                                     v150,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 6:
          v151 = google::protobuf::Reflection::GetRepeatedFieldInternal<unsigned long long>(
                   v11,
                   (__int64)a2,
                   this,
                   v20,
                   v21);
          google::protobuf::RepeatedField<unsigned long long>::RepeatedField(&__p, v151);
          v24 = (const google::protobuf::Message *)sub_10010BE4C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 7:
          v152 = google::protobuf::Reflection::GetRepeatedFieldInternal<unsigned int>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<unsigned int>::RepeatedField(&__p, v152);
          v24 = (const google::protobuf::Message *)sub_10010BD8C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 8:
          v153 = google::protobuf::Reflection::GetRepeatedFieldInternal<bool>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<bool>::RepeatedField(&__p, v153);
          v24 = (const google::protobuf::Message *)sub_10010BF0C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 0xD:
          v155 = google::protobuf::Reflection::GetRepeatedFieldInternal<unsigned int>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<unsigned int>::RepeatedField(&__p, v155);
          v156 = *((_DWORD *)this + 17);
          v158 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v157);
          v24 = (const google::protobuf::Message *)sub_100054554(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     v156,
                                                     (int)&__p,
                                                     v158,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 0xF:
          v159 = google::protobuf::Reflection::GetRepeatedFieldInternal<int>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<int>::RepeatedField(&__p, v159);
          v24 = (const google::protobuf::Message *)sub_10010BD8C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 0x10:
          v160 = google::protobuf::Reflection::GetRepeatedFieldInternal<long long>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<long long>::RepeatedField(&__p, v160);
          v24 = (const google::protobuf::Message *)sub_10010BE4C(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     *((_DWORD *)this + 17),
                                                     (int)&__p,
                                                     (unsigned __int8 *)a3);
          goto LABEL_307;
        case 0x11:
          v161 = google::protobuf::Reflection::GetRepeatedFieldInternal<int>(v11, (__int64)a2, this, v20, v21);
          google::protobuf::RepeatedField<int>::RepeatedField(&__p, v161);
          v162 = *((_DWORD *)this + 17);
          v164 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v163);
          v24 = (const google::protobuf::Message *)sub_100054554(
                                                     (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                     v162,
                                                     (int)&__p,
                                                     v164,
                                                     (unsigned __int8 *)a3);
LABEL_307:
          a3 = v24;
          if ( SHIDWORD(__p) >= 1 && !*(v177 - 1) )
            operator delete(v177 - 1);
          break;
        default:
          google::protobuf::internal::LogMessage::LogMessage(
            &__p,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/wire_format.cc",
            1319LL);
          v154 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                             &__p,
                                                             "Invalid descriptor");
          google::protobuf::internal::LogFinisher::operator=((int)&p_p, v154);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&__p);
          break;
      }
    }
  }
  else if ( (int)v16 >= 1 )
  {
    v170 = v19;
    v25 = 0LL;
    v26 = (unsigned int)v16;
    do
    {
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        a3 = (const google::protobuf::Message *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                                  (google::protobuf::io::EpsCopyOutputStream *)a4,
                                                  (unsigned __int8 *)a3);
      v27 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
      if ( v27 )
      {
        v172 = this;
        v173 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v27, memory_order_acquire) != -1LL )
        {
          __p = &v173;
          v177 = &v172;
          p_p = &__p;
          std::__call_once(v27, &p_p, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *((_DWORD *)this + 14) )
      {
        case 1:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedDouble = google::protobuf::Reflection::GetRepeatedDouble(v11, a2, this, v25);
          else
            RepeatedDouble = google::protobuf::Reflection::GetDouble(v11, a2, this);
          v44 = *((_DWORD *)this + 17);
          v45 = (8 * v44) | 1;
          if ( v45 > 0x7F )
          {
            *(_BYTE *)a3 = (8 * v44) | 0x81;
            v77 = (unsigned int)(8 * v44) >> 7;
            if ( v45 >> 14 )
            {
              v46 = (double *)((char *)a3 + 2);
              do
              {
                *((_BYTE *)v46 - 1) = v77 | 0x80;
                v87 = v77 >> 7;
                v46 = (double *)((char *)v46 + 1);
                v88 = v77 >> 14;
                v77 >>= 7;
              }
              while ( v88 );
              *((_BYTE *)v46 - 1) = v87;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v77;
              v46 = (double *)((char *)a3 + 2);
            }
          }
          else
          {
            *(_BYTE *)a3 = v45;
            v46 = (double *)((char *)a3 + 1);
          }
          *v46 = RepeatedDouble;
          a3 = (const google::protobuf::Message *)(v46 + 1);
          break;
        case 2:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedFloat = google::protobuf::Reflection::GetRepeatedFloat(v11, a2, this, v25);
          else
            RepeatedFloat = google::protobuf::Reflection::GetFloat(v11, a2, this);
          v67 = *((_DWORD *)this + 17);
          v68 = (8 * v67) | 5;
          if ( v68 > 0x7F )
          {
            *(_BYTE *)a3 = (8 * v67) | 0x85;
            v84 = (unsigned int)(8 * v67) >> 7;
            if ( v68 >> 14 )
            {
              v69 = (float *)((char *)a3 + 2);
              do
              {
                *((_BYTE *)v69 - 1) = v84 | 0x80;
                v111 = v84 >> 7;
                v69 = (float *)((char *)v69 + 1);
                v112 = v84 >> 14;
                v84 >>= 7;
              }
              while ( v112 );
              *((_BYTE *)v69 - 1) = v111;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v84;
              v69 = (float *)((char *)a3 + 2);
            }
          }
          else
          {
            *(_BYTE *)a3 = v68;
            v69 = (float *)((char *)a3 + 1);
          }
          *v69 = RepeatedFloat;
          a3 = (const google::protobuf::Message *)(v69 + 1);
          break;
        case 3:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedInt64 = google::protobuf::Reflection::GetRepeatedInt64(v11, a2, this, v25);
          else
            RepeatedInt64 = google::protobuf::Reflection::GetInt64(v11, a2, this);
          v47 = 8 * *((_DWORD *)this + 17);
          if ( v47 > 0x7F )
          {
            *(_BYTE *)a3 = v47 | 0x80;
            v78 = v47 >> 7;
            if ( v47 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v78 | 0x80;
                v89 = v78 >> 7;
                ++v48;
                v90 = v78 >> 14;
                v78 >>= 7;
              }
              while ( v90 );
              *(v48 - 1) = v89;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v78;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v47;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          if ( RepeatedInt64 <= 0x7F )
            goto LABEL_190;
          *v48 = RepeatedInt64 | 0x80;
          v91 = RepeatedInt64 >> 7;
          if ( !(RepeatedInt64 >> 14) )
            goto LABEL_240;
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v91 | 0x80;
            v92 = v91 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v93 = v91 >> 14;
            v91 >>= 7;
          }
          while ( v93 );
          goto LABEL_246;
        case 4:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedInt64 = google::protobuf::Reflection::GetRepeatedUInt64(v11, a2, this, v25);
          else
            RepeatedInt64 = google::protobuf::Reflection::GetUInt64(v11, a2, this);
          v49 = 8 * *((_DWORD *)this + 17);
          if ( v49 > 0x7F )
          {
            *(_BYTE *)a3 = v49 | 0x80;
            v79 = v49 >> 7;
            if ( v49 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v79 | 0x80;
                v94 = v79 >> 7;
                ++v48;
                v95 = v79 >> 14;
                v79 >>= 7;
              }
              while ( v95 );
              *(v48 - 1) = v94;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v79;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v49;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          if ( RepeatedInt64 <= 0x7F )
            goto LABEL_190;
          *v48 = RepeatedInt64 | 0x80;
          v91 = RepeatedInt64 >> 7;
          if ( !(RepeatedInt64 >> 14) )
            goto LABEL_240;
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v91 | 0x80;
            v92 = v91 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v96 = v91 >> 14;
            v91 >>= 7;
          }
          while ( v96 );
          goto LABEL_246;
        case 5:
          if ( *((_DWORD *)this + 15) == 3 )
            LODWORD(RepeatedInt64) = google::protobuf::Reflection::GetRepeatedInt32(v11, a2, this, v25);
          else
            LODWORD(RepeatedInt64) = google::protobuf::Reflection::GetInt32(v11, a2, this);
          v50 = 8 * *((_DWORD *)this + 17);
          if ( v50 > 0x7F )
          {
            *(_BYTE *)a3 = v50 | 0x80;
            v80 = v50 >> 7;
            if ( v50 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v80 | 0x80;
                v97 = v80 >> 7;
                ++v48;
                v98 = v80 >> 14;
                v80 >>= 7;
              }
              while ( v98 );
              *(v48 - 1) = v97;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v80;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v50;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          if ( (unsigned int)RepeatedInt64 <= 0x7F )
          {
LABEL_190:
            *v48 = RepeatedInt64;
            a3 = (const google::protobuf::Message *)(v48 + 1);
            break;
          }
          *v48 = RepeatedInt64 | 0x80;
          v91 = (unsigned __int64)(int)RepeatedInt64 >> 7;
          if ( !((unsigned int)RepeatedInt64 >> 14) )
            goto LABEL_240;
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v91 | 0x80;
            v92 = v91 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v99 = v91 >> 14;
            v91 >>= 7;
          }
          while ( v99 );
          goto LABEL_246;
        case 6:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedUInt64 = google::protobuf::Reflection::GetRepeatedUInt64(v11, a2, this, v25);
          else
            RepeatedUInt64 = google::protobuf::Reflection::GetUInt64(v11, a2, this);
          v70 = *((_DWORD *)this + 17);
          v61 = (8 * v70) | 1;
          if ( v61 <= 0x7F )
            goto LABEL_127;
          *(_BYTE *)a3 = (8 * v70) | 0x81;
          v62 = (unsigned int)(8 * v70) >> 7;
          if ( !(v61 >> 14) )
            goto LABEL_159;
          v63 = (char *)a3 + 2;
          do
          {
            *(v63 - 1) = v62 | 0x80;
            v64 = v62 >> 7;
            ++v63;
            v113 = v62 >> 14;
            v62 >>= 7;
          }
          while ( v113 );
          goto LABEL_221;
        case 7:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedUInt32 = google::protobuf::Reflection::GetRepeatedUInt32(v11, a2, this, v25);
          else
            RepeatedUInt32 = google::protobuf::Reflection::GetUInt32(v11, a2, this);
          v71 = *((_DWORD *)this + 17);
          v55 = (8 * v71) | 5;
          if ( v55 <= 0x7F )
            goto LABEL_130;
          *(_BYTE *)a3 = (8 * v71) | 0x85;
          v56 = (unsigned int)(8 * v71) >> 7;
          if ( !(v55 >> 14) )
            goto LABEL_161;
          v57 = (char *)a3 + 2;
          do
          {
            *(v57 - 1) = v56 | 0x80;
            v58 = v56 >> 7;
            ++v57;
            v114 = v56 >> 14;
            v56 >>= 7;
          }
          while ( v114 );
          goto LABEL_225;
        case 8:
          if ( *((_DWORD *)this + 15) == 3 )
            LOBYTE(UInt32) = google::protobuf::Reflection::GetRepeatedBool(v11, a2, this, v25);
          else
            LOBYTE(UInt32) = google::protobuf::Reflection::GetBool(v11, a2, this);
          v51 = 8 * *((_DWORD *)this + 17);
          if ( v51 > 0x7F )
          {
            *(_BYTE *)a3 = v51 | 0x80;
            v81 = v51 >> 7;
            if ( v51 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v81 | 0x80;
                v100 = v81 >> 7;
                ++v48;
                v101 = v81 >> 14;
                v81 >>= 7;
              }
              while ( v101 );
              *(v48 - 1) = v100;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v81;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v51;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          goto LABEL_202;
        case 9:
          v38 = *(_DWORD *)(*((_QWORD *)this + 5) + 60LL);
          __p = 0LL;
          v177 = 0LL;
          v178 = 0LL;
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedStringReference = google::protobuf::Reflection::GetRepeatedStringReference(
                                        v11,
                                        (__int64)a2,
                                        (__int64)this,
                                        v25);
          else
            RepeatedStringReference = google::protobuf::Reflection::GetStringReference(v11, (__int64)a2, (__int64)this);
          v72 = RepeatedStringReference;
          if ( v38 == 3 )
          {
            if ( *(char *)(RepeatedStringReference + 23) < 0 )
              RepeatedStringReference = *(_QWORD *)RepeatedStringReference;
            google::protobuf::internal::WireFormatLite::VerifyUtf8String(RepeatedStringReference);
          }
          v52 = (const google::protobuf::Message *)sub_1000A2FD0(
                                                     (int)a4,
                                                     *((_DWORD *)this + 17),
                                                     v72,
                                                     (unsigned __int8 *)a3);
          goto LABEL_285;
        case 0xA:
          v31 = *((_DWORD *)this + 17);
          if ( *((_DWORD *)this + 15) == 3 )
          {
            if ( v171 == v170 )
              RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(v11, a2, this, v25);
            else
              RepeatedMessage = *((_QWORD *)v171 + v25);
          }
          else
          {
            RepeatedMessage = google::protobuf::Reflection::GetMessage(v11, a2, this, 0LL);
          }
          v124 = 8 * v31;
          v125 = (8 * v31) | 3;
          if ( v125 > 0x7F )
          {
            *(_BYTE *)a3 = (8 * v31) | 0x83;
            v127 = v124 >> 7;
            if ( v125 >> 14 )
            {
              v126 = (char *)a3 + 2;
              do
              {
                *(v126 - 1) = v127 | 0x80;
                v128 = v127 >> 7;
                ++v126;
                v129 = v127 >> 14;
                v127 >>= 7;
              }
              while ( v129 );
              *(v126 - 1) = v128;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v127;
              v126 = (char *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v125;
            v126 = (char *)a3 + 1;
          }
          v48 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, char *, unsigned __int8 *))(*(_QWORD *)RepeatedMessage
                                                                                                 + 96LL))(
                                     RepeatedMessage,
                                     v126,
                                     a4);
          if ( *(_QWORD *)a4 <= (unsigned __int64)v48 )
            v48 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
                                       (google::protobuf::io::EpsCopyOutputStream *)a4,
                                       v48);
          v109 = v124 | 4;
          if ( (v124 | 4) <= 0x7F )
            goto LABEL_258;
          *v48 = v124 | 0x84;
          v104 = v124 >> 7;
          if ( !(v109 >> 14) )
            goto LABEL_260;
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v104 | 0x80;
            v105 = v104 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v130 = v104 >> 14;
            v104 >>= 7;
          }
          while ( v130 );
          goto LABEL_264;
        case 0xB:
          v40 = *((_DWORD *)this + 17);
          if ( *((_DWORD *)this + 15) == 3 )
          {
            if ( v171 != v170 )
            {
              v41 = *((_QWORD *)v171 + v25);
              goto LABEL_267;
            }
            Message = google::protobuf::Reflection::GetRepeatedMessage(v11, a2, this, v25);
          }
          else
          {
            Message = google::protobuf::Reflection::GetMessage(v11, a2, this, 0LL);
          }
          v41 = Message;
LABEL_267:
          v131 = (8 * v40) | 2;
          if ( v131 > 0x7F )
          {
            *(_BYTE *)a3 = (8 * v40) | 0x82;
            v133 = (unsigned int)(8 * v40) >> 7;
            if ( v131 >> 14 )
            {
              v132 = (char *)a3 + 2;
              do
              {
                *(v132 - 1) = v133 | 0x80;
                v134 = v133 >> 7;
                ++v132;
                v135 = v133 >> 14;
                v133 >>= 7;
              }
              while ( v135 );
              *(v132 - 1) = v134;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v133;
              v132 = (char *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v131;
            v132 = (char *)a3 + 1;
          }
          v136 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 80LL))(v41);
          if ( v136 > 0x7F )
          {
            *v132 = v136 | 0x80;
            v138 = v136 >> 7;
            if ( v136 >> 14 )
            {
              v137 = v132 + 2;
              do
              {
                *(v137 - 1) = v138 | 0x80;
                v139 = v138 >> 7;
                ++v137;
                v140 = v138 >> 14;
                v138 >>= 7;
              }
              while ( v140 );
              *(v137 - 1) = v139;
            }
            else
            {
              v132[1] = v138;
              v137 = v132 + 2;
            }
          }
          else
          {
            *v132 = v136;
            v137 = v132 + 1;
          }
          a3 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, char *, unsigned __int8 *))(*(_QWORD *)v41 + 96LL))(
                                                    v41,
                                                    v137,
                                                    a4);
          break;
        case 0xC:
          __p = 0LL;
          v177 = 0LL;
          v178 = 0LL;
          if ( *((_DWORD *)this + 15) == 3 )
            StringReference = google::protobuf::Reflection::GetRepeatedStringReference(
                                v11,
                                (__int64)a2,
                                (__int64)this,
                                v25);
          else
            StringReference = google::protobuf::Reflection::GetStringReference(v11, (__int64)a2, (__int64)this);
          v52 = (const google::protobuf::Message *)sub_1000A2FD0(
                                                     (int)a4,
                                                     *((_DWORD *)this + 17),
                                                     StringReference,
                                                     (unsigned __int8 *)a3);
LABEL_285:
          a3 = v52;
          if ( SHIBYTE(v178) < 0 )
            operator delete(__p);
          break;
        case 0xD:
          if ( *((_DWORD *)this + 15) == 3 )
            UInt32 = google::protobuf::Reflection::GetRepeatedUInt32(v11, a2, this, v25);
          else
            UInt32 = google::protobuf::Reflection::GetUInt32(v11, a2, this);
          v53 = 8 * *((_DWORD *)this + 17);
          if ( v53 > 0x7F )
          {
            *(_BYTE *)a3 = v53 | 0x80;
            v82 = v53 >> 7;
            if ( v53 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v82 | 0x80;
                v102 = v82 >> 7;
                ++v48;
                v103 = v82 >> 14;
                v82 >>= 7;
              }
              while ( v103 );
              *(v48 - 1) = v102;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v82;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v53;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          if ( UInt32 <= 0x7F )
          {
LABEL_202:
            *v48 = UInt32;
            a3 = (const google::protobuf::Message *)(v48 + 1);
            break;
          }
          *v48 = UInt32 | 0x80;
          v104 = UInt32 >> 7;
          if ( !(UInt32 >> 14) )
            goto LABEL_260;
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v104 | 0x80;
            v105 = v104 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v106 = v104 >> 14;
            v104 >>= 7;
          }
          while ( v106 );
          goto LABEL_264;
        case 0xE:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedEnum = google::protobuf::Reflection::GetRepeatedEnum(v11, a2, this, v25);
          else
            RepeatedEnum = google::protobuf::Reflection::GetEnum(v11, a2, this);
          v74 = *(int *)(RepeatedEnum + 16);
          v75 = 8 * *((_DWORD *)this + 17);
          if ( v75 > 0x7F )
          {
            *(_BYTE *)a3 = v75 | 0x80;
            v85 = v75 >> 7;
            if ( v75 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v85 | 0x80;
                v115 = v85 >> 7;
                ++v48;
                v116 = v85 >> 14;
                v85 >>= 7;
              }
              while ( v116 );
              *(v48 - 1) = v115;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v85;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v75;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          if ( (unsigned int)v74 <= 0x7F )
          {
            *v48 = v74;
            a3 = (const google::protobuf::Message *)(v48 + 1);
            break;
          }
          *v48 = v74 | 0x80;
          v117 = v74 >> 7;
          if ( !((unsigned int)v74 >> 14) )
          {
            v48[1] = v117;
            goto LABEL_261;
          }
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v117 | 0x80;
            v121 = v117 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v122 = v117 >> 14;
            v117 >>= 7;
          }
          while ( v122 );
          *((_BYTE *)a3 - 1) = v121;
          break;
        case 0xF:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedUInt32 = google::protobuf::Reflection::GetRepeatedInt32(v11, a2, this, v25);
          else
            RepeatedUInt32 = google::protobuf::Reflection::GetInt32(v11, a2, this);
          v54 = *((_DWORD *)this + 17);
          v55 = (8 * v54) | 5;
          if ( v55 <= 0x7F )
          {
LABEL_130:
            *(_BYTE *)a3 = v55;
            v57 = (char *)a3 + 1;
          }
          else
          {
            *(_BYTE *)a3 = (8 * v54) | 0x85;
            v56 = (unsigned int)(8 * v54) >> 7;
            if ( v55 >> 14 )
            {
              v57 = (char *)a3 + 2;
              do
              {
                *(v57 - 1) = v56 | 0x80;
                v58 = v56 >> 7;
                ++v57;
                v59 = v56 >> 14;
                v56 >>= 7;
              }
              while ( v59 );
LABEL_225:
              *(v57 - 1) = v58;
            }
            else
            {
LABEL_161:
              *((_BYTE *)a3 + 1) = v56;
              v57 = (char *)a3 + 2;
            }
          }
          *(_DWORD *)v57 = RepeatedUInt32;
          a3 = (const google::protobuf::Message *)(v57 + 4);
          break;
        case 0x10:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedUInt64 = google::protobuf::Reflection::GetRepeatedInt64(v11, a2, this, v25);
          else
            RepeatedUInt64 = google::protobuf::Reflection::GetInt64(v11, a2, this);
          v60 = *((_DWORD *)this + 17);
          v61 = (8 * v60) | 1;
          if ( v61 <= 0x7F )
          {
LABEL_127:
            *(_BYTE *)a3 = v61;
            v63 = (char *)a3 + 1;
          }
          else
          {
            *(_BYTE *)a3 = (8 * v60) | 0x81;
            v62 = (unsigned int)(8 * v60) >> 7;
            if ( v61 >> 14 )
            {
              v63 = (char *)a3 + 2;
              do
              {
                *(v63 - 1) = v62 | 0x80;
                v64 = v62 >> 7;
                ++v63;
                v65 = v62 >> 14;
                v62 >>= 7;
              }
              while ( v65 );
LABEL_221:
              *(v63 - 1) = v64;
            }
            else
            {
LABEL_159:
              *((_BYTE *)a3 + 1) = v62;
              v63 = (char *)a3 + 2;
            }
          }
          *(_QWORD *)v63 = RepeatedUInt64;
          a3 = (const google::protobuf::Message *)(v63 + 8);
          break;
        case 0x11:
          if ( *((_DWORD *)this + 15) == 3 )
            RepeatedInt32 = google::protobuf::Reflection::GetRepeatedInt32(v11, a2, this, v25);
          else
            RepeatedInt32 = google::protobuf::Reflection::GetInt32(v11, a2, this);
          v66 = 8 * *((_DWORD *)this + 17);
          if ( v66 > 0x7F )
          {
            *(_BYTE *)a3 = v66 | 0x80;
            v83 = v66 >> 7;
            if ( v66 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v83 | 0x80;
                v107 = v83 >> 7;
                ++v48;
                v108 = v83 >> 14;
                v83 >>= 7;
              }
              while ( v108 );
              *(v48 - 1) = v107;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v83;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v66;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          v109 = (2 * RepeatedInt32) ^ (RepeatedInt32 >> 31);
          if ( v109 <= 0x7F )
          {
LABEL_258:
            *v48 = v109;
            a3 = (const google::protobuf::Message *)(v48 + 1);
            break;
          }
          *v48 = v109 | 0x80;
          v104 = v109 >> 7;
          if ( !(v109 >> 14) )
          {
LABEL_260:
            v48[1] = v104;
            goto LABEL_261;
          }
          a3 = (const google::protobuf::Message *)(v48 + 2);
          do
          {
            *((_BYTE *)a3 - 1) = v104 | 0x80;
            v105 = v104 >> 7;
            a3 = (const google::protobuf::Message *)((char *)a3 + 1);
            v110 = v104 >> 14;
            v104 >>= 7;
          }
          while ( v110 );
LABEL_264:
          *((_BYTE *)a3 - 1) = v105;
          break;
        case 0x12:
          if ( *((_DWORD *)this + 15) == 3 )
            Int64 = google::protobuf::Reflection::GetRepeatedInt64(v11, a2, this, v25);
          else
            Int64 = google::protobuf::Reflection::GetInt64(v11, a2, this);
          v76 = 8 * *((_DWORD *)this + 17);
          if ( v76 > 0x7F )
          {
            *(_BYTE *)a3 = v76 | 0x80;
            v86 = v76 >> 7;
            if ( v76 >> 14 )
            {
              v48 = (unsigned __int8 *)a3 + 2;
              do
              {
                *(v48 - 1) = v86 | 0x80;
                v118 = v86 >> 7;
                ++v48;
                v119 = v86 >> 14;
                v86 >>= 7;
              }
              while ( v119 );
              *(v48 - 1) = v118;
            }
            else
            {
              *((_BYTE *)a3 + 1) = v86;
              v48 = (unsigned __int8 *)a3 + 2;
            }
          }
          else
          {
            *(_BYTE *)a3 = v76;
            v48 = (unsigned __int8 *)a3 + 1;
          }
          v120 = (2 * Int64) ^ (Int64 >> 63);
          if ( v120 > 0x7F )
          {
            *v48 = v120 | 0x80;
            v91 = v120 >> 7;
            if ( v120 >> 14 )
            {
              a3 = (const google::protobuf::Message *)(v48 + 2);
              do
              {
                *((_BYTE *)a3 - 1) = v91 | 0x80;
                v92 = v91 >> 7;
                a3 = (const google::protobuf::Message *)((char *)a3 + 1);
                v123 = v91 >> 14;
                v91 >>= 7;
              }
              while ( v123 );
LABEL_246:
              *((_BYTE *)a3 - 1) = v92;
            }
            else
            {
LABEL_240:
              v48[1] = v91;
LABEL_261:
              a3 = (const google::protobuf::Message *)(v48 + 2);
            }
          }
          else
          {
            *v48 = v120;
            a3 = (const google::protobuf::Message *)(v48 + 1);
          }
          break;
        default:
          break;
      }
      ++v25;
    }
    while ( v25 != v26 );
  }
  if ( v171 )
    operator delete(v171);
  return a3;
}