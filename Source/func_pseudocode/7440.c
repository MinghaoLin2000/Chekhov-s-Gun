_$s8Dispatch0A12TimeIntervalO12EyeCandyCoreE7secondsyACSdFZ
__int64 __usercall static DispatchTimeInterval.seconds(_:)@<X0>(__int64 a1@<X0>, __int64 a2@<X8>, double a3@<D0>)
{
  __int64 v4; // x0
  double v5; // d0
  char v6; // zf
  __int64 v7; // x0
  char v8; // nf
  unsigned int *v9; // x8
  __int64 v10; // x0
  double v11; // d0
  __int64 v12; // x0
  __int64 v13; // x0
  double v14; // d0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  double v18; // d0
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 (__fastcall *v21)(__int64, __int64, __int64); // x3
  __int64 result; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 < 0.0 )
    goto LABEL_39;
  if ( a3 >= 9223372040.0 )
  {
    if ( a3 >= 9.22337204e12 )
    {
      if ( a3 >= 9.22337204e15 )
      {
        v16 = ((__int64 (*)(void))sub_10000E080)();
        if ( v8 )
        {
          v17 = sub_10000E090(v16);
          if ( v6 )
          {
LABEL_37:
            __break(1u);
            goto LABEL_38;
          }
          if ( v18 <= -9.22337204e18 )
          {
LABEL_38:
            __break(1u);
LABEL_39:
            result = sub_10001D040(
                       "Fatal error",
                       11LL,
                       2LL,
                       0xD00000000000002BLL,
                       0x80000001000226A0LL,
                       "EyeCandyCore/Queue.swift",
                       24LL,
                       2LL,
                       16LL,
                       0);
            __break(1u);
            return result;
          }
          sub_10000E394(v17);
          v9 = (unsigned int *)&enum case for DispatchTimeInterval.seconds(_:);
        }
        else
        {
          v9 = (unsigned int *)&enum case for DispatchTimeInterval.never(_:);
        }
      }
      else
      {
        v13 = sub_10000E090(a1);
        if ( v6 )
        {
LABEL_34:
          __break(1u);
          goto LABEL_35;
        }
        if ( v14 <= -9.22337204e18 )
        {
LABEL_35:
          __break(1u);
LABEL_36:
          __break(1u);
          goto LABEL_37;
        }
        v15 = sub_10000E080(v13);
        if ( !v8 )
          goto LABEL_36;
        sub_10000E394(v15);
        v9 = (unsigned int *)&enum case for DispatchTimeInterval.milliseconds(_:);
      }
    }
    else
    {
      v10 = sub_10000E090(a1);
      if ( v6 )
      {
LABEL_31:
        __break(1u);
        goto LABEL_32;
      }
      if ( v11 <= -9.22337204e18 )
      {
LABEL_32:
        __break(1u);
LABEL_33:
        __break(1u);
        goto LABEL_34;
      }
      v12 = sub_10000E080(v10);
      if ( !v8 )
        goto LABEL_33;
      sub_10000E394(v12);
      v9 = (unsigned int *)&enum case for DispatchTimeInterval.microseconds(_:);
    }
    goto LABEL_25;
  }
  v4 = sub_10000E090(a1);
  if ( v6 )
  {
    __break(1u);
    goto LABEL_29;
  }
  if ( v5 <= -9.22337204e18 )
  {
LABEL_29:
    __break(1u);
LABEL_30:
    __break(1u);
    goto LABEL_31;
  }
  v7 = sub_10000E080(v4);
  if ( !v8 )
    goto LABEL_30;
  sub_10000E394(v7);
  v9 = (unsigned int *)&enum case for DispatchTimeInterval.nanoseconds(_:);
LABEL_25:
  v19 = *v9;
  v20 = sub_10001C9A0(0LL);
  v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v20 - 8) + 104LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v21(a2, v19, v20);
}