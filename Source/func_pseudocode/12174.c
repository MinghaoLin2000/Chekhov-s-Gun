__ZN6google8protobuf8internal21MapFieldPrinterHelper7SortMapERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryEPNSt3__16vectorIPS4_NSE_9allocatorISG_EEEE
bool __fastcall google::protobuf::internal::MapFieldPrinterHelper::SortMap(
        google::protobuf::Message *a1,
        google::protobuf::Reflection *this,
        const google::protobuf::FieldDescriptor *a3,
        __int64 a4,
        __int64 **a5)
{
  atomic_uint *MapData; // x0
  google::protobuf::internal::MapFieldBase *RawRepeatedField; // x0
  google::protobuf::internal::MapFieldBase *v12; // x22
  __int64 v13; // x19
  _QWORD *v14; // x23
  __int64 *v15; // x26
  __int64 v16; // x27
  __int64 v17; // x26
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x1
  __int64 v21; // x0
  __int64 *v22; // x9
  char *v23; // x8
  char *v24; // x10
  __int64 v25; // t1
  __int64 v26; // x24
  __int64 v27; // x25
  int v28; // w19
  __int64 v29; // x19
  unsigned __int64 v30; // x8
  __int64 *v31; // x28
  __int64 *v32; // x28
  __int64 v33; // x28
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 *v38; // x9
  char *v39; // x8
  char *v40; // x10
  __int64 v41; // t1
  __int64 v42; // x0
  char *v43; // x19
  __int64 *v44; // x21
  void *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x5
  _BOOL4 IsRepeatedFieldValid; // [xsp+4h] [xbp-ECh]
  _BYTE v50[64]; // [xsp+10h] [xbp-E0h] BYREF
  __int64 v51; // [xsp+50h] [xbp-A0h] BYREF
  __int64 v52; // [xsp+58h] [xbp-98h]
  __int64 v53; // [xsp+60h] [xbp-90h] BYREF
  __int64 v54; // [xsp+80h] [xbp-70h] BYREF

  MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(this, a1, a3);
  IsRepeatedFieldValid = google::protobuf::internal::MapFieldBase::IsRepeatedFieldValid(MapData);
  if ( IsRepeatedFieldValid )
  {
    RawRepeatedField = google::protobuf::Reflection::GetRawRepeatedField(this, (__int64)a1, a3, 10LL, -1, 0LL);
    if ( *((int *)RawRepeatedField + 2) >= 1 )
    {
      v12 = RawRepeatedField;
      v13 = 0LL;
      v14 = a5 + 2;
      v15 = a5[1];
      do
      {
        v16 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 8 * v13 + 8);
        if ( (unsigned __int64)v15 >= *v14 )
        {
          v17 = v15 - *a5;
          if ( (unsigned __int64)(v17 + 1) >> 61 )
            sub_100097888(a5);
          v18 = *v14 - (_QWORD)*a5;
          v19 = v18 >> 2;
          if ( v18 >> 2 <= (unsigned __int64)(v17 + 1) )
            v19 = v17 + 1;
          if ( (unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL )
            v20 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v20 = v19;
          if ( v20 )
            v21 = sub_10009A09C(a5 + 2);
          else
            v21 = 0LL;
          v22 = (__int64 *)(v21 + 8 * v17);
          *v22 = v16;
          v15 = v22 + 1;
          v24 = (char *)*a5;
          v23 = (char *)a5[1];
          if ( v23 != (char *)*a5 )
          {
            do
            {
              v25 = *((_QWORD *)v23 - 1);
              v23 -= 8;
              *--v22 = v25;
            }
            while ( v23 != v24 );
            v23 = (char *)*a5;
          }
          *a5 = v22;
          a5[1] = v15;
          a5[2] = (__int64 *)(v21 + 8 * v20);
          if ( v23 )
            operator delete(v23);
        }
        else
        {
          *v15++ = v16;
        }
        a5[1] = v15;
        ++v13;
      }
      while ( v13 < *((int *)v12 + 2) );
    }
  }
  else
  {
    v26 = google::protobuf::FieldDescriptor::message_type(a3);
    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 16LL))(a4, v26);
    google::protobuf::Reflection::MapBegin(this, a1, a3, (__int64)&v51);
    while ( 1 )
    {
      google::protobuf::Reflection::MapEnd(this, a1, a3, (__int64)v50);
      v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)v52 + 48LL))(v52, &v51, v50);
      sub_1000DF704(v50);
      if ( v28 )
        break;
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
      google::protobuf::internal::MapFieldPrinterHelper::CopyKey(&v53, v29, *(_QWORD *)(v26 + 40));
      google::protobuf::internal::MapFieldPrinterHelper::CopyValue(&v54, v29, *(_QWORD *)(v26 + 40) + 152LL);
      v31 = a5[1];
      v30 = (unsigned __int64)a5[2];
      if ( (unsigned __int64)v31 >= v30 )
      {
        v33 = v31 - *a5;
        if ( (unsigned __int64)(v33 + 1) >> 61 )
          sub_100097888(a5);
        v34 = v30 - (_QWORD)*a5;
        v35 = v34 >> 2;
        if ( v34 >> 2 <= (unsigned __int64)(v33 + 1) )
          v35 = v33 + 1;
        if ( (unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL )
          v36 = 0x1FFFFFFFFFFFFFFFLL;
        else
          v36 = v35;
        if ( v36 )
          v37 = sub_10009A09C(a5 + 2);
        else
          v37 = 0LL;
        v38 = (__int64 *)(v37 + 8 * v33);
        *v38 = v29;
        v32 = v38 + 1;
        v40 = (char *)*a5;
        v39 = (char *)a5[1];
        if ( v39 != (char *)*a5 )
        {
          do
          {
            v41 = *((_QWORD *)v39 - 1);
            v39 -= 8;
            *--v38 = v41;
          }
          while ( v39 != v40 );
          v39 = (char *)*a5;
        }
        *a5 = v38;
        a5[1] = v32;
        a5[2] = (__int64 *)(v37 + 8 * v36);
        if ( v39 )
          operator delete(v39);
      }
      else
      {
        *v31 = v29;
        v32 = v31 + 1;
      }
      a5[1] = v32;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 152LL))(v52, &v51);
    }
    sub_1000DF704(&v51);
  }
  v42 = google::protobuf::FieldDescriptor::message_type(a3);
  v43 = (char *)*a5;
  v44 = a5[1];
  v51 = *(_QWORD *)(v42 + 40);
  if ( (char *)v44 - v43 < 1025 )
  {
    v45 = 0LL;
    v47 = 0LL;
  }
  else
  {
    v45 = (void *)sub_100102180(((char *)v44 - v43) >> 3);
    v47 = v46;
  }
  sub_1001021E4(v43, v44, &v51, ((char *)v44 - v43) >> 3, v45, v47);
  if ( v45 )
    operator delete(v45);
  return !IsRepeatedFieldValid;
}