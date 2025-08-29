__ZNK6google8protobuf10TextFormat7Printer18PrintUnknownFieldsERKNS0_15UnknownFieldSetEPNS2_13TextGeneratorEi
void __fastcall google::protobuf::TextFormat::Printer::PrintUnknownFields(__int64 a1, __int64 *a2, char *a3, int a4)
{
  __int64 v4; // x27
  __int64 v9; // x28
  __int64 v10; // x25
  google::protobuf *v11; // x0
  void *p_dst; // x1
  __int64 v13; // x2
  google::protobuf *v14; // x0
  char *v15; // x2
  void *p_p; // x1
  void *v17; // x2
  void *v18; // x1
  __int64 v19; // x2
  void *v20; // x1
  __int64 v21; // x2
  void (__fastcall **v22)(char *, const char *, __int64); // x8
  const char *v23; // x1
  __int64 v24; // x2
  void *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x27
  __int64 v28; // x8
  void *v29; // x9
  void *v30; // x1
  __int64 v31; // x2
  void (__fastcall *v32)(char *, const char *, __int64); // x8
  __int64 v33; // x8
  __int64 v34; // x16
  void (__fastcall *v35)(char *, const char *, __int64); // x8
  std::string *v36; // x1
  std::string::size_type size; // x2
  void (__fastcall **v38)(char *, const char *, __int64); // x9
  const char *v39; // x1
  void *v40; // x0
  __int64 v41; // x16
  unsigned int v42; // [xsp+14h] [xbp-10Ch]
  std::string v43; // [xsp+18h] [xbp-108h] BYREF
  void *__p; // [xsp+30h] [xbp-F0h] BYREF
  void *v45; // [xsp+38h] [xbp-E8h]
  __int64 v46; // [xsp+40h] [xbp-E0h]
  void *__dst; // [xsp+48h] [xbp-D8h] BYREF
  __int64 v48; // [xsp+50h] [xbp-D0h]
  unsigned __int8 v49; // [xsp+5Fh] [xbp-C1h]
  void *__src; // [xsp+60h] [xbp-C0h] BYREF
  size_t v51; // [xsp+68h] [xbp-B8h]
  __int64 v52; // [xsp+70h] [xbp-B0h] BYREF
  int v53; // [xsp+78h] [xbp-A8h]
  __int64 v54; // [xsp+7Ch] [xbp-A4h]
  __int16 v55; // [xsp+84h] [xbp-9Ch]
  int v56; // [xsp+88h] [xbp-98h]
  __int64 v57; // [xsp+8Ch] [xbp-94h]
  int v58; // [xsp+94h] [xbp-8Ch]
  int v59; // [xsp+98h] [xbp-88h]
  __int64 v60; // [xsp+A0h] [xbp-80h]
  __int64 v61; // [xsp+A8h] [xbp-78h]

  v4 = *a2;
  if ( (int)((unsigned __int64)(a2[1] - *a2) >> 4) >= 1 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v42 = a4 - 1;
    do
    {
      v11 = (google::protobuf *)*(unsigned int *)(v4 + v9);
      __src = &v52;
      v51 = google::protobuf::FastInt32ToBufferLeft(v11, &v52, a3) - (_BYTE *)&v52;
      sub_10007A6A8(&__dst, __src, v51);
      switch ( *(_DWORD *)(v4 + v9 + 4) )
      {
        case 0:
          if ( (v49 & 0x80u) == 0 )
            p_dst = &__dst;
          else
            p_dst = __dst;
          if ( (v49 & 0x80u) == 0 )
            v13 = v49;
          else
            v13 = v48;
          (*(void (__fastcall **)(char *, void *, __int64))(*(_QWORD *)a3 + 40LL))(a3, p_dst, v13);
          (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, ": ", 2LL);
          v14 = *(google::protobuf **)(v4 + v9 + 8);
          __src = &v52;
          v51 = google::protobuf::FastUInt64ToBufferLeft(v14, &v52, v15) - (_BYTE *)&v52;
          sub_10007A6A8(&__p, __src, v51);
          if ( v46 >= 0 )
            p_p = &__p;
          else
            p_p = __p;
          if ( v46 >= 0 )
            v17 = (void *)HIBYTE(v46);
          else
            v17 = v45;
          goto LABEL_40;
        case 1:
          if ( (v49 & 0x80u) == 0 )
            v18 = &__dst;
          else
            v18 = __dst;
          if ( (v49 & 0x80u) == 0 )
            v19 = v49;
          else
            v19 = v48;
          (*(void (__fastcall **)(char *, void *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v18, v19);
          (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, ": 0x", 4LL);
          google::protobuf::strings::AlphaNum::AlphaNum(&__src, *(unsigned int *)(v4 + v9 + 8), 8);
          sub_10007A6A8(&__p, __src, v51);
          if ( v46 >= 0 )
            p_p = &__p;
          else
            p_p = __p;
          if ( v46 >= 0 )
            v17 = (void *)HIBYTE(v46);
          else
            v17 = v45;
          goto LABEL_40;
        case 2:
          if ( (v49 & 0x80u) == 0 )
            v20 = &__dst;
          else
            v20 = __dst;
          if ( (v49 & 0x80u) == 0 )
            v21 = v49;
          else
            v21 = v48;
          (*(void (__fastcall **)(char *, void *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v20, v21);
          (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, ": 0x", 4LL);
          google::protobuf::strings::AlphaNum::AlphaNum(&__src, *(_QWORD *)(v4 + v9 + 8), 16);
          sub_10007A6A8(&__p, __src, v51);
          if ( v46 >= 0 )
            p_p = &__p;
          else
            p_p = __p;
          if ( v46 >= 0 )
            v17 = (void *)HIBYTE(v46);
          else
            v17 = v45;
LABEL_40:
          (*(void (__fastcall **)(char *, void *, void *))(*(_QWORD *)a3 + 40LL))(a3, p_p, v17);
          if ( SHIBYTE(v46) < 0 )
            operator delete(__p);
          v22 = (void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
          if ( *(_BYTE *)(a1 + 4) )
            v23 = " ";
          else
            v23 = "\n";
          v24 = 1LL;
          goto LABEL_92;
        case 3:
          if ( (v49 & 0x80u) == 0 )
            v25 = &__dst;
          else
            v25 = __dst;
          if ( (v49 & 0x80u) == 0 )
            v26 = v49;
          else
            v26 = v48;
          (*(void (__fastcall **)(char *, void *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v25, v26);
          v27 = *(_QWORD *)(v4 + v9 + 8);
          if ( *(char *)(v27 + 23) < 0 )
          {
            v29 = *(void **)v27;
            v28 = *(_QWORD *)(v27 + 8);
          }
          else
          {
            LODWORD(v28) = *(unsigned __int8 *)(v27 + 23);
            v29 = (void *)v27;
          }
          __src = v29;
          v51 = (size_t)v29 + (int)v28;
          v52 = 0LL;
          v54 = 0LL;
          v55 = 0;
          v53 = v28;
          v56 = v28;
          v57 = 0x7FFFFFFF00000000LL;
          v60 = 0LL;
          v61 = 0LL;
          v58 = a4;
          v59 = a4;
          v45 = 0LL;
          v46 = 0LL;
          __p = 0LL;
          if ( *(char *)(v27 + 23) < 0 )
            v33 = *(_QWORD *)(v27 + 8);
          else
            v33 = *(unsigned __int8 *)(v27 + 23);
          if ( a4 >= 1
            && v33
            && (unsigned int)google::protobuf::UnknownFieldSet::ParseFromCodedStream(
                               (google::protobuf::UnknownFieldSet *)&__p,
                               (google::protobuf::io::CodedInputStream *)&__src) )
          {
            v35 = *(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
            if ( *(_BYTE *)(a1 + 4) )
            {
              v35(a3, " { ", 3LL);
            }
            else
            {
              v35(a3, " {\n", 3LL);
              (*(void (__fastcall **)(char *))(*(_QWORD *)a3 + 16LL))(a3);
            }
            google::protobuf::TextFormat::Printer::PrintUnknownFields(a1, &__p, a3, v42);
            v41 = *(_QWORD *)a3;
            if ( *(_BYTE *)(a1 + 4) )
            {
              v38 = (void (__fastcall **)(char *, const char *, __int64))(v41 + 40);
              v39 = "} ";
            }
            else
            {
              (*(void (__fastcall **)(char *))(v41 + 24))(a3);
              v38 = (void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
              v39 = "}\n";
            }
          }
          else
          {
            (*(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL))(a3, ": \"", 3LL);
            google::protobuf::CEscape(v27, &v43);
            if ( (v43.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
              v36 = &v43;
            else
              v36 = (std::string *)v43.__r_.__value_.__r.__words[0];
            if ( (v43.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
              size = HIBYTE(v43.__r_.__value_.__r.__words[2]);
            else
              size = v43.__r_.__value_.__l.__size_;
            (*(void (__fastcall **)(char *, std::string *, std::string::size_type))(*(_QWORD *)a3 + 40LL))(
              a3,
              v36,
              size);
            if ( SHIBYTE(v43.__r_.__value_.__r.__words[2]) < 0 )
              operator delete(v43.__r_.__value_.__l.__data_);
            v38 = (void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
            if ( *(_BYTE *)(a1 + 4) )
              v39 = "\" ";
            else
              v39 = "\"\n";
          }
          (*v38)(a3, v39, 2LL);
          v40 = __p;
          if ( __p != v45 )
          {
            google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *)&__p);
            v40 = __p;
          }
          if ( v40 )
          {
            v45 = v40;
            operator delete(v40);
          }
          google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *)&__src);
          break;
        case 4:
          if ( (v49 & 0x80u) == 0 )
            v30 = &__dst;
          else
            v30 = __dst;
          if ( (v49 & 0x80u) == 0 )
            v31 = v49;
          else
            v31 = v48;
          (*(void (__fastcall **)(char *, void *, __int64))(*(_QWORD *)a3 + 40LL))(a3, v30, v31);
          v32 = *(void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
          if ( *(_BYTE *)(a1 + 4) )
          {
            v32(a3, " { ", 3LL);
          }
          else
          {
            v32(a3, " {\n", 3LL);
            (*(void (__fastcall **)(char *))(*(_QWORD *)a3 + 16LL))(a3);
          }
          google::protobuf::TextFormat::Printer::PrintUnknownFields(a1, *(_QWORD *)(v4 + v9 + 8), a3, v42);
          v34 = *(_QWORD *)a3;
          if ( *(_BYTE *)(a1 + 4) )
          {
            v22 = (void (__fastcall **)(char *, const char *, __int64))(v34 + 40);
            v23 = "} ";
          }
          else
          {
            (*(void (__fastcall **)(char *))(v34 + 24))(a3);
            v22 = (void (__fastcall **)(char *, const char *, __int64))(*(_QWORD *)a3 + 40LL);
            v23 = "}\n";
          }
          v24 = 2LL;
LABEL_92:
          (*v22)(a3, v23, v24);
          break;
        default:
          break;
      }
      if ( (char)v49 < 0 )
        operator delete(__dst);
      ++v10;
      v4 = *a2;
      v9 += 16LL;
    }
    while ( v10 < (int)((unsigned __int64)(a2[1] - *a2) >> 4) );
  }
}