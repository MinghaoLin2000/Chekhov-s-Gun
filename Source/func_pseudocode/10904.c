__ZN6google8protobuf17DescriptorBuilder18AddNotDefinedErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_7MessageENS0_14DescriptorPool14ErrorCollector13ErrorLocationESA_
void __fastcall google::protobuf::DescriptorBuilder::AddNotDefinedError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  std::string *v10; // x0
  __int128 v11; // q0
  __int64 v12; // x8
  int v13; // w10
  const std::string::value_type *v14; // x1
  std::string::size_type v15; // x2
  std::string *v16; // x0
  __int128 v17; // q0
  std::string *v18; // x0
  __int128 v19; // q0
  int v20; // w11
  const std::string::value_type *v21; // x1
  std::string::size_type v22; // x2
  std::string *v23; // x0
  __int128 v24; // q0
  std::string *v25; // x0
  __int128 v26; // q0
  int v27; // w8
  std::string *v28; // x0
  __int128 v29; // q0
  int v30; // w10
  const std::string::value_type *v31; // x1
  std::string::size_type v32; // x2
  std::string *v33; // x0
  __int128 v34; // q0
  std::string *v35; // x0
  __int128 v36; // q0
  int v37; // w9
  const std::string::value_type *v38; // x1
  std::string::size_type v39; // x2
  std::string *v40; // x0
  __int128 v41; // q0
  std::string *v42; // x0
  __int128 v43; // q0
  void *v44; // x0
  std::string *v45; // x0
  __int128 v46; // q0
  std::string v47; // [xsp+8h] [xbp-F8h] BYREF
  std::string v48; // [xsp+20h] [xbp-E0h] BYREF
  std::string v49; // [xsp+40h] [xbp-C0h] BYREF
  std::string v50; // [xsp+60h] [xbp-A0h] BYREF
  std::string v51; // [xsp+80h] [xbp-80h] BYREF
  __int128 v52; // [xsp+A0h] [xbp-60h] BYREF
  std::string::size_type v53; // [xsp+B0h] [xbp-50h]

  if ( *(_QWORD *)(a1 + 144) )
  {
    std::operator+<char>("\"", a1 + 152);
    v10 = std::string::append(&v47, "\" seems to be defined in \"");
    v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
    v48.__r_.__value_.__r.__words[2] = v10->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v48.__r_.__value_.__l.__data_ = v11;
    v10->__r_.__value_.__l.__size_ = 0LL;
    v10->__r_.__value_.__r.__words[2] = 0LL;
    v10->__r_.__value_.__r.__words[0] = 0LL;
    v12 = **(_QWORD **)(a1 + 144);
    v13 = *(char *)(v12 + 23);
    if ( v13 >= 0 )
      v14 = **(const std::string::value_type ***)(a1 + 144);
    else
      v14 = *(const std::string::value_type **)v12;
    if ( v13 >= 0 )
      v15 = *(unsigned __int8 *)(v12 + 23);
    else
      v15 = *(_QWORD *)(v12 + 8);
    v16 = std::string::append(&v48, v14, v15);
    v17 = *(_OWORD *)&v16->__r_.__value_.__l.__data_;
    v49.__r_.__value_.__r.__words[2] = v16->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v49.__r_.__value_.__l.__data_ = v17;
    v16->__r_.__value_.__l.__size_ = 0LL;
    v16->__r_.__value_.__r.__words[2] = 0LL;
    v16->__r_.__value_.__r.__words[0] = 0LL;
    v18 = std::string::append(&v49, "\", which is not imported by \"");
    v19 = *(_OWORD *)&v18->__r_.__value_.__l.__data_;
    v50.__r_.__value_.__r.__words[2] = v18->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v50.__r_.__value_.__l.__data_ = v19;
    v18->__r_.__value_.__l.__size_ = 0LL;
    v18->__r_.__value_.__r.__words[2] = 0LL;
    v18->__r_.__value_.__r.__words[0] = 0LL;
    v20 = *(char *)(a1 + 79);
    if ( v20 >= 0 )
      v21 = (const std::string::value_type *)(a1 + 56);
    else
      v21 = *(const std::string::value_type **)(a1 + 56);
    if ( v20 >= 0 )
      v22 = *(unsigned __int8 *)(a1 + 79);
    else
      v22 = *(_QWORD *)(a1 + 64);
    v23 = std::string::append(&v50, v21, v22);
    v24 = *(_OWORD *)&v23->__r_.__value_.__l.__data_;
    v51.__r_.__value_.__r.__words[2] = v23->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v51.__r_.__value_.__l.__data_ = v24;
    v23->__r_.__value_.__l.__size_ = 0LL;
    v23->__r_.__value_.__r.__words[2] = 0LL;
    v23->__r_.__value_.__r.__words[0] = 0LL;
    v25 = std::string::append(&v51, "\".  To use it here, please add the necessary import.");
    v26 = *(_OWORD *)&v25->__r_.__value_.__l.__data_;
    v53 = v25->__r_.__value_.__r.__words[2];
    v52 = v26;
    v25->__r_.__value_.__l.__size_ = 0LL;
    v25->__r_.__value_.__r.__words[2] = 0LL;
    v25->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(a1, a2, a3, a4, (__int64)&v52);
    if ( SHIBYTE(v53) < 0 )
      operator delete((void *)v52);
    if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v51.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v50.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v50.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v49.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v49.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v48.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v48.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v47.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v47.__r_.__value_.__l.__data_);
    LOBYTE(v27) = *(_BYTE *)(a1 + 199);
LABEL_27:
    if ( (v27 & 0x80) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 184) )
        return;
    }
    else if ( !(_BYTE)v27 )
    {
      return;
    }
    std::operator+<char>("\"", a5);
    v28 = std::string::append(&v47, "\" is resolved to \"");
    v29 = *(_OWORD *)&v28->__r_.__value_.__l.__data_;
    v48.__r_.__value_.__r.__words[2] = v28->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v48.__r_.__value_.__l.__data_ = v29;
    v28->__r_.__value_.__l.__size_ = 0LL;
    v28->__r_.__value_.__r.__words[2] = 0LL;
    v28->__r_.__value_.__r.__words[0] = 0LL;
    v30 = *(char *)(a1 + 199);
    if ( v30 >= 0 )
      v31 = (const std::string::value_type *)(a1 + 176);
    else
      v31 = *(const std::string::value_type **)(a1 + 176);
    if ( v30 >= 0 )
      v32 = *(unsigned __int8 *)(a1 + 199);
    else
      v32 = *(_QWORD *)(a1 + 184);
    v33 = std::string::append(&v48, v31, v32);
    v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
    v49.__r_.__value_.__r.__words[2] = v33->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v49.__r_.__value_.__l.__data_ = v34;
    v33->__r_.__value_.__l.__size_ = 0LL;
    v33->__r_.__value_.__r.__words[2] = 0LL;
    v33->__r_.__value_.__r.__words[0] = 0LL;
    v35 = std::string::append(
            &v49,
            "\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading '.'(i.e., \".");
    v36 = *(_OWORD *)&v35->__r_.__value_.__l.__data_;
    v50.__r_.__value_.__r.__words[2] = v35->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v50.__r_.__value_.__l.__data_ = v36;
    v35->__r_.__value_.__l.__size_ = 0LL;
    v35->__r_.__value_.__r.__words[2] = 0LL;
    v35->__r_.__value_.__r.__words[0] = 0LL;
    v37 = *(char *)(a5 + 23);
    if ( v37 >= 0 )
      v38 = (const std::string::value_type *)a5;
    else
      v38 = *(const std::string::value_type **)a5;
    if ( v37 >= 0 )
      v39 = *(unsigned __int8 *)(a5 + 23);
    else
      v39 = *(_QWORD *)(a5 + 8);
    v40 = std::string::append(&v50, v38, v39);
    v41 = *(_OWORD *)&v40->__r_.__value_.__l.__data_;
    v51.__r_.__value_.__r.__words[2] = v40->__r_.__value_.__r.__words[2];
    *(_OWORD *)&v51.__r_.__value_.__l.__data_ = v41;
    v40->__r_.__value_.__l.__size_ = 0LL;
    v40->__r_.__value_.__r.__words[2] = 0LL;
    v40->__r_.__value_.__r.__words[0] = 0LL;
    v42 = std::string::append(&v51, "\") to start from the outermost scope.");
    v43 = *(_OWORD *)&v42->__r_.__value_.__l.__data_;
    v53 = v42->__r_.__value_.__r.__words[2];
    v52 = v43;
    v42->__r_.__value_.__l.__size_ = 0LL;
    v42->__r_.__value_.__r.__words[2] = 0LL;
    v42->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError(a1, a2, a3, a4, (__int64)&v52);
    if ( SHIBYTE(v53) < 0 )
      operator delete((void *)v52);
    if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v51.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v50.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v50.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v49.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v49.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v48.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v48.__r_.__value_.__l.__data_);
    if ( SHIBYTE(v47.__r_.__value_.__r.__words[2]) < 0 )
    {
      v44 = (void *)v47.__r_.__value_.__r.__words[0];
LABEL_63:
      operator delete(v44);
      return;
    }
    return;
  }
  v27 = *(char *)(a1 + 199);
  if ( v27 < 0 )
  {
    if ( *(_QWORD *)(a1 + 184) )
      goto LABEL_27;
  }
  else if ( *(_BYTE *)(a1 + 199) )
  {
    goto LABEL_27;
  }
  std::operator+<char>("\"", a5);
  v45 = std::string::append(&v51, "\" is not defined.");
  v46 = *(_OWORD *)&v45->__r_.__value_.__l.__data_;
  v53 = v45->__r_.__value_.__r.__words[2];
  v52 = v46;
  v45->__r_.__value_.__l.__size_ = 0LL;
  v45->__r_.__value_.__r.__words[2] = 0LL;
  v45->__r_.__value_.__r.__words[0] = 0LL;
  google::protobuf::DescriptorBuilder::AddError(a1, a2, a3, a4, (__int64)&v52);
  if ( SHIBYTE(v53) < 0 )
    operator delete((void *)v52);
  if ( SHIBYTE(v51.__r_.__value_.__r.__words[2]) < 0 )
  {
    v44 = (void *)v51.__r_.__value_.__r.__words[0];
    goto LABEL_63;
  }
}