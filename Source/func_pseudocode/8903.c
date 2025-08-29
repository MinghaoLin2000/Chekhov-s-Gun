_$s34AppleMediaServicesUIDynamicService16JSServiceRequestV8fragment7options3urlACSSSg_SDys11AnyHashableVypGSg10Foundation3URLVSgtcfC
__int64 __usercall JSServiceRequest.init(fragment:options:url:)@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        _QWORD *a5@<X8>)
{
  char *v6; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  *a5 = a1;
  a5[1] = a2;
  a5[2] = a3;
  v6 = (char *)a5 + *(int *)(type metadata accessor for JSServiceRequest(0LL) + 24);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100026038(a4, v6);
}