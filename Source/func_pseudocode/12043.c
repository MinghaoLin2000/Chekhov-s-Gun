__ZN6google8protobuf10SimpleFtoaEf
__int64 __usercall google::protobuf::SimpleFtoa@<X0>(float a1@<S0>, char *a2@<X1>, int a3@<W8>)
{
  char v6[24]; // [xsp+0h] [xbp-30h] BYREF

  google::protobuf::FloatToBuffer((google::protobuf *)v6, a1, a2);
  return sub_10007A754(a3, v6);
}