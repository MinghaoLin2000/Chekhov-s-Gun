_$s7Combine10PublishersO9SPIHelperE16CSCombineLatest5VyAFy_xq_q0_q1_q2_Gx_q_q0_q1_q2_tcfC
__int64 __usercall Publishers.CSCombineLatest5.init(_:_:_:_:_:)@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X4>,
        __int64 a6@<X5>,
        __int64 a7@<X6>,
        __int64 a8@<X7>,
        __int64 a9@<X8>,
        __int64 a10,
        __int64 a11,
        __int128 a12,
        __int128 a13,
        __int64 a14)
{
  int *v21; // x26
  _QWORD v24[5]; // [xsp+28h] [xbp-A8h] BYREF
  __int128 v25; // [xsp+50h] [xbp-80h]
  __int128 v26; // [xsp+60h] [xbp-70h]
  __int64 v27; // [xsp+70h] [xbp-60h]

  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a6 - 8) + 32LL))(a9, a1, a6);
  v24[0] = a6;
  v24[1] = a7;
  v24[2] = a8;
  v24[3] = a10;
  v24[4] = a11;
  v25 = a12;
  v26 = a13;
  v27 = a14;
  v21 = (int *)type metadata accessor for Publishers.CSCombineLatest5(0LL, v24);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a7 - 8) + 32LL))(a9 + v21[25], a2, a7);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a8 - 8) + 32LL))(a9 + v21[26], a3, a8);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a10 - 8) + 32LL))(a9 + v21[27], a4, a10);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a11 - 8) + 32LL))(a9 + v21[28], a5, a11);
}