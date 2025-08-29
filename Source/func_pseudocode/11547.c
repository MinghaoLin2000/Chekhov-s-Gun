__ZNK6google8protobuf8internal12ExtensionSet9Extension8ByteSizeEi
unsigned __int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::ByteSize(__int64 **this, int a2)
{
  google::protobuf::internal::LogMessage *v3; // x0
  unsigned __int64 v4; // x19
  unsigned __int64 v5; // x8
  unsigned int v6; // w8
  __int64 v7; // x8
  __int64 v8; // x9
  int *v9; // x10
  int v10; // t1
  __int64 v11; // x9
  int *v12; // x10
  int v13; // t1
  __int64 v14; // x9
  __int64 *v15; // x10
  __int64 v16; // t1
  __int64 v17; // x9
  __int64 *v18; // x10
  __int64 v19; // t1
  __int64 v20; // x9
  int *v21; // x10
  int v22; // w11
  int v23; // t1
  __int64 v24; // x11
  __int64 v25; // x9
  int *v26; // x10
  int v27; // w11
  int v28; // t1
  __int64 v29; // x11
  __int64 v30; // x9
  __int64 *v31; // x10
  __int64 v32; // t1
  unsigned __int64 v33; // x9
  __int64 v35; // x8
  __int64 v36; // x10
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 *v40; // x8
  __int64 v41; // t1
  __int64 v42; // x9
  __int64 *v43; // x8
  __int64 v44; // t1
  __int64 v45; // x9
  int *v46; // x8
  int v47; // w10
  int v48; // t1
  __int64 v49; // x10
  __int64 v50; // x9
  __int64 *v51; // x8
  __int64 v52; // t1
  __int64 v53; // x11
  __int64 v54; // x10
  unsigned int *v55; // x9
  int v56; // w10
  __int64 v57; // x21
  __int64 v58; // x0
  unsigned int *v59; // x9
  int v60; // w10
  __int64 v61; // x21
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x9
  __int64 *v65; // x8
  __int64 v66; // t1
  __int64 v67; // x11
  __int64 v68; // x10
  __int64 v69; // x9
  int *v70; // x8
  int v71; // t1
  __int64 v72; // x9
  int *v73; // x8
  int v74; // w10
  int v75; // t1
  __int64 v76; // x10
  __int64 v77; // x9
  int *v78; // x8
  int v79; // t1
  __int64 v80; // x9
  __int64 *v81; // x8
  __int64 v82; // t1
  __int64 v83; // x16
  __int64 v84; // x0
  int v85; // w8
  char v86; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v87[48]; // [xsp+10h] [xbp-50h] BYREF

  if ( *((_BYTE *)this + 9) )
  {
    if ( *((_BYTE *)this + 11) )
    {
      switch ( *((_BYTE *)this + 8) )
      {
        case 1:
        case 6:
        case 0x10:
          v7 = 8LL * *(unsigned int *)*this;
          goto LABEL_51;
        case 2:
        case 7:
        case 0xF:
          v7 = 4LL * *(unsigned int *)*this;
          goto LABEL_51;
        case 3:
          v14 = *(unsigned int *)*this;
          if ( (int)v14 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v15 = (__int64 *)(*this)[1];
          do
          {
            v16 = *v15++;
            v7 += (9 * (__clz(v16 | 1) ^ 0x3F) + 73) >> 6;
            --v14;
          }
          while ( v14 );
          goto LABEL_51;
        case 4:
          v17 = *(unsigned int *)*this;
          if ( (int)v17 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v18 = (__int64 *)(*this)[1];
          do
          {
            v19 = *v18++;
            v7 += (9 * (__clz(v19 | 1) ^ 0x3F) + 73) >> 6;
            --v17;
          }
          while ( v17 );
          goto LABEL_51;
        case 5:
          v20 = *(unsigned int *)*this;
          if ( (int)v20 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v21 = (int *)(*this)[1];
          do
          {
            v23 = *v21++;
            v22 = v23;
            if ( v23 < 0 )
              v24 = 10LL;
            else
              v24 = (9 * (__clz(v22 | 1) ^ 0x1F) + 73) >> 6;
            v7 += v24;
            --v20;
          }
          while ( v20 );
          goto LABEL_51;
        case 8:
          v7 = *(unsigned int *)*this;
          goto LABEL_51;
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
          google::protobuf::internal::LogMessage::LogMessage(
            v87,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/extension_set.cc",
            1599LL);
          v3 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                           v87,
                                                           "Non-primitive types can't be packed.");
          google::protobuf::internal::LogFinisher::operator=((int)&v86, v3);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v87);
          goto LABEL_5;
        case 0xD:
          v8 = *(unsigned int *)*this;
          if ( (int)v8 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v9 = (int *)(*this)[1];
          do
          {
            v10 = *v9++;
            v7 += (9 * (__clz(v10 | 1) ^ 0x1F) + 73) >> 6;
            --v8;
          }
          while ( v8 );
          goto LABEL_51;
        case 0xE:
          v25 = *(unsigned int *)*this;
          if ( (int)v25 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v26 = (int *)(*this)[1];
          do
          {
            v28 = *v26++;
            v27 = v28;
            if ( v28 < 0 )
              v29 = 10LL;
            else
              v29 = (9 * (__clz(v27 | 1) ^ 0x1F) + 73) >> 6;
            v7 += v29;
            --v25;
          }
          while ( v25 );
          goto LABEL_51;
        case 0x11:
          v11 = *(unsigned int *)*this;
          if ( (int)v11 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v12 = (int *)(*this)[1];
          do
          {
            v13 = *v12++;
            v7 += (9 * (__clz((2 * v13) ^ (v13 >> 31) | 1) ^ 0x1F) + 73) >> 6;
            --v11;
          }
          while ( v11 );
          goto LABEL_51;
        case 0x12:
          v30 = *(unsigned int *)*this;
          if ( (int)v30 < 1 )
            goto LABEL_5;
          v7 = 0LL;
          v31 = (__int64 *)(*this)[1];
          do
          {
            v32 = *v31++;
            v7 += (9 * (__clz((2 * v32) ^ (v32 >> 63) | 1) ^ 0x3F) + 73) >> 6;
            --v30;
          }
          while ( v30 );
LABEL_51:
          *((_DWORD *)this + 3) = v7;
          v33 = v7 + ((9 * (__clz((8 * a2) | 3) ^ 0x1F) + 73) >> 6) + ((9 * (__clz(v7 | 1) ^ 0x1F) + 73) >> 6);
          if ( v7 )
            v4 = v33;
          else
            v4 = 0LL;
          break;
        default:
LABEL_5:
          v4 = 0LL;
          *((_DWORD *)this + 3) = 0;
          break;
      }
    }
    else
    {
      v5 = (unsigned __int64)((9 * (__clz((8 * a2) | 1) ^ 0x1F) + 73) >> 6) << (*((_BYTE *)this + 8) == 10);
      switch ( *((_BYTE *)this + 8) )
      {
        case 1:
        case 6:
        case 0x10:
          v6 = v5 + 8;
          goto LABEL_15;
        case 2:
        case 7:
        case 0xF:
          v6 = v5 + 4;
LABEL_15:
          v4 = v6 * (unsigned __int64)*(unsigned int *)*this;
          break;
        case 3:
          v39 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v39;
          if ( (int)v39 >= 1 )
          {
            v40 = (__int64 *)(*this)[1];
            do
            {
              v41 = *v40++;
              v4 += (9 * (__clz(v41 | 1) ^ 0x3F) + 73) >> 6;
              --v39;
            }
            while ( v39 );
          }
          break;
        case 4:
          v42 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v42;
          if ( (int)v42 >= 1 )
          {
            v43 = (__int64 *)(*this)[1];
            do
            {
              v44 = *v43++;
              v4 += (9 * (__clz(v44 | 1) ^ 0x3F) + 73) >> 6;
              --v42;
            }
            while ( v42 );
          }
          break;
        case 5:
          v45 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v45;
          if ( (int)v45 >= 1 )
          {
            v46 = (int *)(*this)[1];
            do
            {
              v48 = *v46++;
              v47 = v48;
              if ( v48 < 0 )
                v49 = 10LL;
              else
                v49 = (9 * (__clz(v47 | 1) ^ 0x1F) + 73) >> 6;
              v4 += v49;
              --v45;
            }
            while ( v45 );
          }
          break;
        case 8:
          v4 = *(unsigned int *)*this + *(unsigned int *)*this * (unsigned __int64)(unsigned int)v5;
          break;
        case 9:
          v50 = *((unsigned int *)*this + 2);
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v50;
          if ( (int)v50 >= 1 )
          {
            v51 = (__int64 *)((*this)[2] + 8);
            do
            {
              v52 = *v51++;
              v53 = *(unsigned __int8 *)(v52 + 23);
              v54 = *(_QWORD *)(v52 + 8);
              if ( (v53 & 0x80u) == 0LL )
                v54 = v53;
              v4 += v54 + ((9 * (__clz(v54 | 1) ^ 0x1F) + 73) >> 6);
              --v50;
            }
            while ( v50 );
          }
          break;
        case 0xA:
          v55 = (unsigned int *)*this;
          v56 = *((_DWORD *)*this + 2);
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v56;
          if ( v56 >= 1 )
          {
            v57 = 0LL;
            do
            {
              v58 = *(_QWORD *)(*((_QWORD *)v55 + 2) + 8 * v57 + 8);
              v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 72LL))(v58);
              ++v57;
              v55 = (unsigned int *)*this;
            }
            while ( v57 < *((int *)*this + 2) );
          }
          break;
        case 0xB:
          v59 = (unsigned int *)*this;
          v60 = *((_DWORD *)*this + 2);
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v60;
          if ( v60 >= 1 )
          {
            v61 = 0LL;
            do
            {
              v62 = *(_QWORD *)(*((_QWORD *)v59 + 2) + 8 * v61 + 8);
              v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 72LL))(v62);
              v4 += v63 + ((9 * (__clz(v63 | 1) ^ 0x1F) + 73) >> 6);
              ++v61;
              v59 = (unsigned int *)*this;
            }
            while ( v61 < *((int *)*this + 2) );
          }
          break;
        case 0xC:
          v64 = *((unsigned int *)*this + 2);
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v64;
          if ( (int)v64 >= 1 )
          {
            v65 = (__int64 *)((*this)[2] + 8);
            do
            {
              v66 = *v65++;
              v67 = *(unsigned __int8 *)(v66 + 23);
              v68 = *(_QWORD *)(v66 + 8);
              if ( (v67 & 0x80u) == 0LL )
                v68 = v67;
              v4 += v68 + ((9 * (__clz(v68 | 1) ^ 0x1F) + 73) >> 6);
              --v64;
            }
            while ( v64 );
          }
          break;
        case 0xD:
          v69 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v69;
          if ( (int)v69 >= 1 )
          {
            v70 = (int *)(*this)[1];
            do
            {
              v71 = *v70++;
              v4 += (9 * (__clz(v71 | 1) ^ 0x1F) + 73) >> 6;
              --v69;
            }
            while ( v69 );
          }
          break;
        case 0xE:
          v72 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v72;
          if ( (int)v72 >= 1 )
          {
            v73 = (int *)(*this)[1];
            do
            {
              v75 = *v73++;
              v74 = v75;
              if ( v75 < 0 )
                v76 = 10LL;
              else
                v76 = (9 * (__clz(v74 | 1) ^ 0x1F) + 73) >> 6;
              v4 += v76;
              --v72;
            }
            while ( v72 );
          }
          break;
        case 0x11:
          v77 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v77;
          if ( (int)v77 >= 1 )
          {
            v78 = (int *)(*this)[1];
            do
            {
              v79 = *v78++;
              v4 += (9 * (__clz((2 * v79) ^ (v79 >> 31) | 1) ^ 0x1F) + 73) >> 6;
              --v77;
            }
            while ( v77 );
          }
          break;
        case 0x12:
          v80 = *(unsigned int *)*this;
          v4 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v80;
          if ( (int)v80 >= 1 )
          {
            v81 = (__int64 *)(*this)[1];
            do
            {
              v82 = *v81++;
              v4 += (9 * (__clz((2 * v82) ^ (v82 >> 63) | 1) ^ 0x3F) + 73) >> 6;
              --v80;
            }
            while ( v80 );
          }
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( (*((_BYTE *)this + 10) & 1) != 0 )
  {
    return 0LL;
  }
  else
  {
    v4 = (unsigned __int64)((9 * (__clz((8 * a2) | 1) ^ 0x1F) + 73) >> 6) << (*((_BYTE *)this + 8) == 10);
    switch ( *((_BYTE *)this + 8) )
    {
      case 1:
      case 6:
      case 0x10:
        v4 += 8LL;
        return v4;
      case 2:
      case 7:
      case 0xF:
        v4 += 4LL;
        return v4;
      case 3:
      case 4:
        v35 = (__int64)*this;
        goto LABEL_126;
      case 5:
      case 0xE:
        v36 = (9 * (__clz(*(_DWORD *)this | 1) ^ 0x1F) + 73) >> 6;
        if ( *(int *)this >= 0 )
          v37 = v36;
        else
          v37 = 10LL;
        v4 += v37;
        return v4;
      case 8:
        return ++v4;
      case 9:
      case 0xC:
        v38 = (*this)[1];
        if ( *((char *)*this + 23) >= 0 )
          v38 = *((unsigned __int8 *)*this + 23);
        v4 += v38 + ((9 * (__clz(v38 | 1) ^ 0x1F) + 73) >> 6);
        return v4;
      case 0xA:
        v4 += (*(__int64 (**)(void))(**this + 72))();
        return v4;
      case 0xB:
        v83 = **this;
        if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
          v84 = (*(__int64 (**)(void))(v83 + 88))();
        else
          v84 = (*(__int64 (**)(void))(v83 + 72))();
        v4 += v84 + ((9 * (__clz(v84 | 1) ^ 0x1F) + 73) >> 6);
        return v4;
      case 0xD:
        v85 = *(_DWORD *)this;
        goto LABEL_124;
      case 0x11:
        v85 = (2 * *(_DWORD *)this) ^ (*(int *)this >> 31);
LABEL_124:
        v4 += (9 * (__clz(v85 | 1) ^ 0x1F) + 73) >> 6;
        break;
      case 0x12:
        v35 = (2LL * (_QWORD)*this) ^ ((__int64)*this >> 63);
LABEL_126:
        v4 += (9 * (__clz(v35 | 1) ^ 0x3F) + 73) >> 6;
        break;
      default:
        return v4;
    }
  }
  return v4;
}