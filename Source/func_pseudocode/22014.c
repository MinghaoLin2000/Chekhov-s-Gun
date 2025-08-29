__ZNSt3__110unique_ptrIN3mlc14xpc_dispatch_tENS_14default_deleteIS2_EEE5resetB8ne180100EPS2_
__int64 *__fastcall std::unique_ptr<mlc::xpc_dispatch_t>::reset[abi:ne180100](__int64 *result, __int64 a2)
{
  __int64 v2; // x19
  _QWORD *v3; // x21
  void *v4; // x0
  _QWORD *v5; // x20
  _QWORD *v6; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *result;
  *result = a2;
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 24);
    while ( v3 )
    {
      v5 = v3;
      v3 = (_QWORD *)*v3;
      v6 = (_QWORD *)v5[6];
      if ( v6 == v5 + 3 )
      {
        (*(void (__fastcall **)(_QWORD *))(v5[3] + 32LL))(v5 + 3);
      }
      else if ( v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 40LL))(v6);
      }
      operator delete(v5);
    }
    v4 = *(void **)(v2 + 8);
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( v4 )
      operator delete(v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (__int64 *)operator delete(v2, 0x10A0C402A8DDD12LL);
  }
  return result;
}