__ZNSt3__110__function12__value_funcIFbON3mlc16xpc_auto_reply_tEPvEE4swapB8ne180100ERS7_
_QWORD *__fastcall std::__function::__value_func<bool ()(mlc::xpc_auto_reply_t &&,void *)>::swap[abi:ne180100](
        _QWORD *result,
        _QWORD *a2)
{
  _QWORD *v3; // x20
  _QWORD *v4; // x8
  _QWORD *v5; // x9
  _QWORD v6[3]; // [xsp+0h] [xbp-30h] BYREF

  if ( a2 != result )
  {
    v3 = result;
    v4 = (_QWORD *)result[3];
    v5 = (_QWORD *)a2[3];
    if ( v4 == result )
    {
      if ( v5 == a2 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*result + 24LL))(result, v6);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3[3] + 32LL))(v3[3]);
        v3[3] = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a2[3] + 24LL))(a2[3], v3);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a2[3] + 32LL))(a2[3]);
        a2[3] = 0LL;
        v3[3] = v3;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(v6[0] + 24LL))(v6, a2);
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v6[0] + 32LL))(v6);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*result + 24LL))(result, a2);
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3[3] + 32LL))(v3[3]);
        v3[3] = a2[3];
      }
      a2[3] = a2;
    }
    else if ( v5 == a2 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a2 + 24LL))(a2, result);
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a2[3] + 32LL))(a2[3]);
      a2[3] = v3[3];
      v3[3] = v3;
    }
    else
    {
      result[3] = v5;
      a2[3] = v4;
    }
  }
  return result;
}