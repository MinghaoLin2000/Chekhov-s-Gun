_$sSo18OS_dispatch_sourceC12EyeCandyCoreE23makeSignalSourceIgnored6signal5queueSo0a1_b1_c1_K0_ps5Int32V_So0a1_b1_L0CtFZ
__int64 __fastcall static OS_dispatch_source.makeSignalSourceIgnored(signal:queue:)(__int64 a1, __int64 a2)
{
  void (__cdecl *v4)(int); // x0

  v4 = (void (__cdecl *)(int))sub_10001C990();
  signal(a1, v4);
  sub_10000B064(0LL, &unk_100029BB8, &OBJC_CLASS___OS_dispatch_source_ptr);
  return sub_10001CD10(a1, a2);
}