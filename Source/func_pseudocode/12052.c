__ZN6google8protobuf6StrCatERKNS0_7strings8AlphaNumES4_S4_S4_S4_S4_
char *__usercall google::protobuf::StrCat@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X4>,
        __int64 a6@<X5>,
        __int64 a7@<X8>)
{
  void *v10; // x0
  char *result; // x0
  char *v12; // x21
  size_t v13; // x2
  size_t v14; // x2
  const void *v15; // x1
  __int64 vars8; // [xsp+48h] [xbp+8h]

  *(_QWORD *)a7 = 0LL;
  *(_QWORD *)(a7 + 8) = 0LL;
  *(_QWORD *)(a7 + 16) = 0LL;
  std::string::resize(
    (std::string *)a7,
    *(_QWORD *)(a2 + 8)
  + *(_QWORD *)(a1 + 8)
  + *(_QWORD *)(a3 + 8)
  + *(_QWORD *)(a4 + 8)
  + *(_QWORD *)(a5 + 8)
  + *(_QWORD *)(a6 + 8),
    0);
  if ( *(char *)(a7 + 23) >= 0 )
    v10 = (void *)a7;
  else
    v10 = *(void **)a7;
  result = (char *)sub_1000F1E9C(v10);
  v12 = result;
  v13 = *(_QWORD *)(a5 + 8);
  if ( v13 )
  {
    result = (char *)memcpy(result, *(const void **)a5, v13);
    v12 += *(_QWORD *)(a5 + 8);
  }
  v14 = *(_QWORD *)(a6 + 8);
  if ( v14 )
  {
    v15 = *(const void **)a6;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)memcpy(v12, v15, v14);
  }
  return result;
}