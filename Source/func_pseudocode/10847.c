__ZNK6google8protobuf14DescriptorPool21FindExtensionByNumberEPKNS0_10DescriptorEi
__int64 __fastcall google::protobuf::DescriptorPool::FindExtensionByNumber(
        std::mutex **this,
        const google::protobuf::Descriptor *a2,
        unsigned int a3)
{
  std::mutex *v6; // x19
  std::mutex *v7; // x23
  __int64 v8; // x0
  __int64 ExtensionByNumber; // x23
  char v10; // w24
  std::mutex *v11; // x23
  __int64 v12; // x0
  google::protobuf::DescriptorPool *v13; // x0
  std::mutex *v14; // x21
  __int64 v15; // x0
  const google::protobuf::Descriptor *v17; // [xsp+0h] [xbp-50h] BYREF
  __int64 v18; // [xsp+8h] [xbp-48h]

  if ( !*((_DWORD *)a2 + 31) )
    return 0LL;
  v6 = *this;
  if ( !*this )
    goto LABEL_10;
  std::mutex::lock(*this);
  v7 = this[4];
  v17 = a2;
  v18 = a3;
  v8 = sub_100096848(&v7[6], &v17);
  if ( v7[6].__m_.__opaque == (char *)v8 )
  {
    std::mutex::unlock(v6);
  }
  else
  {
    ExtensionByNumber = *(_QWORD *)(v8 + 48);
    std::mutex::unlock(v6);
    if ( ExtensionByNumber )
      return ExtensionByNumber;
  }
  v6 = *this;
  if ( *this )
  {
    std::mutex::lock(*this);
    v10 = 0;
  }
  else
  {
LABEL_10:
    v10 = 1;
  }
  if ( this[1] )
  {
    sub_10009B118(&this[4][1]);
    sub_10009B118(&this[4]->__m_.__opaque[16]);
  }
  v11 = this[4];
  v17 = a2;
  v18 = a3;
  v12 = sub_100096848(&v11[6], &v17);
  if ( v11[6].__m_.__opaque == (char *)v12 || (ExtensionByNumber = *(_QWORD *)(v12 + 48)) == 0 )
  {
    v13 = (google::protobuf::DescriptorPool *)this[3];
    if ( !v13 || (ExtensionByNumber = google::protobuf::DescriptorPool::FindExtensionByNumber(v13, a2, a3)) == 0 )
    {
      if ( !(unsigned int)google::protobuf::DescriptorPool::TryFindExtensionInFallbackDatabase(
                            (google::protobuf::DescriptorPool *)this,
                            a2,
                            a3)
        || (v14 = this[4], v17 = a2, v18 = a3, v15 = sub_100096848(&v14[6], &v17), v14[6].__m_.__opaque == (char *)v15)
        || (ExtensionByNumber = *(_QWORD *)(v15 + 48)) == 0 )
      {
        ExtensionByNumber = 0LL;
      }
    }
  }
  if ( (v10 & 1) == 0 )
    std::mutex::unlock(v6);
  return ExtensionByNumber;
}