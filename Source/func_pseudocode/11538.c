__ZN6google8protobuf8internal12ExtensionSet26InternalExtensionMergeFromEiRKNS2_9ExtensionE
void __fastcall google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int **a3)
{
  int *v6; // x23
  __int64 v7; // x0
  char v8; // w1
  google::protobuf::internal::RepeatedPtrFieldBase **v9; // x20
  int *v10; // x21
  int v11; // w8
  google::protobuf::internal::RepeatedPtrFieldBase *v12; // x19
  __int64 v13; // x20
  int v14; // w20
  int v15; // w23
  int *v16; // x19
  __int64 v17; // x0
  char v18; // w1
  int *v19; // x21
  int v20; // w8
  google::protobuf::internal::RepeatedPtrFieldBase *v21; // x19
  __int64 v22; // x20
  int v23; // w8
  int v24; // w8
  int v25; // w8
  __int64 v26; // x9
  void *v27; // x0
  const void *v28; // x1
  size_t v29; // x2
  int v30; // w8
  __int64 v31; // x9
  int *v32; // x21
  int v33; // w8
  google::protobuf::internal::RepeatedPtrFieldBase *v34; // x19
  __int64 v35; // x20
  __int64 v36; // x9
  int *v37; // x8
  __int64 v38; // x19
  google::protobuf::internal::RepeatedPtrFieldBase *v39; // x20
  __int64 v40; // x21
  __int64 v41; // x0
  int *v42; // x8
  int v43; // w10
  int v44; // w9
  int *v45; // x23
  __int64 v46; // x24
  __int64 v47; // x19
  google::protobuf::internal::RepeatedPtrFieldBase *v48; // x8
  _DWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x22
  int *v52; // x23
  int *v53; // x19
  __int64 v54; // x0
  char v55; // w1
  int *v56; // d8
  int *v57; // x19
  __int64 v58; // x0
  char v59; // w1
  int v60; // s8
  int *v61; // x19
  __int64 v62; // x0
  char v63; // w1
  char v64; // w23
  int *v65; // x19
  __int64 v66; // x0
  char v67; // w1
  int *v68; // x23
  __int64 *v69; // x0
  __int64 *v70; // x20
  char v71; // w1
  char v72; // w8
  __int64 v73; // x0
  __int128 *v74; // x8
  __int128 v75; // q0
  __int64 *v76; // x21
  __int64 v77; // x1
  __int64 v78; // x16
  __int64 v79; // x0
  void *__p[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v81; // [xsp+10h] [xbp-50h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( !*((_BYTE *)a3 + 9) )
  {
    if ( (*((_BYTE *)a3 + 10) & 1) != 0 )
      return;
    v14 = *((unsigned __int8 *)a3 + 8);
    switch ( *((_BYTE *)a3 + 8) )
    {
      case 1:
        v56 = *a3;
        v57 = a3[2];
        v58 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
        *(_QWORD *)(v58 + 16) = v57;
        if ( v59 )
        {
          *(_BYTE *)(v58 + 8) = v14;
          *(_BYTE *)(v58 + 9) = 0;
        }
        *(_BYTE *)(v58 + 10) &= 0xF0u;
        *(_QWORD *)v58 = v56;
        return;
      case 2:
        v60 = *(_DWORD *)a3;
        v61 = a3[2];
        v62 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
        *(_QWORD *)(v62 + 16) = v61;
        if ( v63 )
        {
          *(_BYTE *)(v62 + 8) = v14;
          *(_BYTE *)(v62 + 9) = 0;
        }
        *(_BYTE *)(v62 + 10) &= 0xF0u;
        *(_DWORD *)v62 = v60;
        return;
      case 3:
      case 4:
      case 6:
      case 0x10:
      case 0x12:
        v52 = *a3;
        v53 = a3[2];
        v54 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
        *(_QWORD *)(v54 + 16) = v53;
        if ( v55 )
        {
          *(_BYTE *)(v54 + 8) = v14;
          *(_BYTE *)(v54 + 9) = 0;
        }
        *(_BYTE *)(v54 + 10) &= 0xF0u;
        *(_QWORD *)v54 = v52;
        return;
      case 5:
      case 7:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
        v15 = *(_DWORD *)a3;
        v16 = a3[2];
        v17 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
        *(_QWORD *)(v17 + 16) = v16;
        if ( v18 )
        {
          *(_BYTE *)(v17 + 8) = v14;
          *(_BYTE *)(v17 + 9) = 0;
        }
        *(_BYTE *)(v17 + 10) &= 0xF0u;
        *(_DWORD *)v17 = v15;
        return;
      case 8:
        v64 = *(_BYTE *)a3;
        v65 = a3[2];
        v66 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
        *(_QWORD *)(v66 + 16) = v65;
        if ( v67 )
        {
          *(_BYTE *)(v66 + 8) = v14;
          *(_BYTE *)(v66 + 9) = 0;
        }
        *(_BYTE *)(v66 + 10) &= 0xF0u;
        *(_BYTE *)v66 = v64;
        return;
      case 9:
      case 0xC:
        v74 = (__int128 *)*a3;
        if ( *((char *)*a3 + 23) < 0 )
        {
          sub_10007A474(__p, *(void **)v74);
        }
        else
        {
          v75 = *v74;
          v81 = *((_QWORD *)v74 + 2);
          *(_OWORD *)__p = v75;
        }
        sub_1000C3E94((int)this, a2, v14, (int)__p, (google::protobuf::FieldDescriptor *)a3[2]);
        if ( SHIBYTE(v81) < 0 )
          operator delete(__p[0]);
        return;
      case 0xA:
      case 0xB:
        v68 = a3[2];
        v69 = (__int64 *)google::protobuf::internal::ExtensionSet::Insert(this, a2);
        v70 = v69;
        v69[2] = (__int64)v68;
        if ( v71 )
        {
          *((_BYTE *)v69 + 8) = *((_BYTE *)a3 + 8);
          *((_BYTE *)v69 + 11) = *((_BYTE *)a3 + 11);
          *((_BYTE *)v69 + 9) = 0;
          v72 = *((_BYTE *)v69 + 10) & 0xF;
          if ( (*((_BYTE *)a3 + 10) & 0x10) != 0 )
          {
            *((_BYTE *)v69 + 10) = v72 | 0x10;
            v79 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)*a3 + 16LL))(*a3, *(_QWORD *)this);
            *v70 = v79;
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v79 + 104LL))(v79, *a3);
            goto LABEL_87;
          }
          *((_BYTE *)v69 + 10) = v72;
          v73 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)*a3 + 32LL))(*a3, *(_QWORD *)this);
          *v70 = v73;
LABEL_78:
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v73 + 64LL))(v73, *a3);
LABEL_87:
          *((_BYTE *)v70 + 10) &= 0xF0u;
          return;
        }
        v76 = (__int64 *)*v69;
        v77 = (__int64)*a3;
        if ( (*((_BYTE *)a3 + 10) & 0x10) != 0 )
        {
          if ( (*((_BYTE *)v69 + 10) & 0x10) != 0 )
          {
            (*(void (__fastcall **)(__int64, __int64))(*v76 + 104))(*v69, v77);
            goto LABEL_87;
          }
          v77 = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)v77 + 24LL))(*a3, *v69);
          v78 = *v76;
        }
        else
        {
          v78 = *v76;
          if ( (*((_BYTE *)v69 + 10) & 0x10) != 0 )
          {
            v73 = (*(__int64 (__fastcall **)(__int64, __int64))(v78 + 32))(*v69, v77);
            goto LABEL_78;
          }
        }
        (*(void (__fastcall **)(__int64 *, __int64))(v78 + 64))(v76, v77);
        goto LABEL_87;
      default:
        return;
    }
  }
  v6 = a3[2];
  v7 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v9 = (google::protobuf::internal::RepeatedPtrFieldBase **)v7;
  *(_QWORD *)(v7 + 16) = v6;
  if ( v8 )
  {
    *(_BYTE *)(v7 + 8) = *((_BYTE *)a3 + 8);
    *(_BYTE *)(v7 + 11) = *((_BYTE *)a3 + 11);
    *(_BYTE *)(v7 + 9) = 1;
  }
  switch ( *((_BYTE *)a3 + 8) )
  {
    case 1:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C83B0(*(_QWORD *)this);
      v19 = *a3;
      v25 = **a3;
      if ( v25 )
      {
        v21 = *v9;
        v22 = *(int *)*v9;
        google::protobuf::RepeatedField<double>::Reserve(v21, (unsigned int)(v22 + v25));
        goto LABEL_30;
      }
      break;
    case 2:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C8288(*(_QWORD *)this);
      v10 = *a3;
      v30 = **a3;
      if ( v30 )
      {
        v12 = *v9;
        v13 = *(int *)*v9;
        google::protobuf::RepeatedField<float>::Reserve(v12, (unsigned int)(v13 + v30));
        goto LABEL_35;
      }
      break;
    case 3:
    case 0x10:
    case 0x12:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C7F10(*(_QWORD *)this);
      v19 = *a3;
      v20 = **a3;
      if ( v20 )
      {
        v21 = *v9;
        v22 = *(int *)*v9;
        google::protobuf::RepeatedField<long long>::Reserve(v21, (unsigned int)(v22 + v20));
        goto LABEL_30;
      }
      break;
    case 4:
    case 6:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C8160(*(_QWORD *)this);
      v19 = *a3;
      v24 = **a3;
      if ( v24 )
      {
        v21 = *v9;
        v22 = *(int *)*v9;
        google::protobuf::RepeatedField<unsigned long long>::Reserve(v21, (unsigned int)(v22 + v24));
LABEL_30:
        v26 = *((_QWORD *)v21 + 1);
        *(_DWORD *)v21 += *v19;
        v27 = (void *)(v26 + 8 * v22);
        v28 = (const void *)*((_QWORD *)v19 + 1);
        v29 = 8LL * *v19;
        goto LABEL_40;
      }
      break;
    case 5:
    case 0xE:
    case 0xF:
    case 0x11:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C7DE8(*(_QWORD *)this);
      v10 = *a3;
      v11 = **a3;
      if ( v11 )
      {
        v12 = *v9;
        v13 = *(int *)*v9;
        google::protobuf::RepeatedField<int>::Reserve(v12, (unsigned int)(v13 + v11));
        goto LABEL_35;
      }
      break;
    case 7:
    case 0xD:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C8038(*(_QWORD *)this);
      v10 = *a3;
      v23 = **a3;
      if ( v23 )
      {
        v12 = *v9;
        v13 = *(int *)*v9;
        google::protobuf::RepeatedField<unsigned int>::Reserve(v12, (unsigned int)(v13 + v23));
LABEL_35:
        v31 = *((_QWORD *)v12 + 1);
        *(_DWORD *)v12 += *v10;
        v27 = (void *)(v31 + 4 * v13);
        v28 = (const void *)*((_QWORD *)v10 + 1);
        v29 = 4LL * *v10;
        goto LABEL_40;
      }
      break;
    case 8:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C84D8(*(_QWORD *)this);
      v32 = *a3;
      v33 = **a3;
      if ( v33 )
      {
        v34 = *v9;
        v35 = *(int *)*v9;
        google::protobuf::RepeatedField<bool>::Reserve(v34, (unsigned int)(v35 + v33));
        v36 = *((_QWORD *)v34 + 1);
        *(_DWORD *)v34 += *v32;
        v27 = (void *)(v36 + v35);
        v28 = (const void *)*((_QWORD *)v32 + 1);
        v29 = *v32;
LABEL_40:
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        memcpy(v27, v28, v29);
      }
      break;
    case 9:
    case 0xC:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C8600(*(_QWORD *)this);
      v37 = *a3;
      v38 = (unsigned int)(*a3)[2];
      if ( (_DWORD)v38 )
      {
        v39 = *v9;
        v40 = *((_QWORD *)v37 + 2) + 8LL;
        v41 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(v39, v38);
        sub_1000B8CB4(v39, v41, v40, v38, (unsigned int)(**((_DWORD **)v39 + 2) - *((_DWORD *)v39 + 2)));
        v42 = (int *)*((_QWORD *)v39 + 2);
        v43 = *v42;
        v44 = *((_DWORD *)v39 + 2) + v38;
        *((_DWORD *)v39 + 2) = v44;
        if ( v43 < v44 )
          *v42 = v44;
      }
      break;
    case 0xA:
    case 0xB:
      if ( v8 )
        *(_QWORD *)v7 = sub_1000C8730(*(_QWORD *)this);
      v45 = *a3;
      if ( (*a3)[2] >= 1 )
      {
        v46 = 0LL;
        do
        {
          v47 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 8 * v46 + 8);
          v48 = *v9;
          v49 = (_DWORD *)*((_QWORD *)*v9 + 2);
          if ( !v49
            || (v50 = *((int *)v48 + 2), (int)v50 >= *v49)
            || (*((_DWORD *)v48 + 2) = v50 + 1, (v51 = *(_QWORD *)&v49[2 * v50 + 2]) == 0) )
          {
            v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 32LL))(v47, *(_QWORD *)this);
            sub_1000C8848(*v9, v51);
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 64LL))(v51, v47);
          ++v46;
        }
        while ( v46 < v45[2] );
      }
      break;
    default:
      return;
  }
}