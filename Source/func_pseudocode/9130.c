-[TSPDirectoryPackage hasDataAtRelativePath:]
bool __cdecl -[TSPDirectoryPackage hasDataAtRelativePath:](TSPDirectoryPackage *self, SEL a2, id a3)
{
  id v4; // x19
  TSPFileCoordinatorDelegate *v5; // x20
  id v6; // x21
  _QWORD v8[4]; // [xsp+0h] [xbp-70h] BYREF
  id v9; // [xsp+20h] [xbp-50h]
  __int64 *v10; // [xsp+28h] [xbp-48h]
  __int64 v11; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-38h]
  __int64 v13; // [xsp+40h] [xbp-30h]
  char v14; // [xsp+48h] [xbp-28h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10001042C;
  v8[3] = &unk_1001D17B0;
  v6 = objc_retain(v4);
  v9 = v6;
  v10 = &v11;
  -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v5, "performReadUsingAccessor:", v8);
  objc_release(v5);
  LOBYTE(v4) = *((_BYTE *)v12 + 24);
  objc_release(v9);
  _Block_object_dispose(&v11, 8);
  objc_release(v6);
  return (char)v4;
}