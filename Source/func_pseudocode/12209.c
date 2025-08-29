__ZN6google8protobuf12UnknownField8DeepCopyERKS1_
void **__fastcall google::protobuf::UnknownField::DeepCopy(void **this, const google::protobuf::UnknownField *a2)
{
  void **v2; // x19
  int v3; // w8
  void **v4; // x20
  void **v5; // x8
  __int128 v6; // q0

  v2 = this;
  v3 = *((_DWORD *)this + 1);
  if ( v3 == 4 )
  {
    v4 = (void **)operator new(24LL, 0x20C40960023A9LL);
    v4[1] = 0LL;
    v4[2] = 0LL;
    *v4 = 0LL;
    this = google::protobuf::UnknownFieldSet::InternalMergeFrom(v4, (const google::protobuf::UnknownFieldSet *)v2[1]);
  }
  else
  {
    if ( v3 != 3 )
      return this;
    this = (void **)operator new(24LL, 0x1012C40EC159624LL);
    v4 = this;
    v5 = (void **)v2[1];
    if ( *((char *)v5 + 23) < 0 )
    {
      this = (void **)sub_10007A474(this, *v5);
    }
    else
    {
      v6 = *(_OWORD *)v5;
      this[2] = v5[2];
      *(_OWORD *)this = v6;
    }
  }
  v2[1] = v4;
  return this;
}