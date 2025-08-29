-[TSPDirectoryPackage dataAtRelativePath:allowDecryption:error:]
id __cdecl -[TSPDirectoryPackage dataAtRelativePath:allowDecryption:error:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL4 v6; // w22
  id v8; // x19
  SFUCryptoKey *v9; // x22
  void *v10; // x9
  id *v11; // x22
  id v12; // x21
  id v13; // x0
  TSPFileCoordinatorDelegate *v14; // x21
  void *v15; // x0
  id v16; // x20
  objc_super v18; // [xsp+0h] [xbp-D0h] BYREF
  id obj; // [xsp+10h] [xbp-C0h] BYREF
  _QWORD v20[4]; // [xsp+18h] [xbp-B8h] BYREF
  id v21; // [xsp+38h] [xbp-98h]
  __int64 *v22; // [xsp+40h] [xbp-90h]
  __int64 *v23; // [xsp+48h] [xbp-88h]
  __int64 v24; // [xsp+50h] [xbp-80h] BYREF
  __int64 *v25; // [xsp+58h] [xbp-78h]
  __int64 v26; // [xsp+60h] [xbp-70h]
  __int64 (__fastcall *v27)(); // [xsp+68h] [xbp-68h]
  __int64 (__fastcall *v28)(); // [xsp+70h] [xbp-60h]
  id v29; // [xsp+78h] [xbp-58h]
  __int64 v30; // [xsp+80h] [xbp-50h] BYREF
  __int64 *v31; // [xsp+88h] [xbp-48h]
  __int64 v32; // [xsp+90h] [xbp-40h]
  __int64 (__fastcall *v33)(); // [xsp+98h] [xbp-38h]
  __int64 (__fastcall *v34)(); // [xsp+A0h] [xbp-30h]
  id v35; // [xsp+A8h] [xbp-28h]
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v6 = a4;
  v8 = objc_retain(a3);
  v30 = 0LL;
  v31 = &v30;
  v32 = 0x3032000000LL;
  v33 = sub_10000E010;
  v34 = sub_10000E020;
  v35 = 0LL;
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x3032000000LL;
  v27 = sub_10000E010;
  v28 = sub_10000E020;
  v29 = 0LL;
  if ( v6
    && (v9 = objc_retainAutoreleasedReturnValue(-[TSPPackage decryptionKey](self, "decryptionKey")), objc_release(v9), v9) )
  {
    v11 = (id *)(v25 + 5);
    v10 = (void *)v25[5];
    v18.receiver = self;
    v18.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackage;
    obj = v10;
    v12 = objc_retainAutoreleasedReturnValue(
            -[TSPPackage dataAtRelativePath:allowDecryption:error:](
              &v18,
              "dataAtRelativePath:allowDecryption:error:",
              v8,
              1LL,
              &obj));
    objc_storeStrong(v11, obj);
    v13 = (id)v31[5];
    v31[5] = (__int64)v12;
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3254779904LL;
    v20[2] = sub_10000FFF8;
    v20[3] = &unk_1001D1820;
    v21 = objc_retain(v8);
    v22 = &v30;
    v23 = &v24;
    -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v14, "performReadUsingAccessor:", v20);
    objc_release(v14);
    v13 = v21;
  }
  objc_release(v13);
  v15 = (void *)v31[5];
  if ( a5 && !v15 )
  {
    *a5 = objc_retainAutorelease((id)v25[5]);
    v15 = (void *)v31[5];
  }
  v16 = objc_retain(v15);
  _Block_object_dispose(&v24, 8);
  objc_release(v29);
  _Block_object_dispose(&v30, 8);
  objc_release(v35);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}