__ZN6google8protobuf10SimpleDtoaEd
__int64 __usercall google::protobuf::SimpleDtoa@<X0>(double a1@<D0>, char *a2@<X1>, int a3@<W8>)
{
  char __s[32]; // [xsp+8h] [xbp-38h] BYREF

  google::protobuf::DoubleToBuffer((google::protobuf *)__s, a1, a2);
  return sub_10007A754(a3, __s);
}