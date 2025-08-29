_$s22localspeechrecognition10ClientInfoV10identifier6source15applicationName11inputOrigin07loggingC0ACSS_S2SSgAiC07LoggingC0VSgtcfC
__int64 __usercall ClientInfo.init(identifier:source:applicationName:inputOrigin:loggingInfo:)@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X4>,
        __int64 a6@<X5>,
        __int64 a7@<X6>,
        __int64 a8@<X7>,
        _QWORD *a9@<X8>,
        __int64 a10)
{
  char *v10; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  *a9 = a1;
  a9[1] = a2;
  a9[4] = a5;
  a9[5] = a6;
  a9[2] = a3;
  a9[3] = a4;
  a9[6] = a7;
  a9[7] = a8;
  v10 = (char *)a9 + *(int *)(type metadata accessor for ClientInfo(0LL) + 32);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100029494(a10, v10);
}