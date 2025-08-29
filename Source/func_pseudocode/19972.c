__ZN38JobRequestAttributes_FromRequestParamsC2EPU40objcproto29PrintJobRequestParamsProtocol8NSObject
__int64 __fastcall JobRequestAttributes_FromRequestParams::JobRequestAttributes_FromRequestParams(__int64 a1, id a2)
{
  id v4; // x20
  NSMutableSet *v5; // x0
  void *v6; // x8

  v4 = objc_retain(a2);
  *(_QWORD *)a1 = off_10009C378;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_OWORD *)(a1 + 168) = 0u;
  objc_storeStrong((id *)(a1 + 168), a2);
  v5 = objc_opt_new(&OBJC_CLASS___NSMutableSet);
  v6 = *(void **)(a1 + 176);
  *(_QWORD *)(a1 + 176) = v5;
  objc_release(v6);
  objc_release(v4);
  return a1;
}