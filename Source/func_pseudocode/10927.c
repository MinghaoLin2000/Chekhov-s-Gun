__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter20UpdateSourceCodeInfoEPNS0_14SourceCodeInfoE
__int64 __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::UpdateSourceCodeInfo(
        __int64 this,
        google::protobuf::SourceCodeInfo *a2)
{
  google::protobuf::SourceCodeInfo *v2; // x20
  char v3; // w24
  char v4; // w8
  __int64 v5; // x9
  const google::protobuf::SourceCodeInfo_Location **v6; // x27
  char *v7; // x9
  unsigned __int64 v8; // x10
  const google::protobuf::SourceCodeInfo_Location *v9; // x8
  __int64 v10; // x23
  int v11; // w25
  char *v12; // x26
  char *v13; // x0
  __int64 v14; // x26
  unsigned __int64 v15; // x10
  __int64 v16; // x8
  __int64 v17; // x1
  __int64 v18; // x8
  char *v19; // x10
  int v20; // t1
  __int64 v21; // x23
  _DWORD *v22; // x8
  __int64 v23; // x10
  int v24; // w9
  __int64 v25; // x24
  const google::protobuf::SourceCodeInfo_Location *v26; // x23
  _DWORD *v27; // x8
  __int64 v28; // x10
  int v29; // w9
  google::protobuf::SourceCodeInfo_Location *v30; // x0
  __int64 v31; // x8
  const google::protobuf::SourceCodeInfo_Location **v32; // x25
  const google::protobuf::SourceCodeInfo_Location *v33; // x24
  _DWORD *v34; // x8
  __int64 v35; // x10
  int v36; // w9
  google::protobuf::SourceCodeInfo_Location *v37; // x0
  __int64 v38; // x9
  int *v39; // x8
  int *v40; // x11
  int v41; // w12
  int v42; // t1
  int v43; // t1
  __int64 v44; // x9
  int *v45; // x8
  int *v46; // x28
  unsigned int v47; // w26
  int v48; // w20
  __int64 v49; // x9
  __int64 v50; // x9
  __int64 v51; // x11
  __int64 v52; // x10
  __int64 v53; // x19
  google::protobuf::SourceCodeInfo_Location **v54; // x20
  __int64 v55; // x21
  _DWORD *v56; // x19
  __int64 v57; // x0
  int v58; // w8
  _DWORD *v59; // x9
  google::protobuf::internal::RepeatedPtrFieldBase *v60; // [xsp+0h] [xbp-A0h]
  __int64 v62; // [xsp+10h] [xbp-90h]
  __int64 v63; // [xsp+18h] [xbp-88h]
  void *__p; // [xsp+20h] [xbp-80h] BYREF
  char *v65; // [xsp+28h] [xbp-78h]
  unsigned __int64 v66; // [xsp+30h] [xbp-70h] BYREF
  __int64 v67; // [xsp+38h] [xbp-68h] BYREF
  int v68[2]; // [xsp+40h] [xbp-60h]
  _DWORD *v69; // [xsp+48h] [xbp-58h]

  if ( !*(_QWORD *)(this + 40) )
    return this;
  v2 = a2;
  v67 = 0LL;
  *(_QWORD *)v68 = 0LL;
  v69 = 0LL;
  __p = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !*((_DWORD *)a2 + 6) )
    goto LABEL_86;
  v3 = 0;
  v4 = 0;
  v60 = (google::protobuf::SourceCodeInfo *)((char *)a2 + 16);
  v5 = *((_QWORD *)a2 + 4);
  if ( v5 )
    v6 = (const google::protobuf::SourceCodeInfo_Location **)(v5 + 8);
  else
    v6 = 0LL;
  v62 = this + 32;
  v63 = this + 24;
  do
  {
    v7 = (char *)__p;
    if ( (v4 & 1) != 0 )
    {
      v8 = (v65 - (_BYTE *)__p) >> 2;
      if ( v8 <= *((int *)*v6 + 6) )
      {
        if ( v65 == __p )
        {
LABEL_55:
          v4 = 1;
          goto LABEL_74;
        }
        v39 = (int *)*((_QWORD *)*v6 + 4);
        if ( v8 <= 1 )
          v8 = 1LL;
        v40 = (int *)__p;
        while ( 1 )
        {
          v42 = *v39++;
          v41 = v42;
          v43 = *v40++;
          if ( v41 != v43 )
            break;
          if ( !--v8 )
            goto LABEL_55;
        }
      }
    }
    v65 = (char *)__p;
    v9 = *v6;
    if ( *((int *)*v6 + 6) >= 1 )
    {
      v10 = 0LL;
      do
      {
        v11 = *(_DWORD *)(*((_QWORD *)v9 + 4) + 4 * v10);
        if ( (unsigned __int64)v7 >= v66 )
        {
          v13 = (char *)__p;
          v14 = (v7 - (_BYTE *)__p) >> 2;
          v15 = v14 + 1;
          if ( (unsigned __int64)(v14 + 1) >> 62 )
            sub_100097888(&__p);
          v16 = v66 - (_QWORD)__p;
          if ( (__int64)(v66 - (_QWORD)__p) >> 1 > v15 )
            v15 = v16 >> 1;
          if ( (unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFFCLL )
            v17 = 0x3FFFFFFFFFFFFFFFLL;
          else
            v17 = v15;
          if ( v17 )
          {
            v18 = sub_10009C294(&v66);
            v13 = (char *)__p;
            v7 = v65;
          }
          else
          {
            v18 = 0LL;
          }
          v19 = (char *)(v18 + 4 * v14);
          *(_DWORD *)v19 = v11;
          v12 = v19 + 4;
          while ( v7 != v13 )
          {
            v20 = *((_DWORD *)v7 - 1);
            v7 -= 4;
            *((_DWORD *)v19 - 1) = v20;
            v19 -= 4;
          }
          __p = v19;
          v65 = v12;
          v66 = v18 + 4 * v17;
          if ( v13 )
            operator delete(v13);
        }
        else
        {
          *(_DWORD *)v7 = v11;
          v12 = v7 + 4;
        }
        v65 = v12;
        ++v10;
        v9 = *v6;
        v7 = v12;
      }
      while ( v10 < *((int *)*v6 + 6) );
    }
    v21 = sub_10009FC8C(v63, &__p);
    if ( v62 == v21 )
    {
      if ( (v3 & 1) == 0 )
      {
        v4 = 0;
        v3 = 0;
        goto LABEL_74;
      }
      v26 = *v6;
      v27 = v69;
      if ( v69 )
      {
        v28 = v68[0];
        v29 = *v69;
        if ( v68[0] < *v69 )
        {
          ++v68[0];
          v30 = *(google::protobuf::SourceCodeInfo_Location **)&v69[2 * v28 + 2];
LABEL_73:
          google::protobuf::SourceCodeInfo_Location::CopyFrom(v30, v26);
          v4 = 0;
          v3 = 1;
          goto LABEL_74;
        }
        if ( v29 != v68[1] )
        {
LABEL_72:
          *v27 = v29 + 1;
          v30 = (google::protobuf::SourceCodeInfo_Location *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceCodeInfo_Location>(v67);
          v49 = v68[0]++;
          *(_QWORD *)&v69[2 * v49 + 2] = v30;
          goto LABEL_73;
        }
      }
      else
      {
        v29 = v68[1];
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        (google::protobuf::internal::RepeatedPtrFieldBase *)&v67,
        v29 + 1);
      v27 = v69;
      v29 = *v69;
      goto LABEL_72;
    }
    if ( (v3 & 1) == 0 )
    {
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        (google::protobuf::internal::RepeatedPtrFieldBase *)&v67,
        *((_DWORD *)v2 + 6));
      v31 = *((_QWORD *)v2 + 4);
      if ( v31 )
        v32 = (const google::protobuf::SourceCodeInfo_Location **)(v31 + 8);
      else
        v32 = 0LL;
      while ( 1 )
      {
        if ( v32 == v6 )
          goto LABEL_30;
        v33 = *v32;
        v34 = v69;
        if ( !v69 )
          break;
        v35 = v68[0];
        v36 = *v69;
        if ( v68[0] < *v69 )
        {
          ++v68[0];
          v37 = *(google::protobuf::SourceCodeInfo_Location **)&v69[2 * v35 + 2];
          goto LABEL_48;
        }
        if ( v36 == v68[1] )
          goto LABEL_46;
LABEL_47:
        *v34 = v36 + 1;
        v37 = (google::protobuf::SourceCodeInfo_Location *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceCodeInfo_Location>(v67);
        v38 = v68[0]++;
        *(_QWORD *)&v69[2 * v38 + 2] = v37;
LABEL_48:
        google::protobuf::SourceCodeInfo_Location::CopyFrom(v37, v33);
        ++v32;
      }
      v36 = v68[1];
LABEL_46:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        (google::protobuf::internal::RepeatedPtrFieldBase *)&v67,
        v36 + 1);
      v34 = v69;
      v36 = *v69;
      goto LABEL_47;
    }
LABEL_30:
    v22 = v69;
    if ( !v69 )
    {
      v24 = v68[1];
LABEL_58:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        (google::protobuf::internal::RepeatedPtrFieldBase *)&v67,
        v24 + 1);
      v22 = v69;
      v24 = *v69;
      goto LABEL_59;
    }
    v23 = v68[0];
    v24 = *v69;
    if ( v68[0] < *v69 )
    {
      ++v68[0];
      v25 = *(_QWORD *)&v69[2 * v23 + 2];
      goto LABEL_60;
    }
    if ( v24 == v68[1] )
      goto LABEL_58;
LABEL_59:
    *v22 = v24 + 1;
    v25 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::SourceCodeInfo_Location>(v67);
    v44 = v68[0]++;
    *(_QWORD *)&v69[2 * v44 + 2] = v25;
LABEL_60:
    google::protobuf::SourceCodeInfo_Location::CopyFrom((google::protobuf::SourceCodeInfo_Location *)v25, *v6);
    *(_DWORD *)(v25 + 24) = 0;
    v46 = *(int **)(v21 + 56);
    v45 = *(int **)(v21 + 64);
    if ( v46 == v45 )
    {
      v4 = 1;
      v3 = 1;
    }
    else
    {
      v47 = 0;
      do
      {
        v48 = *v46;
        if ( v47 == *(_DWORD *)(v25 + 28) )
        {
          google::protobuf::RepeatedField<int>::Reserve(v25 + 24, v47 + 1);
          *(_DWORD *)(*(_QWORD *)(v25 + 32) + 4LL * v47) = v48;
          v45 = *(int **)(v21 + 64);
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v25 + 32) + 4LL * v47) = v48;
        }
        *(_DWORD *)(v25 + 24) = ++v47;
        ++v46;
      }
      while ( v46 != v45 );
      v4 = 1;
      v3 = 1;
      v2 = a2;
    }
LABEL_74:
    ++v6;
    v50 = *((_QWORD *)v2 + 4);
    if ( v50 )
      v51 = v50 + 8;
    else
      v51 = 0LL;
    v52 = *((int *)v2 + 6);
  }
  while ( v6 != (const google::protobuf::SourceCodeInfo_Location **)(v51 + 8 * v52) );
  if ( ((v60 != (google::protobuf::internal::RepeatedPtrFieldBase *)&v67) & (unsigned __int8)v3) != 0 )
  {
    v53 = *((unsigned int *)v2 + 6);
    if ( (int)v52 >= 1 )
    {
      v54 = (google::protobuf::SourceCodeInfo_Location **)(v50 + 8);
      do
      {
        google::protobuf::SourceCodeInfo_Location::Clear(*v54++);
        --v53;
      }
      while ( v53 );
      v2 = a2;
      *((_DWORD *)a2 + 6) = 0;
    }
    v55 = (unsigned int)v68[0];
    if ( v68[0] )
    {
      v56 = v69;
      v57 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(v60, v68[0]);
      sub_10009FD70(v60, v57, v56 + 2, v55, (unsigned int)(**((_DWORD **)v2 + 4) - *((_DWORD *)v2 + 6)));
      v58 = *((_DWORD *)v2 + 6) + v55;
      *((_DWORD *)v2 + 6) = v58;
      v59 = (_DWORD *)*((_QWORD *)v2 + 4);
      if ( *v59 < v58 )
        *v59 = v58;
    }
  }
LABEL_86:
  if ( __p )
  {
    v65 = (char *)__p;
    operator delete(__p);
  }
  return sub_10009FC0C(&v67);
}