_$s22localspeechrecognition10ClientInfoV10identifierACSS_tcfC
double __usercall ClientInfo.init(identifier:)@<D0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __int64 v6; // x22
  __int64 v7; // x0
  double result; // d0

  v6 = a3 + *(int *)(type metadata accessor for ClientInfo(0LL) + 32);
  v7 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  sub_1000075A8(v6, 1LL, 1LL, v7);
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  result = 0.0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 0xE000000000000000LL;
  *(_OWORD *)(a3 + 32) = xmmword_100046350;
  *(_OWORD *)(a3 + 48) = xmmword_100046350;
  return result;
}