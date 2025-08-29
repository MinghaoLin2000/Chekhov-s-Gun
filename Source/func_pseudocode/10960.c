__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter14SetOptionValueEPKNS0_15FieldDescriptorEPNS0_15UnknownFieldSetE
__int64 __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::SetOptionValue(
        google::protobuf::DescriptorBuilder::OptionInterpreter *this,
        const google::protobuf::FieldDescriptor *a2,
        google::protobuf::UnknownFieldSet *a3)
{
  std::once_flag::_State_type *v6; // x0
  int v7; // w3
  __int64 v8; // x8
  int v9; // w9
  std::string *v10; // x0
  __int128 v11; // q0
  __int64 v12; // x8
  int v13; // w9
  std::string *v14; // x0
  __int128 v15; // q0
  __int64 v16; // x8
  std::string *v17; // x0
  __int128 v18; // q0
  __int64 v19; // x8
  std::string *v20; // x0
  __int128 v21; // q0
  __int64 v22; // x8
  int v23; // w9
  std::string *v24; // x0
  __int128 v25; // q0
  __int64 v26; // x8
  int v27; // w9
  std::string *v28; // x0
  __int128 v29; // q0
  __int64 v30; // x8
  std::string *v31; // x0
  __int128 v32; // q0
  std::string *v33; // x0
  __int128 v34; // q0
  __int64 v35; // x8
  std::string *v36; // x0
  __int128 v37; // q0
  __int64 result; // x0
  unsigned __int64 v39; // x22
  std::string *v40; // x0
  __int128 v41; // q0
  __int64 v42; // x22
  int v43; // w19
  unsigned __int64 v44; // x22
  std::string *v45; // x0
  __int128 v46; // q0
  int v47; // w19
  __int64 v48; // x22
  std::once_flag::_State_type *v49; // x0
  double v50; // d0
  float v51; // s0
  _DWORD *v52; // x8
  int v53; // w9
  google::protobuf::DescriptorPool *v54; // x23
  unsigned __int64 v55; // x22
  __int64 v56; // x26
  __int64 v57; // x24
  __int128 *v58; // x8
  __int128 v59; // q0
  const std::string *v60; // x19
  std::string *v61; // x0
  signed __int64 v62; // x22
  std::once_flag::_State_type *v63; // x0
  int v64; // w19
  std::once_flag::_State_type *v65; // x0
  int v66; // w1
  int v67; // w2
  int v68; // w19
  std::once_flag::_State_type *v69; // x0
  std::string *v70; // x0
  __int128 v71; // q0
  __int64 v72; // x9
  int v73; // w9
  int v74; // w8
  unsigned __int64 v76; // x2
  __int64 ValueByName; // x24
  int v78; // w19
  std::string::size_type size; // x8
  __int64 v80; // x9
  int v81; // w9
  const std::string::value_type *v82; // x1
  std::string::size_type v83; // x2
  __int64 v84; // x1
  std::string *v85; // x0
  __int128 v86; // q0
  int v87; // w9
  const std::string::value_type *v88; // x1
  std::string::size_type v89; // x2
  std::string *v90; // x0
  __int128 v91; // q0
  std::string *v92; // x0
  __int128 v93; // q0
  __int64 v94; // x8
  int v95; // w10
  const std::string::value_type *v96; // x1
  std::string::size_type v97; // x2
  std::string *v98; // x0
  __int128 v99; // q0
  std::string *v100; // x0
  __int128 v101; // q0
  char v102; // w23
  int v103; // w1
  __int64 v104; // x0
  std::string *v105; // x0
  __int128 v106; // q0
  int v107; // w9
  const std::string::value_type *v108; // x1
  std::string::size_type v109; // x2
  std::string *v110; // x0
  __int128 v111; // q0
  std::string *v112; // x0
  __int128 v113; // q0
  __int64 v114; // x8
  int v115; // w10
  const std::string::value_type *v116; // x1
  std::string::size_type v117; // x2
  std::string *v118; // x0
  __int128 v119; // q0
  std::string *v120; // x0
  __int128 v121; // q0
  void *v122; // x0
  std::string *v123; // x0
  __int128 v124; // q0
  std::string v125; // [xsp+8h] [xbp-128h] BYREF
  std::string v126; // [xsp+20h] [xbp-110h] BYREF
  std::string v127; // [xsp+40h] [xbp-F0h] BYREF
  std::string v128; // [xsp+60h] [xbp-D0h] BYREF
  std::string v129; // [xsp+80h] [xbp-B0h] BYREF
  std::string v130; // [xsp+A0h] [xbp-90h] BYREF
  std::string __dst; // [xsp+C0h] [xbp-70h] BYREF

  v6 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
  if ( v6 )
  {
    v129.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
    v128.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
    if ( atomic_load_explicit((atomic_ullong *volatile)v6, memory_order_acquire) != -1LL )
    {
      __dst.__r_.__value_.__r.__words[0] = (std::string::size_type)&v129;
      __dst.__r_.__value_.__l.__size_ = (std::string::size_type)&v128;
      v130.__r_.__value_.__r.__words[0] = (std::string::size_type)&__dst;
      std::__call_once(v6, &v130, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v7 = *((_DWORD *)a2 + 14);
  switch ( v7 )
  {
    case 1:
      v22 = *((_QWORD *)this + 2);
      v23 = *(_DWORD *)(v22 + 16);
      if ( (v23 & 0x20) != 0 )
      {
        v50 = *(double *)(v22 + 88);
      }
      else if ( (v23 & 8) != 0 )
      {
        v50 = (double)*(unsigned __int64 *)(v22 + 72);
      }
      else
      {
        if ( (v23 & 0x10) == 0 )
        {
          std::operator+<char>("Value must be number for double option \"", *((_QWORD *)a2 + 1));
          v24 = std::string::append(&v130, "\".");
          v25 = *(_OWORD *)&v24->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v24->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v25;
          v24->__r_.__value_.__l.__size_ = 0LL;
          v24->__r_.__value_.__r.__words[2] = 0LL;
          v24->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v50 = (double)*(__int64 *)(v22 + 80);
      }
      google::protobuf::UnknownFieldSet::AddFixed64(a3, *((_DWORD *)a2 + 17), *(unsigned __int64 *)&v50);
      return 1LL;
    case 2:
      v26 = *((_QWORD *)this + 2);
      v27 = *(_DWORD *)(v26 + 16);
      if ( (v27 & 0x20) != 0 )
      {
        v51 = *(double *)(v26 + 88);
      }
      else if ( (v27 & 8) != 0 )
      {
        v51 = (float)*(unsigned __int64 *)(v26 + 72);
      }
      else
      {
        if ( (v27 & 0x10) == 0 )
        {
          std::operator+<char>("Value must be number for float option \"", *((_QWORD *)a2 + 1));
          v28 = std::string::append(&v130, "\".");
          v29 = *(_OWORD *)&v28->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v28->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v29;
          v28->__r_.__value_.__l.__size_ = 0LL;
          v28->__r_.__value_.__r.__words[2] = 0LL;
          v28->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v51 = (float)*(__int64 *)(v26 + 80);
      }
      google::protobuf::UnknownFieldSet::AddFixed32(a3, *((_DWORD *)a2 + 17), LODWORD(v51));
      return 1LL;
    case 3:
    case 16:
    case 18:
      v12 = *((_QWORD *)this + 2);
      v13 = *(_DWORD *)(v12 + 16);
      if ( (v13 & 8) != 0 )
      {
        v42 = *(_QWORD *)(v12 + 72);
        if ( v42 < 0 )
        {
          std::operator+<char>("Value out of range for int64 option \"", *((_QWORD *)a2 + 1));
          v70 = std::string::append(&v130, "\".");
          v71 = *(_OWORD *)&v70->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v70->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v71;
          v70->__r_.__value_.__l.__size_ = 0LL;
          v70->__r_.__value_.__r.__words[2] = 0LL;
          v70->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v43 = *((_DWORD *)a2 + 17);
      }
      else
      {
        if ( (v13 & 0x10) == 0 )
        {
          std::operator+<char>("Value must be integer for int64 option \"", *((_QWORD *)a2 + 1));
          v14 = std::string::append(&v130, "\".");
          v15 = *(_OWORD *)&v14->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v14->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v15;
          v14->__r_.__value_.__l.__size_ = 0LL;
          v14->__r_.__value_.__r.__words[2] = 0LL;
          v14->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v43 = *((_DWORD *)a2 + 17);
        v42 = *(_QWORD *)(v12 + 80);
      }
      v63 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
      if ( v63 )
      {
        v129.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
        v128.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
        if ( atomic_load_explicit((atomic_ullong *volatile)v63, memory_order_acquire) != -1LL )
        {
          __dst.__r_.__value_.__r.__words[0] = (std::string::size_type)&v129;
          __dst.__r_.__value_.__l.__size_ = (std::string::size_type)&v128;
          v130.__r_.__value_.__r.__words[0] = (std::string::size_type)&__dst;
          std::__call_once(v63, &v130, (void (__cdecl *)(void *))sub_10007A460);
        }
        v7 = *((_DWORD *)a2 + 14);
      }
      google::protobuf::DescriptorBuilder::OptionInterpreter::SetInt64((int)v63, v43, v42, v7, a3);
      return 1LL;
    case 4:
    case 6:
      v19 = *((_QWORD *)this + 2);
      if ( (*(_BYTE *)(v19 + 16) & 8) == 0 )
      {
        std::operator+<char>("Value must be non-negative integer for uint64 option \"", *((_QWORD *)a2 + 1));
        v20 = std::string::append(&v130, "\".");
        v21 = *(_OWORD *)&v20->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v20->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v21;
        v20->__r_.__value_.__l.__size_ = 0LL;
        v20->__r_.__value_.__r.__words[2] = 0LL;
        v20->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        goto LABEL_162;
      }
      v47 = *((_DWORD *)a2 + 17);
      v48 = *(_QWORD *)(v19 + 72);
      v49 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
      if ( v49 )
      {
        v129.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
        v128.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
        if ( atomic_load_explicit((atomic_ullong *volatile)v49, memory_order_acquire) != -1LL )
        {
          __dst.__r_.__value_.__r.__words[0] = (std::string::size_type)&v129;
          __dst.__r_.__value_.__l.__size_ = (std::string::size_type)&v128;
          v130.__r_.__value_.__r.__words[0] = (std::string::size_type)&__dst;
          std::__call_once(v49, &v130, (void (__cdecl *)(void *))sub_10007A460);
        }
        v7 = *((_DWORD *)a2 + 14);
      }
      google::protobuf::DescriptorBuilder::OptionInterpreter::SetUInt64((int)v49, v47, v48, v7, a3);
      return 1LL;
    case 5:
    case 15:
    case 17:
      v8 = *((_QWORD *)this + 2);
      v9 = *(_DWORD *)(v8 + 16);
      if ( (v9 & 8) != 0 )
      {
        v39 = *(_QWORD *)(v8 + 72);
        if ( v39 >> 31 )
        {
LABEL_32:
          std::operator+<char>("Value out of range for int32 option \"", *((_QWORD *)a2 + 1));
          v40 = std::string::append(&v130, "\".");
          v41 = *(_OWORD *)&v40->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v40->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v41;
          v40->__r_.__value_.__l.__size_ = 0LL;
          v40->__r_.__value_.__r.__words[2] = 0LL;
          v40->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v64 = *((_DWORD *)a2 + 17);
        v65 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
        if ( v65 )
        {
          v129.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
          v128.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
          if ( atomic_load_explicit((atomic_ullong *volatile)v65, memory_order_acquire) != -1LL )
          {
            __dst.__r_.__value_.__r.__words[0] = (std::string::size_type)&v129;
            __dst.__r_.__value_.__l.__size_ = (std::string::size_type)&v128;
            v130.__r_.__value_.__r.__words[0] = (std::string::size_type)&__dst;
            std::__call_once(v65, &v130, (void (__cdecl *)(void *))sub_10007A460);
          }
          v7 = *((_DWORD *)a2 + 14);
        }
        v66 = v64;
        v67 = v39;
      }
      else
      {
        if ( (v9 & 0x10) == 0 )
        {
          std::operator+<char>("Value must be integer for int32 option \"", *((_QWORD *)a2 + 1));
          v10 = std::string::append(&v130, "\".");
          v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v10->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v11;
          v10->__r_.__value_.__l.__size_ = 0LL;
          v10->__r_.__value_.__r.__words[2] = 0LL;
          v10->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
        v62 = *(_QWORD *)(v8 + 80);
        if ( v62 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_32;
        v78 = *((_DWORD *)a2 + 17);
        LODWORD(v65) = sub_10007DF0C(a2);
        v66 = v78;
        v67 = v62;
        v7 = (int)v65;
      }
      google::protobuf::DescriptorBuilder::OptionInterpreter::SetInt32((int)v65, v66, v67, v7, a3);
      return 1LL;
    case 7:
    case 13:
      v16 = *((_QWORD *)this + 2);
      if ( (*(_BYTE *)(v16 + 16) & 8) == 0 )
      {
        std::operator+<char>("Value must be non-negative integer for uint32 option \"", *((_QWORD *)a2 + 1));
        v17 = std::string::append(&v130, "\".");
        v18 = *(_OWORD *)&v17->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v17->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v18;
        v17->__r_.__value_.__l.__size_ = 0LL;
        v17->__r_.__value_.__r.__words[2] = 0LL;
        v17->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        goto LABEL_162;
      }
      v44 = *(_QWORD *)(v16 + 72);
      if ( HIDWORD(v44) )
      {
        std::operator+<char>("Value out of range for uint32 option \"", *(_QWORD *)a2);
        v45 = std::string::append(&v130, "\".");
        v46 = *(_OWORD *)&v45->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v45->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v46;
        v45->__r_.__value_.__l.__size_ = 0LL;
        v45->__r_.__value_.__r.__words[2] = 0LL;
        v45->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        goto LABEL_162;
      }
      v68 = *((_DWORD *)a2 + 17);
      v69 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
      if ( v69 )
      {
        v129.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
        v128.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
        if ( atomic_load_explicit((atomic_ullong *volatile)v69, memory_order_acquire) != -1LL )
        {
          __dst.__r_.__value_.__r.__words[0] = (std::string::size_type)&v129;
          __dst.__r_.__value_.__l.__size_ = (std::string::size_type)&v128;
          v130.__r_.__value_.__r.__words[0] = (std::string::size_type)&__dst;
          std::__call_once(v69, &v130, (void (__cdecl *)(void *))sub_10007A460);
        }
        v7 = *((_DWORD *)a2 + 14);
      }
      google::protobuf::DescriptorBuilder::OptionInterpreter::SetUInt32((int)v69, v68, v44, v7, a3);
      return 1LL;
    case 8:
      v30 = *((_QWORD *)this + 2);
      if ( (*(_BYTE *)(v30 + 16) & 1) == 0 )
      {
        std::operator+<char>("Value must be identifier for boolean option \"", *((_QWORD *)a2 + 1));
        v31 = std::string::append(&v130, "\".");
        v32 = *(_OWORD *)&v31->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v31->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v32;
        v31->__r_.__value_.__l.__size_ = 0LL;
        v31->__r_.__value_.__r.__words[2] = 0LL;
        v31->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        goto LABEL_162;
      }
      v52 = (_DWORD *)(*(_QWORD *)(v30 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ( *((char *)v52 + 23) < 0 )
      {
        v72 = *((_QWORD *)v52 + 1);
        if ( v72 != 4 || **(_DWORD **)v52 != 1702195828 )
        {
          if ( v72 == 5 )
          {
            v52 = *(_DWORD **)v52;
LABEL_77:
            v73 = *v52;
            v74 = *((unsigned __int8 *)v52 + 4);
            if ( v73 != 1936482662 || v74 != 101 )
              goto LABEL_161;
            v76 = 0LL;
            goto LABEL_169;
          }
LABEL_161:
          std::operator+<char>("Value must be \"true\" or \"false\" for boolean option \"", *((_QWORD *)a2 + 1));
          v123 = std::string::append(&v130, "\".");
          v124 = *(_OWORD *)&v123->__r_.__value_.__l.__data_;
          __dst.__r_.__value_.__r.__words[2] = v123->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v124;
          v123->__r_.__value_.__l.__size_ = 0LL;
          v123->__r_.__value_.__r.__words[2] = 0LL;
          v123->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&__dst);
          goto LABEL_162;
        }
      }
      else
      {
        v53 = *((unsigned __int8 *)v52 + 23);
        if ( v53 != 4 )
        {
          if ( v53 != 5 )
            goto LABEL_161;
          goto LABEL_77;
        }
        if ( *v52 != 1702195828 )
          goto LABEL_161;
      }
      v76 = 1LL;
LABEL_169:
      v103 = *((_DWORD *)a2 + 17);
LABEL_170:
      google::protobuf::UnknownFieldSet::AddVarint(a3, v103, v76);
      return 1LL;
    case 9:
    case 12:
      v35 = *((_QWORD *)this + 2);
      if ( (*(_BYTE *)(v35 + 16) & 2) == 0 )
      {
        std::operator+<char>("Value must be quoted string for string option \"", *((_QWORD *)a2 + 1));
        v36 = std::string::append(&v130, "\".");
        v37 = *(_OWORD *)&v36->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v36->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v37;
        v36->__r_.__value_.__l.__size_ = 0LL;
        v36->__r_.__value_.__r.__words[2] = 0LL;
        v36->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        goto LABEL_162;
      }
      v60 = (const std::string *)(*(_QWORD *)(v35 + 56) & 0xFFFFFFFFFFFFFFFELL);
      v61 = (std::string *)google::protobuf::UnknownFieldSet::AddLengthDelimited(a3, *((_DWORD *)a2 + 17));
      std::string::operator=(v61, v60);
      return 1LL;
    case 10:
    case 11:
      result = google::protobuf::DescriptorBuilder::OptionInterpreter::SetAggregateOption(this, a2, a3);
      if ( !(_DWORD)result )
        return result;
      return 1LL;
    case 14:
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 16LL) & 1) == 0 )
      {
        std::operator+<char>("Value must be identifier for enum-valued option \"", *((_QWORD *)a2 + 1));
        v33 = std::string::append(&v130, "\".");
        v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v33->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v34;
        v33->__r_.__value_.__l.__size_ = 0LL;
        v33->__r_.__value_.__r.__words[2] = 0LL;
        v33->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
LABEL_162:
        if ( SHIBYTE(__dst.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(__dst.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v130.__r_.__value_.__r.__words[2]) < 0 )
        {
          v122 = (void *)v130.__r_.__value_.__r.__words[0];
          goto LABEL_166;
        }
        return 0LL;
      }
      v54 = (google::protobuf::DescriptorPool *)google::protobuf::FieldDescriptor::enum_type(a2);
      v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) & 0xFFFFFFFFFFFFFFFELL;
      v56 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
      v57 = google::protobuf::DescriptorPool::internal_generated_pool(v54);
      google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fdescriptor_2eproto, 0LL);
      if ( v56 == v57 )
      {
        ValueByName = google::protobuf::EnumDescriptor::FindValueByName((__int64)v54, v55);
LABEL_134:
        if ( ValueByName )
        {
          v103 = *((_DWORD *)a2 + 17);
          v76 = *(int *)(ValueByName + 16);
          goto LABEL_170;
        }
        v104 = google::protobuf::FieldDescriptor::enum_type(a2);
        std::operator+<char>("Enum type \"", *(_QWORD *)(v104 + 8));
        v105 = std::string::append(&v126, "\" has no value named \"");
        v106 = *(_OWORD *)&v105->__r_.__value_.__l.__data_;
        v127.__r_.__value_.__r.__words[2] = v105->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v127.__r_.__value_.__l.__data_ = v106;
        v105->__r_.__value_.__l.__size_ = 0LL;
        v105->__r_.__value_.__r.__words[2] = 0LL;
        v105->__r_.__value_.__r.__words[0] = 0LL;
        v107 = *(char *)(v55 + 23);
        if ( v107 >= 0 )
          v108 = (const std::string::value_type *)v55;
        else
          v108 = *(const std::string::value_type **)v55;
        if ( v107 >= 0 )
          v109 = *(unsigned __int8 *)(v55 + 23);
        else
          v109 = *(_QWORD *)(v55 + 8);
        v110 = std::string::append(&v127, v108, v109);
        v111 = *(_OWORD *)&v110->__r_.__value_.__l.__data_;
        v128.__r_.__value_.__r.__words[2] = v110->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v128.__r_.__value_.__l.__data_ = v111;
        v110->__r_.__value_.__l.__size_ = 0LL;
        v110->__r_.__value_.__r.__words[2] = 0LL;
        v110->__r_.__value_.__r.__words[0] = 0LL;
        v112 = std::string::append(&v128, "\" for option \"");
        v113 = *(_OWORD *)&v112->__r_.__value_.__l.__data_;
        v129.__r_.__value_.__r.__words[2] = v112->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v129.__r_.__value_.__l.__data_ = v113;
        v112->__r_.__value_.__l.__size_ = 0LL;
        v112->__r_.__value_.__r.__words[2] = 0LL;
        v112->__r_.__value_.__r.__words[0] = 0LL;
        v114 = *((_QWORD *)a2 + 1);
        v115 = *(char *)(v114 + 23);
        if ( v115 >= 0 )
          v116 = (const std::string::value_type *)*((_QWORD *)a2 + 1);
        else
          v116 = *(const std::string::value_type **)v114;
        if ( v115 >= 0 )
          v117 = *(unsigned __int8 *)(v114 + 23);
        else
          v117 = *(_QWORD *)(v114 + 8);
        v118 = std::string::append(&v129, v116, v117);
        v119 = *(_OWORD *)&v118->__r_.__value_.__l.__data_;
        v130.__r_.__value_.__r.__words[2] = v118->__r_.__value_.__r.__words[2];
        *(_OWORD *)&v130.__r_.__value_.__l.__data_ = v119;
        v118->__r_.__value_.__l.__size_ = 0LL;
        v118->__r_.__value_.__r.__words[2] = 0LL;
        v118->__r_.__value_.__r.__words[0] = 0LL;
        v120 = std::string::append(&v130, "\".");
        v121 = *(_OWORD *)&v120->__r_.__value_.__l.__data_;
        __dst.__r_.__value_.__r.__words[2] = v120->__r_.__value_.__r.__words[2];
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v121;
        v120->__r_.__value_.__l.__size_ = 0LL;
        v120->__r_.__value_.__r.__words[2] = 0LL;
        v120->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          *(_QWORD *)this,
          *((_QWORD *)this + 1) + 24LL,
          *((_QWORD *)this + 2),
          8LL,
          (__int64)&__dst);
        if ( SHIBYTE(__dst.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(__dst.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v130.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v130.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v129.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v129.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v128.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v128.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v127.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v127.__r_.__value_.__l.__data_);
        if ( SHIBYTE(v126.__r_.__value_.__r.__words[2]) < 0 )
        {
          v122 = (void *)v126.__r_.__value_.__r.__words[0];
LABEL_166:
          operator delete(v122);
        }
        return 0LL;
      }
      v58 = (__int128 *)*((_QWORD *)v54 + 1);
      if ( *((char *)v58 + 23) < 0 )
      {
        sub_10007A474(&__dst, *(void **)v58);
      }
      else
      {
        v59 = *v58;
        __dst.__r_.__value_.__r.__words[2] = *((_QWORD *)v58 + 2);
        *(_OWORD *)&__dst.__r_.__value_.__l.__data_ = v59;
      }
      size = HIBYTE(__dst.__r_.__value_.__r.__words[2]);
      if ( (__dst.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
        size = __dst.__r_.__value_.__l.__size_;
      if ( *(char *)(*(_QWORD *)v54 + 23LL) < 0 )
        v80 = *(_QWORD *)(*(_QWORD *)v54 + 8LL);
      else
        v80 = *(unsigned __int8 *)(*(_QWORD *)v54 + 23LL);
      std::string::resize(&__dst, size - v80, 0);
      v81 = *(char *)(v55 + 23);
      if ( v81 >= 0 )
        v82 = (const std::string::value_type *)v55;
      else
        v82 = *(const std::string::value_type **)v55;
      if ( v81 >= 0 )
        v83 = *(unsigned __int8 *)(v55 + 23);
      else
        v83 = *(_QWORD *)(v55 + 8);
      std::string::append(&__dst, v82, v83);
      if ( (unsigned int)google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDeps(
                           *(__int64 **)this,
                           (__int64)&__dst,
                           1) == 5 )
      {
        ValueByName = v84;
        if ( *(google::protobuf::DescriptorPool **)(v84 + 24) != v54 )
        {
          std::operator+<char>("Enum type \"", *((_QWORD *)v54 + 1));
          v85 = std::string::append(&v125, "\" has no value named \"");
          v86 = *(_OWORD *)&v85->__r_.__value_.__l.__data_;
          v126.__r_.__value_.__r.__words[2] = v85->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v126.__r_.__value_.__l.__data_ = v86;
          v85->__r_.__value_.__l.__size_ = 0LL;
          v85->__r_.__value_.__r.__words[2] = 0LL;
          v85->__r_.__value_.__r.__words[0] = 0LL;
          v87 = *(char *)(v55 + 23);
          if ( v87 >= 0 )
            v88 = (const std::string::value_type *)v55;
          else
            v88 = *(const std::string::value_type **)v55;
          if ( v87 >= 0 )
            v89 = *(unsigned __int8 *)(v55 + 23);
          else
            v89 = *(_QWORD *)(v55 + 8);
          v90 = std::string::append(&v126, v88, v89);
          v91 = *(_OWORD *)&v90->__r_.__value_.__l.__data_;
          v127.__r_.__value_.__r.__words[2] = v90->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v127.__r_.__value_.__l.__data_ = v91;
          v90->__r_.__value_.__l.__size_ = 0LL;
          v90->__r_.__value_.__r.__words[2] = 0LL;
          v90->__r_.__value_.__r.__words[0] = 0LL;
          v92 = std::string::append(&v127, "\" for option \"");
          v93 = *(_OWORD *)&v92->__r_.__value_.__l.__data_;
          v128.__r_.__value_.__r.__words[2] = v92->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v128.__r_.__value_.__l.__data_ = v93;
          v92->__r_.__value_.__l.__size_ = 0LL;
          v92->__r_.__value_.__r.__words[2] = 0LL;
          v92->__r_.__value_.__r.__words[0] = 0LL;
          v94 = *((_QWORD *)a2 + 1);
          v95 = *(char *)(v94 + 23);
          if ( v95 >= 0 )
            v96 = (const std::string::value_type *)*((_QWORD *)a2 + 1);
          else
            v96 = *(const std::string::value_type **)v94;
          if ( v95 >= 0 )
            v97 = *(unsigned __int8 *)(v94 + 23);
          else
            v97 = *(_QWORD *)(v94 + 8);
          v98 = std::string::append(&v128, v96, v97);
          v99 = *(_OWORD *)&v98->__r_.__value_.__l.__data_;
          v129.__r_.__value_.__r.__words[2] = v98->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v129.__r_.__value_.__l.__data_ = v99;
          v98->__r_.__value_.__l.__size_ = 0LL;
          v98->__r_.__value_.__r.__words[2] = 0LL;
          v98->__r_.__value_.__r.__words[0] = 0LL;
          v100 = std::string::append(&v129, "\". This appears to be a value from a sibling type.");
          v101 = *(_OWORD *)&v100->__r_.__value_.__l.__data_;
          v130.__r_.__value_.__r.__words[2] = v100->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v130.__r_.__value_.__l.__data_ = v101;
          v100->__r_.__value_.__l.__size_ = 0LL;
          v100->__r_.__value_.__r.__words[2] = 0LL;
          v100->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(
            *(_QWORD *)this,
            *((_QWORD *)this + 1) + 24LL,
            *((_QWORD *)this + 2),
            8LL,
            (__int64)&v130);
          if ( SHIBYTE(v130.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v130.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v129.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v129.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v128.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v128.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v127.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v127.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v126.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v126.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v125.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v125.__r_.__value_.__l.__data_);
          v102 = 0;
          ValueByName = 0LL;
LABEL_131:
          if ( SHIBYTE(__dst.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(__dst.__r_.__value_.__l.__data_);
          if ( (v102 & 1) == 0 )
            return 0LL;
          goto LABEL_134;
        }
      }
      else
      {
        ValueByName = 0LL;
      }
      v102 = 1;
      goto LABEL_131;
    default:
      return 1LL;
  }
}