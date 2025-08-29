-[TSPDirectoryPackage newRawDataReadChannelAtRelativePath:]
id __cdecl -[TSPDirectoryPackage newRawDataReadChannelAtRelativePath:](TSPDirectoryPackage *self, SEL a2, id a3)
{
  id v4; // x19
  TSPFileCoordinatorDelegate *v5; // x20
  id v6; // x21
  id v7; // x19
  _QWORD v9[4]; // [xsp+0h] [xbp-80h] BYREF
  id v10; // [xsp+20h] [xbp-60h]
  __int64 *v11; // [xsp+28h] [xbp-58h]
  __int64 v12; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v13; // [xsp+38h] [xbp-48h]
  __int64 v14; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v15)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v16)(); // [xsp+50h] [xbp-30h]
  id v17; // [xsp+58h] [xbp-28h]

  v4 = objc_retain(a3);
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3032000000LL;
  v15 = sub_10000E010;
  v16 = sub_10000E020;
  v17 = 0LL;
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage fileCoordinatorDelegate](self, "fileCoordinatorDelegate"));
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100010244;
  v9[3] = &unk_1001D17B0;
  v6 = objc_retain(v4);
  v10 = v6;
  v11 = &v12;
  -[TSPFileCoordinatorDelegate performReadUsingAccessor:](v5, "performReadUsingAccessor:", v9);
  objc_release(v5);
  v7 = objc_retain((id)v13[5]);
  objc_release(v10);
  _Block_object_dispose(&v12, 8);
  objc_release(v17);
  objc_release(v6);
  return v7;
}