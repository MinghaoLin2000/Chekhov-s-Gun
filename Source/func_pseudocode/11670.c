__ZNK6google8protobuf10Reflection27ListFieldsMayFailOnStrippedERKNS0_7MessageEbPNSt3__16vectorIPKNS0_15FieldDescriptorENS5_9allocatorIS9_EEEE
__int64 __fastcall google::protobuf::Reflection::ListFieldsMayFailOnStripped(
        __int64 result,
        const google::protobuf::Message *a2,
        __int64 a3,
        char **a4)
{
  __int64 v6; // x20
  __int64 v7; // x24
  char *v8; // x8
  __int64 v9; // x26
  __int64 v10; // x27
  __int64 v11; // x8
  __int64 v12; // x23
  unsigned __int64 v13; // x8
  char *v14; // x25
  __int64 v15; // x25
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x9
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x8
  __int64 v23; // x25
  __int64 v24; // x8
  __int64 v25; // x9
  unsigned __int64 v26; // x8
  __int64 v27; // x25
  __int64 v28; // x8
  __int64 v29; // x9
  unsigned __int64 v30; // x8
  char *v31; // x25
  char *v32; // x9
  char *v33; // x8
  char *v34; // x10
  __int64 v35; // t1
  __int64 v36; // x25
  __int64 v37; // x8
  __int64 v38; // x9
  char *v39; // x10
  __int64 v40; // t1
  char *v41; // x10
  __int64 v42; // t1
  char *v43; // x10
  __int64 v44; // t1
  __int64 v46; // x8
  char *v47; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  a4[1] = *a4;
  if ( *(const google::protobuf::Message **)(result + 8) != a2 )
  {
    v6 = result;
    v7 = *(unsigned int *)(result + 32);
    v8 = (char *)a2 + v7;
    if ( (_DWORD)v7 == -1 )
      v8 = 0LL;
    v47 = v8;
    v9 = *(_QWORD *)(result + 24);
    sub_1000D9360(a4, *(int *)(*(_QWORD *)result + 104LL));
    if ( (*(_DWORD *)(v6 + 72) & 0x80000000) == 0 )
    {
      v10 = 0LL;
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
        v12 = v11 + 152 * v10;
        if ( *(_DWORD *)(v12 + 60) == 3 )
        {
          if ( (int)google::protobuf::Reflection::FieldSize(
                      (google::protobuf::Reflection *)v6,
                      a2,
                      (const google::protobuf::FieldDescriptor *)(v11 + 152 * v10)) >= 1 )
          {
            v14 = a4[1];
            v13 = (unsigned __int64)a4[2];
            if ( (unsigned __int64)v14 < v13 )
              goto LABEL_44;
            v15 = (v14 - *a4) >> 3;
            if ( (unsigned __int64)(v15 + 1) >> 61 )
              goto LABEL_79;
            v16 = v13 - (_QWORD)*a4;
            v17 = v16 >> 2;
            if ( v16 >> 2 <= (unsigned __int64)(v15 + 1) )
              v17 = v15 + 1;
            if ( (unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL )
              v18 = 0x1FFFFFFFFFFFFFFFLL;
            else
              v18 = v17;
            if ( v18 )
              v19 = sub_10009A09C(a4 + 2);
            else
              v19 = 0LL;
            v32 = (char *)(v19 + 8 * v15);
            *(_QWORD *)v32 = v12;
            v31 = v32 + 8;
            v34 = *a4;
            v33 = a4[1];
            if ( v33 != *a4 )
            {
              do
              {
                v35 = *((_QWORD *)v33 - 1);
                v33 -= 8;
                *((_QWORD *)v32 - 1) = v35;
                v32 -= 8;
              }
              while ( v33 != v34 );
              goto LABEL_68;
            }
            goto LABEL_69;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v11 + 152 * v10 + 88);
          if ( !v20 || *(_DWORD *)(v20 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v20 + 32) + 65LL) )
          {
            if ( (_DWORD)v7 == -1 || (v21 = *(unsigned int *)(v9 + 4 * v10), (_DWORD)v21 == -1) )
            {
              if ( (unsigned int)sub_1000D8808(v6, a2, v12) )
              {
                v14 = a4[1];
                v30 = (unsigned __int64)a4[2];
                if ( (unsigned __int64)v14 < v30 )
                {
LABEL_44:
                  *(_QWORD *)v14 = v12;
                  v31 = v14 + 8;
LABEL_71:
                  a4[1] = v31;
                  continue;
                }
                v36 = (v14 - *a4) >> 3;
                if ( (unsigned __int64)(v36 + 1) >> 61 )
LABEL_79:
                  sub_100097888(a4);
                v37 = v30 - (_QWORD)*a4;
                v38 = v37 >> 2;
                if ( v37 >> 2 <= (unsigned __int64)(v36 + 1) )
                  v38 = v36 + 1;
                if ( (unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL )
                  v18 = 0x1FFFFFFFFFFFFFFFLL;
                else
                  v18 = v38;
                if ( v18 )
                  v19 = sub_10009A09C(a4 + 2);
                else
                  v19 = 0LL;
                v32 = (char *)(v19 + 8 * v36);
                *(_QWORD *)v32 = v12;
                v31 = v32 + 8;
                v41 = *a4;
                v33 = a4[1];
                if ( v33 != *a4 )
                {
                  do
                  {
                    v42 = *((_QWORD *)v33 - 1);
                    v33 -= 8;
                    *((_QWORD *)v32 - 1) = v42;
                    v32 -= 8;
                  }
                  while ( v33 != v41 );
                  goto LABEL_68;
                }
                goto LABEL_69;
              }
            }
            else if ( ((*(_DWORD *)&v47[(v21 >> 3) & 0x1FFFFFFC] >> v21) & 1) != 0 )
            {
              v14 = a4[1];
              v22 = (unsigned __int64)a4[2];
              if ( (unsigned __int64)v14 < v22 )
                goto LABEL_44;
              v23 = (v14 - *a4) >> 3;
              if ( (unsigned __int64)(v23 + 1) >> 61 )
                goto LABEL_79;
              v24 = v22 - (_QWORD)*a4;
              v25 = v24 >> 2;
              if ( v24 >> 2 <= (unsigned __int64)(v23 + 1) )
                v25 = v23 + 1;
              if ( (unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL )
                v18 = 0x1FFFFFFFFFFFFFFFLL;
              else
                v18 = v25;
              if ( v18 )
                v19 = sub_10009A09C(a4 + 2);
              else
                v19 = 0LL;
              v32 = (char *)(v19 + 8 * v23);
              *(_QWORD *)v32 = v12;
              v31 = v32 + 8;
              v43 = *a4;
              v33 = a4[1];
              if ( v33 != *a4 )
              {
                do
                {
                  v44 = *((_QWORD *)v33 - 1);
                  v33 -= 8;
                  *((_QWORD *)v32 - 1) = v44;
                  v32 -= 8;
                }
                while ( v33 != v43 );
                goto LABEL_68;
              }
              goto LABEL_69;
            }
          }
          else if ( *(_DWORD *)((char *)a2
                              + 4
                              * (int)(-1431655765
                                    * ((unsigned __int64)(v20 - *(_QWORD *)(*(_QWORD *)(v20 + 16) + 48LL)) >> 4))
                              + *(unsigned int *)(v6 + 44)) == *(_DWORD *)(v11 + 152 * v10 + 68) )
          {
            v14 = a4[1];
            v26 = (unsigned __int64)a4[2];
            if ( (unsigned __int64)v14 < v26 )
              goto LABEL_44;
            v27 = (v14 - *a4) >> 3;
            if ( (unsigned __int64)(v27 + 1) >> 61 )
              goto LABEL_79;
            v28 = v26 - (_QWORD)*a4;
            v29 = v28 >> 2;
            if ( v28 >> 2 <= (unsigned __int64)(v27 + 1) )
              v29 = v27 + 1;
            if ( (unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL )
              v18 = 0x1FFFFFFFFFFFFFFFLL;
            else
              v18 = v29;
            if ( v18 )
              v19 = sub_10009A09C(a4 + 2);
            else
              v19 = 0LL;
            v32 = (char *)(v19 + 8 * v27);
            *(_QWORD *)v32 = v12;
            v31 = v32 + 8;
            v39 = *a4;
            v33 = a4[1];
            if ( v33 != *a4 )
            {
              do
              {
                v40 = *((_QWORD *)v33 - 1);
                v33 -= 8;
                *((_QWORD *)v32 - 1) = v40;
                v32 -= 8;
              }
              while ( v33 != v39 );
LABEL_68:
              v33 = *a4;
            }
LABEL_69:
            *a4 = v32;
            a4[1] = v31;
            a4[2] = (char *)(v19 + 8 * v18);
            if ( v33 )
              operator delete(v33);
            goto LABEL_71;
          }
        }
      }
      while ( v10++ < *(int *)(v6 + 72) );
    }
    v46 = *(unsigned int *)(v6 + 40);
    if ( (_DWORD)v46 != -1 )
      google::protobuf::internal::ExtensionSet::AppendToList(
        (__int64)a2 + v46,
        *(_QWORD *)v6,
        *(_QWORD *)(v6 + 56),
        (__int64)a4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000E00B0();
  }
  return result;
}