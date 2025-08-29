_$s18SiriSuggestionsKit6LoggerO0aB18BookkeepingServiceE29bookkeepingXPCServiceCategory2osABVvgZ
__int64 __usercall static Logger.bookkeepingXPCServiceCategory.getter@<X0>(__int64 a1@<X8>)
{
  __int64 v2; // x20
  __int64 v3; // x1
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( qword_100014A30 != -1 )
    swift_once(&qword_100014A30, sub_1000053A8);
  v2 = sub_10000D9B8(0LL);
  v3 = sub_100005098(v2, &static Logger.bookkeepingXPCServiceCategory);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v2 - 8) + 16LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v4(a1, v3, v2);
}