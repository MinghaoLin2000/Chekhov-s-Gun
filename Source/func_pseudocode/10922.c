__ZN6google8protobuf17DescriptorBuilder13BuildFileImplERKNS0_19FileDescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildFileImpl(
        google::protobuf::DescriptorPool::Tables **this,
        const google::protobuf::FileDescriptorProto *a2)
{
  google::protobuf::DescriptorPool::Tables *Bytes; // x0
  __int64 v5; // x27
  __int64 v6; // x22
  google::protobuf::SourceCodeInfo *v7; // x23
  google::protobuf::SourceCodeInfo *v8; // x0
  const google::protobuf::SourceCodeInfo *v9; // x1
  google::protobuf::FileDescriptorTables *FileTables; // x0
  unsigned __int64 v11; // x1
  bool v12; // zf
  int *v13; // x8
  __int64 v14; // x8
  int v16; // w9
  int v17; // w8
  __int64 v19; // x19
  google::protobuf::DescriptorPool::Tables *v20; // x8
  int v21; // w9
  google::protobuf::DescriptorPool::Tables *v22; // x22
  google::protobuf::DescriptorPool::Tables *v23; // x22
  __int64 v24; // x2
  const char *v25; // x1
  __int64 v26; // x1
  int v27; // w8
  void *v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 i; // x23
  __int64 v32; // x2
  char v33; // w1
  google::protobuf::DescriptorPool::Tables *v34; // x19
  __int64 v35; // x0
  void *FileByName; // x0
  __int64 v37; // x0
  google::protobuf::DescriptorPool::Tables *v38; // x24
  __int64 *v39; // x12
  _QWORD *v40; // x11
  _QWORD *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  bool v44; // zf
  google::protobuf::DescriptorPool::Tables *v45; // x24
  __int64 v46; // x24
  int v47; // w25
  int v48; // w1
  int v49; // w22
  const google::protobuf::FileDescriptor *v50; // x0
  __int64 v51; // x24
  int v52; // w23
  int v53; // w8
  int v54; // w8
  __int64 v55; // x19
  __int64 v56; // x22
  int v57; // w8
  __int64 v58; // x19
  __int64 v59; // x22
  int v60; // w8
  const void *v61; // x2
  __int64 v62; // x19
  __int64 v63; // x22
  int v64; // w8
  __int64 v65; // x19
  __int64 v66; // x22
  const google::protobuf::FileDescriptor *v67; // x2
  int v68; // w8
  google::protobuf::DescriptorPool::Tables *v69; // x25
  const google::protobuf::Message *v70; // x22
  google::protobuf::Message *v71; // x26
  __int64 v72; // x23
  __int64 FieldByName; // x0
  const google::protobuf::FieldDescriptor *v74; // x24
  __int64 v75; // x0
  google::protobuf::internal::LogMessage *v76; // x0
  google::protobuf::Reflection *v77; // x1
  int v78; // w24
  char *v79; // x9
  char *v80; // x19
  char *v81; // x0
  __int64 v82; // x27
  unsigned __int64 v83; // x10
  __int64 v84; // x8
  __int64 v85; // x1
  __int64 v86; // x8
  char *v87; // x10
  int v88; // t1
  __int64 v89; // x24
  __int64 v90; // x0
  const google::protobuf::FieldDescriptor *v91; // x28
  __int64 v92; // x0
  google::protobuf::internal::LogMessage *v93; // x0
  google::protobuf::Reflection *v94; // x1
  int v95; // w24
  int v96; // w27
  int *v97; // x9
  char *v98; // x19
  int *v99; // x0
  __int64 v100; // x19
  unsigned __int64 v101; // x10
  __int64 v102; // x8
  __int64 v103; // x1
  __int64 v104; // x8
  int *v105; // x10
  int v106; // t1
  google::protobuf::Reflection *v107; // x1
  google::protobuf::Message *v108; // x23
  google::protobuf::Reflection *v109; // x1
  void *v110; // x24
  std::string *v111; // x0
  __int128 v112; // q0
  std::string *v113; // x0
  __int128 v114; // q0
  void **v115; // x1
  std::string::size_type v116; // x2
  std::string *v117; // x0
  __int128 v118; // q0
  google::protobuf::Reflection *v119; // x1
  google::protobuf::DescriptorPool::Tables *v120; // x19
  __int64 v121; // x19
  __int64 v122; // x22
  google::protobuf::SourceCodeInfo *v124; // [xsp+0h] [xbp-280h]
  __int64 v125; // [xsp+8h] [xbp-278h]
  __int64 v126[2]; // [xsp+20h] [xbp-260h] BYREF
  __int64 v127[2]; // [xsp+30h] [xbp-250h] BYREF
  __int128 v128; // [xsp+40h] [xbp-240h] BYREF
  _QWORD *v129; // [xsp+50h] [xbp-230h] BYREF
  _QWORD v130[2]; // [xsp+58h] [xbp-228h] BYREF
  _QWORD *v131; // [xsp+68h] [xbp-218h] BYREF
  _QWORD v132[2]; // [xsp+70h] [xbp-210h] BYREF
  _QWORD v133[2]; // [xsp+80h] [xbp-200h] BYREF
  __int64 v134[2]; // [xsp+90h] [xbp-1F0h] BYREF
  void *v135[2]; // [xsp+A0h] [xbp-1E0h] BYREF
  unsigned __int8 v136; // [xsp+B7h] [xbp-1C9h]
  std::string v137; // [xsp+B8h] [xbp-1C8h] BYREF
  std::string v138; // [xsp+D0h] [xbp-1B0h] BYREF
  std::string v139; // [xsp+F0h] [xbp-190h] BYREF
  void *v140[2]; // [xsp+110h] [xbp-170h] BYREF
  std::string::size_type v141; // [xsp+120h] [xbp-160h]
  void *v142; // [xsp+128h] [xbp-158h] BYREF
  char *v143; // [xsp+130h] [xbp-150h]
  unsigned __int64 v144; // [xsp+138h] [xbp-148h] BYREF
  void *v145[2]; // [xsp+140h] [xbp-140h] BYREF
  __int64 v146; // [xsp+150h] [xbp-130h]
  void *__p[2]; // [xsp+170h] [xbp-110h] BYREF
  __int64 RepeatedMessage; // [xsp+180h] [xbp-100h]

  Bytes = (google::protobuf::DescriptorPool::Tables *)google::protobuf::DescriptorPool::Tables::AllocateBytes(
                                                        this[1],
                                                        160);
  v5 = (__int64)Bytes;
  this[10] = Bytes;
  *((_WORD *)Bytes + 32) = 0;
  if ( (*((_BYTE *)a2 + 16) & 0x10) != 0 )
  {
    v8 = (google::protobuf::SourceCodeInfo *)sub_100089518(this[1], 0LL);
    v6 = (__int64)v8;
    if ( *((_QWORD *)a2 + 26) )
      v9 = (const google::protobuf::SourceCodeInfo *)*((_QWORD *)a2 + 26);
    else
      v9 = (const google::protobuf::SourceCodeInfo *)&google::protobuf::_SourceCodeInfo_default_instance_;
    google::protobuf::SourceCodeInfo::CopyFrom(v8, v9);
    v7 = (google::protobuf::SourceCodeInfo *)v6;
  }
  else
  {
    v6 = google::protobuf::SourceCodeInfo::default_instance(Bytes);
    v7 = 0LL;
  }
  *(_QWORD *)(v5 + 152) = v6;
  FileTables = google::protobuf::DescriptorPool::Tables::AllocateFileTables(this[1]);
  this[11] = FileTables;
  *((_QWORD *)this[10] + 18) = FileTables;
  if ( (*((_BYTE *)a2 + 16) & 1) == 0 )
  {
    sub_10007A754((int)__p, "");
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      (__int64)__p,
      (__int64)a2,
      10LL,
      "Missing field: FileDescriptorProto.name.");
    if ( SHIBYTE(RepeatedMessage) < 0 )
      operator delete(__p[0]);
  }
  v11 = *((_QWORD *)a2 + 24) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v11 + 23) < 0 )
  {
    v14 = *(_QWORD *)(v11 + 8);
    if ( v14 )
    {
      if ( v14 != 6 )
        goto LABEL_30;
      if ( **(_DWORD **)v11 != 1953460848 || *(_WORD *)(*(_QWORD *)v11 + 4LL) != 12911 )
      {
        v13 = *(int **)v11;
        goto LABEL_26;
      }
    }
LABEL_32:
    v20 = this[10];
    v21 = 2;
LABEL_33:
    *((_DWORD *)v20 + 15) = v21;
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(v11 + 23) )
    goto LABEL_32;
  if ( *(_BYTE *)(v11 + 23) != 6 )
    goto LABEL_30;
  v12 = *(_DWORD *)v11 == 1953460848 && *(_WORD *)(v11 + 4) == 12911;
  v13 = (int *)(*((_QWORD *)a2 + 24) & 0xFFFFFFFFFFFFFFFELL);
  if ( v12 )
    goto LABEL_32;
LABEL_26:
  v16 = *v13;
  v17 = *((unsigned __int16 *)v13 + 2);
  if ( v16 == 1953460848 && v17 == 13167 )
  {
    v20 = this[10];
    v21 = 3;
    goto LABEL_33;
  }
LABEL_30:
  *((_DWORD *)this[10] + 15) = 0;
  v19 = *((_QWORD *)a2 + 22);
  std::operator+<char>("Unrecognized syntax: ", v11);
  google::protobuf::DescriptorBuilder::AddError(
    (__int64)this,
    v19 & 0xFFFFFFFFFFFFFFFELL,
    (__int64)a2,
    10LL,
    (__int64)__p);
  if ( SHIBYTE(RepeatedMessage) < 0 )
    operator delete(__p[0]);
LABEL_34:
  v22 = this[1];
  sub_10007A644(v134, *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)v5 = google::protobuf::DescriptorPool::Tables::AllocateString(v22, v134[0], v134[1]);
  v23 = this[1];
  if ( (*((_BYTE *)a2 + 16) & 2) != 0 )
  {
    sub_10007A644(v133, *((_QWORD *)a2 + 23) & 0xFFFFFFFFFFFFFFFELL);
    v25 = (const char *)v133[0];
    v24 = v133[1];
  }
  else
  {
    v24 = 0LL;
    v25 = "";
  }
  *(_QWORD *)(v5 + 8) = google::protobuf::DescriptorPool::Tables::AllocateString(v23, (__int64)v25, v24);
  *(_QWORD *)(v5 + 16) = *this;
  if ( (google::protobuf::DescriptorPool::Tables::AddFile(this[1], (char **)v5) & 1) != 0 )
  {
    v26 = *(_QWORD *)(v5 + 8);
    if ( *(char *)(v26 + 23) < 0 )
    {
      if ( !*(_QWORD *)(v26 + 8) )
      {
LABEL_44:
        v132[0] = 0LL;
        v132[1] = 0LL;
        v131 = v132;
        v27 = *((_DWORD *)a2 + 8);
        *(_DWORD *)(v5 + 32) = v27;
        *(_QWORD *)(v5 + 72) = google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 8 * v27);
        v124 = v7;
        if ( *((_BYTE *)*this + 41) )
        {
          *(_QWORD *)(v5 + 24) = google::protobuf::DescriptorPool::Tables::AllocateOnceDynamic(this[1]);
          v28 = (void *)google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 8 * *((_DWORD *)a2 + 8));
          *(_QWORD *)(v5 + 80) = v28;
          v29 = *((unsigned int *)a2 + 8);
          if ( (int)v29 >= 1 )
            bzero(v28, 8 * v29);
        }
        else
        {
          *(_QWORD *)(v5 + 24) = 0LL;
          *(_QWORD *)(v5 + 80) = 0LL;
        }
        sub_10002AC6C(this + 15, this[16]);
        this[15] = (google::protobuf::DescriptorPool::Tables *)(this + 16);
        this[16] = 0LL;
        this[17] = 0LL;
        v130[0] = 0LL;
        v130[1] = 0LL;
        v129 = v130;
        if ( *((int *)a2 + 40) >= 1 )
        {
          v30 = 0LL;
          do
          {
            LODWORD(__p[0]) = *(_DWORD *)(*((_QWORD *)a2 + 21) + 4 * v30);
            sub_10009D210(&v129, __p, __p);
            ++v30;
          }
          while ( v30 < *((int *)a2 + 40) );
        }
        if ( *((int *)a2 + 8) >= 1 )
        {
          for ( i = 0LL; i < *((int *)a2 + 8); ++i )
          {
            v32 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * i + 8);
            sub_10009D2CC(&v131, v32, v32);
            if ( (v33 & 1) == 0 )
              google::protobuf::DescriptorBuilder::AddTwiceListedError(
                (google::protobuf::DescriptorBuilder *)this,
                a2,
                i);
            v145[0] = 0LL;
            v34 = this[1];
            sub_10007A644(&v128, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * i + 8));
            *(_OWORD *)__p = v128;
            v35 = sub_100096644((char *)v34 + 344, __p);
            if ( v35 )
            {
              FileByName = *(void **)(v35 + 32);
              v145[0] = FileByName;
              if ( FileByName )
                goto LABEL_61;
            }
            else
            {
              v145[0] = 0LL;
            }
            v37 = *((_QWORD *)*this + 3);
            if ( !v37 )
            {
              if ( !v5 )
                goto LABEL_218;
LABEL_68:
              v38 = *this;
              if ( !*((_BYTE *)*this + 41) )
              {
                if ( *((_BYTE *)v38 + 42) )
                  goto LABEL_70;
                if ( *((_BYTE *)v38 + 43) )
                  goto LABEL_82;
                v39 = (__int64 *)v130[0];
                if ( !v130[0] )
                  goto LABEL_82;
                v40 = v130;
                do
                {
                  v41 = v39;
                  v42 = v40;
                  v43 = *((int *)v39 + 7);
                  if ( i <= v43 )
                    v40 = v39;
                  else
                    ++v39;
                  v39 = (__int64 *)*v39;
                }
                while ( v39 );
                if ( v40 == v130 )
                  goto LABEL_82;
                if ( i > v43 )
                  v41 = v42;
                if ( i >= *((int *)v41 + 7) )
                {
LABEL_70:
                  sub_10007A644(v127, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * i + 8));
                  v145[0] = (void *)google::protobuf::DescriptorPool::NewPlaceholderFileWithMutexHeld(
                                      (__int64)v38,
                                      v127[0],
                                      v127[1]);
                }
                else
                {
LABEL_82:
                  google::protobuf::DescriptorBuilder::AddImportError(
                    (google::protobuf::DescriptorBuilder *)this,
                    a2,
                    i);
                }
              }
              goto LABEL_83;
            }
            FileByName = (void *)google::protobuf::DescriptorPool::FindFileByName(
                                   v37,
                                   *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * i + 8));
            v145[0] = FileByName;
LABEL_61:
            if ( FileByName == (void *)v5 )
              goto LABEL_218;
            if ( !FileByName )
              goto LABEL_68;
            if ( *((_BYTE *)*this + 40)
              && (google::protobuf::DescriptorPool::Tables *)((char *)*this + 56) != (google::protobuf::DescriptorPool::Tables *)sub_100098054((char *)*this + 48, *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL)
              && !*((_DWORD *)v145[0] + 9) )
            {
              sub_10009C2CC(this + 15, v145, v145);
            }
LABEL_83:
            *(void **)(*(_QWORD *)(v5 + 72) + 8 * i) = v145[0];
            if ( *((_BYTE *)*this + 41) )
              v44 = v145[0] == 0LL;
            else
              v44 = 0;
            if ( v44 )
            {
              v45 = this[1];
              sub_10007A644(v126, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * i + 8));
              *(_QWORD *)(*(_QWORD *)(v5 + 80) + 8 * i) = google::protobuf::DescriptorPool::Tables::AllocateString(
                                                            v45,
                                                            v126[0],
                                                            v126[1]);
            }
          }
        }
        *(_QWORD *)(v5 + 88) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                                 this[1],
                                 4 * *((_DWORD *)a2 + 36));
        if ( *((int *)a2 + 36) < 1 )
        {
          v47 = 0;
        }
        else
        {
          v46 = 0LL;
          v47 = 0;
          do
          {
            v48 = *(_DWORD *)(*((_QWORD *)a2 + 19) + 4 * v46);
            if ( v48 < 0 || v48 >= *((_DWORD *)a2 + 8) )
            {
              google::protobuf::DescriptorBuilder::AddError(
                (__int64)this,
                *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL,
                (__int64)a2,
                10LL,
                "Invalid public dependency index.");
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(v5 + 88) + 4LL * v47) = v48;
              if ( !*((_BYTE *)*this + 41) )
              {
                __p[0] = (void *)google::protobuf::FileDescriptor::dependency(
                                   (google::protobuf::FileDescriptor *)v5,
                                   v48);
                sub_10009CBA8(this + 15, __p);
              }
              ++v47;
            }
            ++v46;
          }
          while ( v46 < *((int *)a2 + 36) );
        }
        *(_DWORD *)(v5 + 36) = v47;
        sub_10002AC6C(this + 12, this[13]);
        this[12] = (google::protobuf::DescriptorPool::Tables *)(this + 13);
        this[14] = 0LL;
        this[13] = 0LL;
        if ( !*((_BYTE *)*this + 41) && *(int *)(v5 + 32) >= 1 )
        {
          v49 = 0;
          do
          {
            v50 = (const google::protobuf::FileDescriptor *)google::protobuf::FileDescriptor::dependency(
                                                              (google::protobuf::FileDescriptor *)v5,
                                                              v49);
            google::protobuf::DescriptorBuilder::RecordPublicDependencies((google::protobuf::FileDescriptor *)this, v50);
            ++v49;
          }
          while ( v49 < *(_DWORD *)(v5 + 32) );
        }
        *(_QWORD *)(v5 + 96) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                                 this[1],
                                 4 * *((_DWORD *)a2 + 40));
        if ( *((int *)a2 + 40) < 1 )
        {
          v52 = 0;
        }
        else
        {
          v51 = 0LL;
          v52 = 0;
          do
          {
            v53 = *(_DWORD *)(*((_QWORD *)a2 + 21) + 4 * v51);
            if ( v53 < 0 || v53 >= *((_DWORD *)a2 + 8) )
              google::protobuf::DescriptorBuilder::AddError(
                (__int64)this,
                *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL,
                (__int64)a2,
                10LL,
                "Invalid weak dependency index.");
            else
              *(_DWORD *)(*(_QWORD *)(v5 + 96) + 4LL * v52++) = v53;
            ++v51;
          }
          while ( v51 < *((int *)a2 + 40) );
        }
        *(_DWORD *)(v5 + 40) = v52;
        v54 = *((_DWORD *)a2 + 14);
        *(_DWORD *)(v5 + 44) = v54;
        *(_QWORD *)(v5 + 104) = google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 144 * v54);
        if ( *((int *)a2 + 14) >= 1 )
        {
          v55 = 0LL;
          v56 = 0LL;
          do
          {
            google::protobuf::DescriptorBuilder::BuildMessage(
              (google::protobuf::DescriptorBuilder *)this,
              *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a2 + 8) + 8 * v56++ + 8),
              0LL,
              (google::protobuf::Descriptor *)(*(_QWORD *)(v5 + 104) + v55));
            v55 += 144LL;
          }
          while ( v56 < *((int *)a2 + 14) );
        }
        v57 = *((_DWORD *)a2 + 20);
        *(_DWORD *)(v5 + 48) = v57;
        *(_QWORD *)(v5 + 112) = google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 80 * v57);
        if ( *((int *)a2 + 20) >= 1 )
        {
          v58 = 0LL;
          v59 = 0LL;
          do
          {
            google::protobuf::DescriptorBuilder::BuildEnum(
              (google::protobuf::DescriptorBuilder *)this,
              *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)a2 + 11) + 8 * v59++ + 8),
              0LL,
              (google::protobuf::EnumDescriptor *)(*(_QWORD *)(v5 + 112) + v58));
            v58 += 80LL;
          }
          while ( v59 < *((int *)a2 + 20) );
        }
        v60 = *((_DWORD *)a2 + 26);
        *(_DWORD *)(v5 + 52) = v60;
        *(_QWORD *)(v5 + 120) = google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 48 * v60);
        if ( *((int *)a2 + 26) >= 1 )
        {
          v62 = 0LL;
          v63 = 0LL;
          do
          {
            google::protobuf::DescriptorBuilder::BuildService(
              (google::protobuf::DescriptorBuilder *)this,
              *(const google::protobuf::ServiceDescriptorProto **)(*((_QWORD *)a2 + 14) + 8 * v63++ + 8),
              v61,
              (google::protobuf::ServiceDescriptor *)(*(_QWORD *)(v5 + 120) + v62));
            v62 += 48LL;
          }
          while ( v63 < *((int *)a2 + 26) );
        }
        v64 = *((_DWORD *)a2 + 32);
        *(_DWORD *)(v5 + 56) = v64;
        *(_QWORD *)(v5 + 128) = google::protobuf::DescriptorPool::Tables::AllocateBytes(this[1], 152 * v64);
        if ( *((int *)a2 + 32) >= 1 )
        {
          v65 = 0LL;
          v66 = 0LL;
          do
          {
            google::protobuf::DescriptorBuilder::BuildFieldOrExtension(
              (google::protobuf::DescriptorBuilder *)this,
              *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a2 + 17) + 8 * v66++ + 8),
              0LL,
              (google::protobuf::FieldDescriptor *)(*(_QWORD *)(v5 + 128) + v65),
              1);
            v65 += 152LL;
          }
          while ( v66 < *((int *)a2 + 32) );
        }
        *(_QWORD *)(v5 + 136) = 0LL;
        if ( (*((_BYTE *)a2 + 16) & 8) != 0 )
          google::protobuf::DescriptorBuilder::AllocateOptions(
            (google::protobuf::DescriptorBuilder *)this,
            *((const google::protobuf::FileOptions **)a2 + 25),
            (google::protobuf::FileDescriptor *)v5);
        google::protobuf::DescriptorBuilder::CrossLinkFile(
          (google::protobuf::DescriptorBuilder *)this,
          (google::protobuf::FileDescriptor *)v5,
          a2);
        if ( *((_BYTE *)this + 48) )
        {
          v68 = 1;
          goto LABEL_213;
        }
        google::protobuf::DescriptorBuilder::OptionInterpreter::OptionInterpreter(
          (google::protobuf::DescriptorBuilder::OptionInterpreter *)__p,
          (google::protobuf::DescriptorBuilder *)this);
        v69 = this[3];
        if ( v69 == this[4] )
          goto LABEL_210;
        v125 = v5;
        while ( 1 )
        {
          v70 = (const google::protobuf::Message *)*((_QWORD *)v69 + 9);
          v71 = (google::protobuf::Message *)*((_QWORD *)v69 + 10);
          __p[1] = v69;
          v72 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v71 + 152LL))(v71);
          sub_10007A754((int)v145, "uninterpreted_option");
          FieldByName = google::protobuf::Descriptor::FindFieldByName(v72, (__int64)v145);
          v74 = (const google::protobuf::FieldDescriptor *)FieldByName;
          if ( SHIBYTE(v146) < 0 )
          {
            operator delete(v145[0]);
            if ( v74 )
              goto LABEL_137;
          }
          else if ( FieldByName )
          {
            goto LABEL_137;
          }
          google::protobuf::internal::LogMessage::LogMessage(
            v145,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/descriptor.cc",
            6397LL);
          v75 = google::protobuf::internal::LogMessage::operator<<(
                  v145,
                  "CHECK failed: uninterpreted_options_field != nullptr: ");
          v76 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                            v75,
                                                            "No field named \"uninterpreted_option\" in the Options proto.");
          google::protobuf::internal::LogFinisher::operator=((int)&v142, v76);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v145);
LABEL_137:
          (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v71 + 152LL))(v71);
          google::protobuf::Reflection::ClearField(v77, v71, v74);
          v142 = 0LL;
          v143 = 0LL;
          v144 = 0LL;
          sub_10009C708(&v142);
          v78 = *((_DWORD *)v74 + 17);
          v79 = v143;
          if ( (unsigned __int64)v143 >= v144 )
          {
            v81 = (char *)v142;
            v82 = (v143 - (_BYTE *)v142) >> 2;
            v83 = v82 + 1;
            if ( (unsigned __int64)(v82 + 1) >> 62 )
              sub_100097888(&v142);
            v84 = v144 - (_QWORD)v142;
            if ( (__int64)(v144 - (_QWORD)v142) >> 1 > v83 )
              v83 = v84 >> 1;
            if ( (unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFFCLL )
              v85 = 0x3FFFFFFFFFFFFFFFLL;
            else
              v85 = v83;
            if ( v85 )
            {
              v86 = sub_10009C294(&v144);
              v81 = (char *)v142;
              v79 = v143;
            }
            else
            {
              v86 = 0LL;
            }
            v87 = (char *)(v86 + 4 * v82);
            *(_DWORD *)v87 = v78;
            v80 = v87 + 4;
            while ( v79 != v81 )
            {
              v88 = *((_DWORD *)v79 - 1);
              v79 -= 4;
              *((_DWORD *)v87 - 1) = v88;
              v87 -= 4;
            }
            v142 = v87;
            v143 = v80;
            v144 = v86 + 4 * v85;
            if ( v81 )
              operator delete(v81);
          }
          else
          {
            *(_DWORD *)v143 = v78;
            v80 = v79 + 4;
          }
          v143 = v80;
          v89 = (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)v70 + 152LL))(v70);
          sub_10007A754((int)v145, "uninterpreted_option");
          v90 = google::protobuf::Descriptor::FindFieldByName(v89, (__int64)v145);
          v91 = (const google::protobuf::FieldDescriptor *)v90;
          if ( SHIBYTE(v146) < 0 )
          {
            operator delete(v145[0]);
            if ( v91 )
              goto LABEL_158;
          }
          else if ( v90 )
          {
            goto LABEL_158;
          }
          google::protobuf::internal::LogMessage::LogMessage(
            v145,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/descriptor.cc",
            6408LL);
          v92 = google::protobuf::internal::LogMessage::operator<<(
                  v145,
                  "CHECK failed: original_uninterpreted_options_field != nullptr: ");
          v93 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                            v92,
                                                            "No field named \"uninterpreted_option\" in the Options proto.");
          google::protobuf::internal::LogFinisher::operator=((int)v140, v93);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v145);
LABEL_158:
          (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)v70 + 152LL))(v70);
          v95 = google::protobuf::Reflection::FieldSize(v94, v70, v91);
          if ( v95 >= 1 )
          {
            v96 = 0;
            v97 = (int *)v143;
            while ( 1 )
            {
              if ( (unsigned __int64)v97 >= v144 )
              {
                v99 = (int *)v142;
                v100 = ((char *)v97 - (_BYTE *)v142) >> 2;
                v101 = v100 + 1;
                if ( (unsigned __int64)(v100 + 1) >> 62 )
                  sub_100097888(&v142);
                v102 = v144 - (_QWORD)v142;
                if ( (__int64)(v144 - (_QWORD)v142) >> 1 > v101 )
                  v101 = v102 >> 1;
                if ( (unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFFCLL )
                  v103 = 0x3FFFFFFFFFFFFFFFLL;
                else
                  v103 = v101;
                if ( v103 )
                {
                  v104 = sub_10009C294(&v144);
                  v99 = (int *)v142;
                  v97 = (int *)v143;
                }
                else
                {
                  v104 = 0LL;
                }
                v105 = (int *)(v104 + 4 * v100);
                *v105 = v96;
                v98 = (char *)(v105 + 1);
                while ( v97 != v99 )
                {
                  v106 = *--v97;
                  *--v105 = v106;
                }
                v142 = v105;
                v143 = v98;
                v144 = v104 + 4 * v103;
                if ( v99 )
                  operator delete(v99);
              }
              else
              {
                *v97 = v96;
                v98 = (char *)(v97 + 1);
              }
              v143 = v98;
              (*(void (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)v70 + 152LL))(v70);
              RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(v107, v70, v91, v96);
              if ( (google::protobuf::DescriptorBuilder::OptionInterpreter::InterpretSingleOption(
                      __p,
                      v71,
                      &v142,
                      (char *)v69 + 48) & 1) == 0 )
                break;
              v97 = (int *)(v143 - 4);
              v143 -= 4;
              if ( ++v96 == v95 )
                goto LABEL_178;
            }
            v5 = v125;
            __p[1] = 0LL;
            RepeatedMessage = 0LL;
            goto LABEL_203;
          }
LABEL_178:
          __p[1] = 0LL;
          RepeatedMessage = 0LL;
          v108 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v71 + 24LL))(v71);
          (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v71 + 152LL))(v71);
          v5 = v125;
          google::protobuf::Reflection::Swap(v109, v108, v71);
          v145[0] = 0LL;
          v145[1] = 0LL;
          v146 = 0LL;
          if ( !(unsigned int)google::protobuf::MessageLite::AppendToString(v108, v145)
            || (google::protobuf::MessageLite::ParseFromString(v71, v145) & 1) == 0 )
          {
            v110 = __p[0];
            google::protobuf::Message::ShortDebugString((__int64 *)&v137, v108);
            v111 = std::string::insert(
                     &v137,
                     0LL,
                     "Some options could not be correctly parsed using the proto descriptors compiled into this binary.\n"
                     "Unparsed options: ");
            v112 = *(_OWORD *)&v111->__r_.__value_.__l.__data_;
            v138.__r_.__value_.__r.__words[2] = v111->__r_.__value_.__r.__words[2];
            *(_OWORD *)&v138.__r_.__value_.__l.__data_ = v112;
            v111->__r_.__value_.__l.__size_ = 0LL;
            v111->__r_.__value_.__r.__words[2] = 0LL;
            v111->__r_.__value_.__r.__words[0] = 0LL;
            v113 = std::string::append(&v138, "\nParsing attempt:  ");
            v114 = *(_OWORD *)&v113->__r_.__value_.__l.__data_;
            v139.__r_.__value_.__r.__words[2] = v113->__r_.__value_.__r.__words[2];
            *(_OWORD *)&v139.__r_.__value_.__l.__data_ = v114;
            v113->__r_.__value_.__l.__size_ = 0LL;
            v113->__r_.__value_.__r.__words[2] = 0LL;
            v113->__r_.__value_.__r.__words[0] = 0LL;
            google::protobuf::Message::ShortDebugString((__int64 *)v135, v71);
            if ( (v136 & 0x80u) == 0 )
              v115 = v135;
            else
              v115 = (void **)v135[0];
            if ( (v136 & 0x80u) == 0 )
              v116 = v136;
            else
              v116 = (std::string::size_type)v135[1];
            v117 = std::string::append(&v139, (const std::string::value_type *)v115, v116);
            v118 = *(_OWORD *)&v117->__r_.__value_.__l.__data_;
            v141 = v117->__r_.__value_.__r.__words[2];
            *(_OWORD *)v140 = v118;
            v117->__r_.__value_.__l.__size_ = 0LL;
            v117->__r_.__value_.__r.__words[2] = 0LL;
            v117->__r_.__value_.__r.__words[0] = 0LL;
            google::protobuf::DescriptorBuilder::AddError(
              (__int64)v110,
              (__int64)v69 + 24,
              (__int64)v70,
              10LL,
              (__int64)v140);
            if ( SHIBYTE(v141) < 0 )
              operator delete(v140[0]);
            if ( (char)v136 < 0 )
              operator delete(v135[0]);
            if ( SHIBYTE(v139.__r_.__value_.__r.__words[2]) < 0 )
              operator delete(v139.__r_.__value_.__l.__data_);
            if ( SHIBYTE(v138.__r_.__value_.__r.__words[2]) < 0 )
              operator delete(v138.__r_.__value_.__l.__data_);
            if ( SHIBYTE(v137.__r_.__value_.__r.__words[2]) < 0 )
              operator delete(v137.__r_.__value_.__l.__data_);
            (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v71 + 152LL))(v71);
            google::protobuf::Reflection::Swap(v119, v108, v71);
          }
          if ( (SHIBYTE(v146) & 0x80000000) == 0 )
          {
            if ( !v108 )
              goto LABEL_203;
LABEL_202:
            (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)v108 + 8LL))(v108);
            goto LABEL_203;
          }
          operator delete(v145[0]);
          if ( v108 )
            goto LABEL_202;
LABEL_203:
          if ( v142 )
          {
            v143 = (char *)v142;
            operator delete(v142);
          }
          v69 = (google::protobuf::DescriptorPool::Tables *)((char *)v69 + 88);
          if ( v69 == this[4] )
          {
            v120 = this[3];
            while ( v69 != v120 )
            {
              v69 = (google::protobuf::DescriptorPool::Tables *)((char *)v69 - 88);
              sub_10009CAEC(v69);
            }
            v69 = v120;
LABEL_210:
            this[4] = v69;
            if ( v124 )
              google::protobuf::DescriptorBuilder::OptionInterpreter::UpdateSourceCodeInfo(
                (google::protobuf::DescriptorBuilder::OptionInterpreter *)__p,
                v124);
            google::protobuf::DescriptorBuilder::OptionInterpreter::~OptionInterpreter((google::protobuf::DescriptorBuilder::OptionInterpreter *)__p);
            v68 = *((unsigned __int8 *)this + 48);
            if ( *((_BYTE *)this + 48) )
            {
LABEL_213:
              if ( *((int *)a2 + 14) >= 1 )
              {
                v121 = 0LL;
                v122 = 0LL;
                do
                {
                  google::protobuf::DescriptorBuilder::DetectMapConflicts(
                    (google::protobuf::DescriptorBuilder *)this,
                    (const google::protobuf::Descriptor *)(*(_QWORD *)(v5 + 104) + v121),
                    *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a2 + 8) + 8 * v122++ + 8));
                  v121 += 144LL;
                }
                while ( v122 < *((int *)a2 + 14) );
                v68 = *((unsigned __int8 *)this + 48);
              }
              goto LABEL_217;
            }
            if ( *((_BYTE *)*this + 41) )
              goto LABEL_233;
            google::protobuf::DescriptorBuilder::ValidateFileOptions(
              (google::protobuf::DescriptorBuilder *)this,
              (google::protobuf::FileDescriptor *)v5,
              a2);
            v68 = *((unsigned __int8 *)this + 48);
            if ( *((_BYTE *)this + 48) )
              goto LABEL_213;
LABEL_217:
            if ( !v68 )
            {
LABEL_233:
              if ( !this[17]
                || *((_BYTE *)*this + 41)
                || (google::protobuf::DescriptorBuilder::LogUnusedDependency(
                      (google::protobuf::DescriptorBuilder *)this,
                      a2,
                      v67),
                    !*((_BYTE *)this + 48)) )
              {
LABEL_219:
                sub_10002AC6C(&v129, v130[0]);
                sub_10009BDBC(&v131, v132[0]);
                return v5;
              }
            }
LABEL_218:
            v5 = 0LL;
            goto LABEL_219;
          }
        }
      }
    }
    else if ( !*(_BYTE *)(v26 + 23) )
    {
      goto LABEL_44;
    }
    google::protobuf::DescriptorBuilder::AddPackage((__int64)this, (std::string *)v26, (__int64)a2, v5);
    goto LABEL_44;
  }
  google::protobuf::DescriptorBuilder::AddError(
    (__int64)this,
    *((_QWORD *)a2 + 22) & 0xFFFFFFFFFFFFFFFELL,
    (__int64)a2,
    10LL,
    "A file with this name is already in the pool.");
  return 0LL;
}