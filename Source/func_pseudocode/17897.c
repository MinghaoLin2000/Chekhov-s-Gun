-[IsExtensionEnabled askUserForPermissionAndEnableFinderExtensionsWithReply:]
void __cdecl -[IsExtensionEnabled askUserForPermissionAndEnableFinderExtensionsWithReply:](
        IsExtensionEnabled *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  id v5; // x20
  IsExtensionEnabled *v6; // x21
  id v7; // x22
  id v8; // x23
  IsExtensionEnabled *v9; // x21
  id v10; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-68h] BYREF
  id v12; // [xsp+28h] [xbp-48h]
  id v13; // [xsp+30h] [xbp-40h]
  id v14; // [xsp+38h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[IsExtensionEnabled fileProviderDomainsByIDToEnable](self, "fileProviderDomainsByIDToEnable"));
  if ( objc_msgSend(v5, "count") )
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3321888768LL;
    block[2] = sub_100002284;
    block[3] = &unk_1000041C0;
    v6 = objc_retain(self);
    v7 = objc_retain(v5);
    v8 = objc_retainBlock(v4);
    v9 = objc_retain(v6);
    v12 = v9;
    v10 = objc_retain(v7);
    v13 = v10;
    v14 = objc_retainBlock(v8);
    dispatch_async(&_dispatch_main_q, block);
    objc_release(v8);
    objc_release(v10);
    objc_release(v9);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
  }
  else
  {
    (*((void (__fastcall **)(id, __int64))v4 + 2))(v4, 1LL);
  }
  objc_release(v5);
  objc_release(v4);
}