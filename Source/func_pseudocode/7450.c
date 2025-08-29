_$sSo21OS_dispatch_semaphoreC12EyeCandyCoreE4waity8Dispatch0H13TimeoutResultOSdF
__int64 __fastcall OS_dispatch_semaphore.wait(_:)(double a1)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x16
  __int64 v5; // x23
  __int64 v6; // x0
  __int64 v7; // x8
  char *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x12
  char *v11; // x22
  void (__fastcall *v12)(char *, __int64); // t1
  __int64 v13; // x20
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF

  v2 = sub_10001CA00(0LL);
  v3 = sub_1000044E8(v2);
  v5 = v4;
  v6 = __chkstk_darwin(v3);
  v8 = (char *)&v15 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = __chkstk_darwin(v6);
  v11 = (char *)&v15 - v10;
  sub_10001C9F0(v9);
  sub_10001CA30(a1);
  v12 = *(void (__fastcall **)(char *, __int64))(v5 + 8);
  v12(v8, v2);
  v13 = sub_10001CD60(v11) & 1;
  v12(v11, v2);
  return v13;
}