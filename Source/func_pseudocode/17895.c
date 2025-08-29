-[IsExtensionEnabled isExtensionEnabledWithReply:]
IsExtensionEnabled *__cdecl -[IsExtensionEnabled isExtensionEnabledWithReply:](IsExtensionEnabled *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x22
  void *v6; // x20
  _UNKNOWN **v7; // x23
  id v8; // x22
  id v9; // x21
  id v10; // x22
  IsExtensionEnabled *result; // x0
  _QWORD v12[4]; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+20h] [xbp-40h]
  id v14; // [xsp+28h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[IsExtensionEnabled requestingAppURL](self, "requestingAppURL"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "absoluteString"));
  objc_release(v5);
  if ( v6 )
  {
    if ( (unsigned int)sub_100001AA4() )
      v7 = &off_100004490;
    else
      v7 = &off_100004468;
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3321888768LL;
    v12[2] = sub_100001B18;
    v12[3] = &unk_100004190;
    v8 = objc_retain(v6);
    v9 = objc_retainBlock(v4);
    v10 = objc_retain(v8);
    v13 = v10;
    v14 = objc_retainBlock(v9);
    +[NSExtension extensionsWithMatchingAttributes:completion:](
      &OBJC_CLASS___NSExtension,
      "extensionsWithMatchingAttributes:completion:",
      v7,
      v12);
    objc_release(v9);
    objc_release(v10);
    objc_release(v14);
    objc_release(v13);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD))v4 + 2))(v4, 0LL);
  }
  objc_release(v6);
  objc_release(v4);
  return result;
}