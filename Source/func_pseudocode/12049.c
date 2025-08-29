__ZN6google8protobuf7strings8AlphaNumC1ENS1_3HexE
_QWORD *__fastcall google::protobuf::strings::AlphaNum::AlphaNum(_QWORD *result, unsigned __int64 a2, char a3)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  bool v5; // cc

  v3 = 0LL;
  v4 = (1LL << (4 * a3 - 4)) | a2;
  do
  {
    *((_BYTE *)result + v3 + 47) = a0123456789abcd[a2 & 0xF];
    a2 >>= 4;
    --v3;
    v5 = v4 > 0xF;
    v4 >>= 4;
  }
  while ( v5 );
  *result = (char *)result + v3 + 48;
  result[1] = -v3;
  return result;
}