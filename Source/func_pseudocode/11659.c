__ZNK6google8protobuf10Reflection9SwapFieldEPNS0_7MessageES3_PKNS0_15FieldDescriptorE
void __fastcall google::protobuf::Reflection::SwapField(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        const google::protobuf::FieldDescriptor *a4)
{
  std::once_flag::_State_type *v8; // x0
  char *v9; // x22
  char *v10; // x21
  unsigned int v11; // w0
  char *v12; // x22
  unsigned int v13; // w23
  unsigned int v14; // w0
  int v15; // w8
  char *v16; // x22
  unsigned int v17; // w23
  unsigned int v18; // w0
  __int64 v19; // x8
  __int64 v20; // x20
  std::once_flag::_State_type *v21; // x0
  char *v22; // x22
  char *v23; // x21
  unsigned int v24; // w0
  char *v25; // x22
  char *v26; // x21
  unsigned int v27; // w0
  char *v28; // x22
  char *v29; // x21
  unsigned int v30; // w0
  char *v31; // x22
  char *v32; // x21
  unsigned int v33; // w0
  char *v34; // x22
  char *v35; // x21
  unsigned int v36; // w0
  char *v37; // x22
  char *v38; // x21
  unsigned int v39; // w0
  char *v40; // x22
  google::protobuf::internal::RepeatedPtrFieldBase *v41; // x21
  char *v42; // x1
  int v43; // w23
  char *v44; // x22
  std::once_flag::_State_type *v45; // x0
  google::protobuf::internal::LogMessage *v46; // x0
  char *v47; // x22
  unsigned int v48; // w23
  unsigned int v49; // w0
  __int64 v50; // d0
  char *v51; // x22
  unsigned int v52; // w23
  unsigned int v53; // w0
  int v54; // s0
  char *v55; // x22
  unsigned int v56; // w23
  unsigned int v57; // w0
  char v58; // w8
  __int64 v59; // x8
  __int64 v60; // x9
  _QWORD *v61; // x23
  __int64 v62; // x8
  _QWORD *v63; // x24
  char *v64; // x22
  unsigned __int64 *v65; // x21
  unsigned __int64 *v66; // x20
  _QWORD *v67; // x0
  unsigned __int64 v68; // x9
  unsigned __int64 v69; // x19
  unsigned __int64 v70; // x8
  unsigned __int64 v71; // x9
  __int128 v72; // q0
  __int64 v73; // x8
  __int64 v74; // x9
  _QWORD *v75; // x26
  __int64 v76; // x8
  _QWORD *v77; // x27
  __int64 v78; // x25
  __int64 v79; // x23
  __int64 v80; // x0
  __int64 v81; // x8
  google::protobuf::Reflection *v82; // x1
  __int64 v83; // x8
  __int64 v84; // x9
  __int64 v85; // x9
  _QWORD *v86; // x1
  __int64 v87; // x0
  google::protobuf::Reflection *v88; // x0
  google::protobuf::Message *v89; // x1
  __int64 v90; // x8
  _QWORD *v91; // x1
  __int64 v92; // x0
  void *__p[2]; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v94; // [xsp+10h] [xbp-A0h]
  const google::protobuf::FieldDescriptor *v95; // [xsp+38h] [xbp-78h] BYREF
  void (__fastcall *v96)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-70h] BYREF
  void (__fastcall *v97)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-68h] BYREF
  void **v98; // [xsp+50h] [xbp-60h] BYREF
  const google::protobuf::FieldDescriptor **v99; // [xsp+58h] [xbp-58h]

  v8 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( *((_DWORD *)a4 + 15) == 3 )
  {
    if ( v8 )
    {
      v96 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))a4;
      v97 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
      {
        __p[0] = &v97;
        __p[1] = &v96;
        v98 = __p;
        std::__call_once(v8, &v98, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    switch ( *((_DWORD *)a4 + 14) )
    {
      case 1:
        v31 = (char *)this + 8;
        v32 = (char *)a2 + (unsigned int)sub_1000DF774(v31, a4);
        v33 = sub_1000DF774(v31, a4);
        google::protobuf::RepeatedField<double>::Swap(v32, (char *)a3 + v33);
        return;
      case 2:
        v34 = (char *)this + 8;
        v35 = (char *)a2 + (unsigned int)sub_1000DF774(v34, a4);
        v36 = sub_1000DF774(v34, a4);
        google::protobuf::RepeatedField<float>::Swap(v35, (char *)a3 + v36);
        return;
      case 3:
      case 0x10:
      case 0x12:
        v22 = (char *)this + 8;
        v23 = (char *)a2 + (unsigned int)sub_1000DF774(v22, a4);
        v24 = sub_1000DF774(v22, a4);
        google::protobuf::RepeatedField<long long>::Swap(v23, (char *)a3 + v24);
        return;
      case 4:
      case 6:
        v28 = (char *)this + 8;
        v29 = (char *)a2 + (unsigned int)sub_1000DF774(v28, a4);
        v30 = sub_1000DF774(v28, a4);
        google::protobuf::RepeatedField<unsigned long long>::Swap(v29, (char *)a3 + v30);
        return;
      case 5:
      case 0xE:
      case 0xF:
      case 0x11:
        v9 = (char *)this + 8;
        v10 = (char *)a2 + (unsigned int)sub_1000DF774(v9, a4);
        v11 = sub_1000DF774(v9, a4);
        google::protobuf::RepeatedField<int>::Swap(v10, (char *)a3 + v11);
        return;
      case 7:
      case 0xD:
        v25 = (char *)this + 8;
        v26 = (char *)a2 + (unsigned int)sub_1000DF774(v25, a4);
        v27 = sub_1000DF774(v25, a4);
        google::protobuf::RepeatedField<unsigned int>::Swap(v26, (char *)a3 + v27);
        return;
      case 8:
        v37 = (char *)this + 8;
        v38 = (char *)a2 + (unsigned int)sub_1000DF774(v37, a4);
        v39 = sub_1000DF774(v37, a4);
        google::protobuf::RepeatedField<bool>::Swap(v38, (char *)a3 + v39);
        return;
      case 9:
      case 0xC:
        v40 = (char *)this + 8;
        v41 = (google::protobuf::Message *)((char *)a2 + (unsigned int)sub_1000DF774(v40, a4));
        v42 = (char *)a3 + (unsigned int)sub_1000DF774(v40, a4);
        if ( *(_QWORD *)v42 == *(_QWORD *)v41 )
          goto LABEL_53;
        sub_1000DFCA4(v41);
        break;
      case 0xA:
      case 0xB:
        v43 = sub_1000BF2A4(a4);
        v44 = (char *)this + 8;
        v41 = (google::protobuf::Message *)((char *)a2 + (unsigned int)sub_1000DF774(v44, a4));
        v42 = (char *)a3 + (unsigned int)sub_1000DF774(v44, a4);
        if ( v43 )
        {
          (*(void (__fastcall **)(google::protobuf::internal::RepeatedPtrFieldBase *, char *))(*(_QWORD *)v41 + 80LL))(
            v41,
            v42);
        }
        else if ( *(_QWORD *)v42 == *(_QWORD *)v41 )
        {
LABEL_53:
          v83 = *((_QWORD *)v41 + 1);
          v84 = *((_QWORD *)v41 + 2);
          *(_OWORD *)((char *)v41 + 8) = *(_OWORD *)(v42 + 8);
          *((_QWORD *)v42 + 1) = v83;
          *((_QWORD *)v42 + 2) = v84;
        }
        else
        {
          sub_1000DFE88(v41);
        }
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          __p,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          394LL);
        v20 = google::protobuf::internal::LogMessage::operator<<(__p, "Unimplemented type: ");
        v21 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
        if ( v21 )
        {
          v95 = a4;
          v96 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v21, memory_order_acquire) != -1LL )
          {
            v98 = (void **)&v96;
            v99 = &v95;
            v97 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v98;
            std::__call_once(v21, &v97, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        goto LABEL_30;
    }
  }
  else
  {
    if ( v8 )
    {
      v96 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))a4;
      v97 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
      {
        __p[0] = &v97;
        __p[1] = &v96;
        v98 = __p;
        std::__call_once(v8, &v98, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    switch ( *((_DWORD *)a4 + 14) )
    {
      case 1:
        v47 = (char *)this + 8;
        v48 = sub_1000DF774(v47, a4);
        v49 = sub_1000DF774(v47, a4);
        v50 = *(_QWORD *)((char *)a2 + v48);
        *(_QWORD *)((char *)a2 + v48) = *(_QWORD *)((char *)a3 + v49);
        *(_QWORD *)((char *)a3 + v49) = v50;
        return;
      case 2:
        v51 = (char *)this + 8;
        v52 = sub_1000DF774(v51, a4);
        v53 = sub_1000DF774(v51, a4);
        v54 = *(_DWORD *)((char *)a2 + v52);
        *(_DWORD *)((char *)a2 + v52) = *(_DWORD *)((char *)a3 + v53);
        *(_DWORD *)((char *)a3 + v53) = v54;
        return;
      case 3:
      case 4:
      case 6:
      case 0x10:
      case 0x12:
        v16 = (char *)this + 8;
        v17 = sub_1000DF774(v16, a4);
        v18 = sub_1000DF774(v16, a4);
        v19 = *(_QWORD *)((char *)a2 + v17);
        *(_QWORD *)((char *)a2 + v17) = *(_QWORD *)((char *)a3 + v18);
        *(_QWORD *)((char *)a3 + v18) = v19;
        return;
      case 5:
      case 7:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
        v12 = (char *)this + 8;
        v13 = sub_1000DF774(v12, a4);
        v14 = sub_1000DF774(v12, a4);
        v15 = *(_DWORD *)((char *)a2 + v13);
        *(_DWORD *)((char *)a2 + v13) = *(_DWORD *)((char *)a3 + v14);
        *(_DWORD *)((char *)a3 + v14) = v15;
        return;
      case 8:
        v55 = (char *)this + 8;
        v56 = sub_1000DF774(v55, a4);
        v57 = sub_1000DF774(v55, a4);
        v58 = *((_BYTE *)a2 + v56);
        *((_BYTE *)a2 + v56) = *((_BYTE *)a3 + v57);
        *((_BYTE *)a3 + v57) = v58;
        return;
      case 9:
      case 0xC:
        v59 = *((unsigned int *)this + 9);
        v60 = *(_QWORD *)((char *)a2 + v59);
        v61 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v60 & 1) != 0 )
          v61 = (_QWORD *)*v61;
        v62 = *(_QWORD *)((char *)a3 + v59);
        v63 = (_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v62 & 1) != 0 )
          v63 = (_QWORD *)*v63;
        v64 = (char *)this + 8;
        v65 = (unsigned __int64 *)((char *)a2 + (unsigned int)sub_1000DF774(v64, a4));
        v66 = (unsigned __int64 *)((char *)a3 + (unsigned int)sub_1000DF774(v64, a4));
        v67 = (_QWORD *)sub_1000DFBD4(v64, a4);
        v68 = *v65;
        if ( v61 == v63 )
        {
          *v65 = *v66;
          *v66 = v68;
        }
        else
        {
          v69 = *v67 & 0xFFFFFFFFFFFFFFFELL;
          v70 = *v66;
          if ( v68 == v69 )
          {
            if ( v70 != v69 )
            {
              google::protobuf::internal::ArenaStringPtr::Set(v65, v69, v70 & 0xFFFFFFFFFFFFFFFELL, v61);
              *v66 = v69;
            }
          }
          else if ( v70 == v69 )
          {
            google::protobuf::internal::ArenaStringPtr::Set(v66, v69, v68 & 0xFFFFFFFFFFFFFFFELL, v63);
            *v65 = v69;
          }
          else
          {
            v71 = v68 & 0xFFFFFFFFFFFFFFFELL;
            if ( *(char *)(v71 + 23) < 0 )
            {
              sub_10007A474(__p, *(void **)v71);
              v70 = *v66;
            }
            else
            {
              v72 = *(_OWORD *)v71;
              v94 = *(_QWORD *)(v71 + 16);
              *(_OWORD *)__p = v72;
            }
            google::protobuf::internal::ArenaStringPtr::Set(v65, v69, v70 & 0xFFFFFFFFFFFFFFFELL, v61);
            google::protobuf::internal::ArenaStringPtr::Set(v66, v69, __p, v63);
            if ( SHIBYTE(v94) < 0 )
              operator delete(__p[0]);
          }
        }
        return;
      case 0xA:
      case 0xB:
        v73 = *((unsigned int *)this + 9);
        v74 = *(_QWORD *)((char *)a2 + v73);
        v75 = (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v74 & 1) != 0 )
          v75 = (_QWORD *)*v75;
        v76 = *(_QWORD *)((char *)a3 + v73);
        v77 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFFELL);
        if ( (v76 & 1) != 0 )
          v77 = (_QWORD *)*v77;
        v78 = (unsigned int)sub_1000DF774((char *)this + 8, a4);
        v79 = (unsigned int)sub_1000DF774((char *)this + 8, a4);
        v80 = *(_QWORD *)((char *)a2 + v78);
        if ( v75 == v77 )
        {
          *(_QWORD *)((char *)a2 + v78) = *(_QWORD *)((char *)a3 + v79);
          *(_QWORD *)((char *)a3 + v79) = v80;
          return;
        }
        v81 = *(_QWORD *)((char *)a3 + v79);
        if ( v80 )
        {
          if ( v81 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 152LL))(v80);
            google::protobuf::Reflection::Swap(
              v82,
              *(google::protobuf::Message **)((char *)a2 + v78),
              *(google::protobuf::Message **)((char *)a3 + v79));
            return;
          }
          v90 = *((_QWORD *)a3 + 1);
          v91 = (_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v90 & 1) != 0 )
            v91 = (_QWORD *)*v91;
          v92 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v80 + 32LL))(v80, v91);
          *(_QWORD *)((char *)a3 + v79) = v92;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v92 + 112LL))(v92, *(_QWORD *)((char *)a2 + v78));
          v88 = this;
          v89 = a2;
        }
        else
        {
          if ( !v81 )
            return;
          v85 = *((_QWORD *)a2 + 1);
          v86 = (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v85 & 1) != 0 )
            v86 = (_QWORD *)*v86;
          v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v81 + 32LL))(
                  *(_QWORD *)((char *)a3 + v79),
                  v86);
          *(_QWORD *)((char *)a2 + v78) = v87;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v87 + 112LL))(v87, *(_QWORD *)((char *)a3 + v79));
          v88 = this;
          v89 = a3;
        }
        google::protobuf::Reflection::ClearField(v88, v89, a4);
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          __p,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          471LL);
        v20 = google::protobuf::internal::LogMessage::operator<<(__p, "Unimplemented type: ");
        v45 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
        if ( v45 )
        {
          v95 = a4;
          v96 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v45, memory_order_acquire) != -1LL )
          {
            v98 = (void **)&v96;
            v99 = &v95;
            v97 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v98;
            std::__call_once(v45, &v97, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
LABEL_30:
        v46 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v20,
                                                          (unsigned int)google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)]);
        google::protobuf::internal::LogFinisher::operator=((int)&v98, v46);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
        return;
    }
  }
}