-[SPCloudStorageHelper fetchCloudStoragePlanDetailsWithCompletionHandler:]
void __cdecl -[SPCloudStorageHelper fetchCloudStoragePlanDetailsWithCompletionHandler:](
        SPCloudStorageHelper *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, void *, _QWORD); // x20
  id v5; // x0
  void *v6; // x19
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void (__fastcall **)(id, void *, _QWORD))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[SPCloudStorageHelper currentiCloudAccount](self, "currentiCloudAccount"));
  v6 = v5;
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "getiCloudStorageUsageDict"));
    v4[2](v4, v7, 0LL);
  }
  else
  {
    v7 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSError),
           "initWithDomain:code:userInfo:",
           CFSTR("SPCloudStorageHelperErrorDomain"),
           1LL,
           0LL);
    ((void (__fastcall **)(id, void *, void *))v4)[2](v4, 0LL, v7);
  }
  objc_release(v4);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}