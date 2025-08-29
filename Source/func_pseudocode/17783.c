-[CoreMLModelSecurityXPCFeatureProvider featureValueForName:]
id __cdecl -[CoreMLModelSecurityXPCFeatureProvider featureValueForName:](
        CoreMLModelSecurityXPCFeatureProvider *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableDictionary *v5; // x21
  void *v6; // x0
  id v7; // x20
  CoreMLModelSecurityServiceToClientProtocol *v8; // x21
  NSNumber *v9; // x22
  id v10; // x23
  __int64 v11; // x22
  NSMutableDictionary *v12; // x21
  void **v14; // [xsp+0h] [xbp-90h] BYREF
  __int64 v15; // [xsp+8h] [xbp-88h]
  __int64 (__fastcall *v16)(int, id); // [xsp+10h] [xbp-80h]
  void *v17; // [xsp+18h] [xbp-78h]
  id v18; // [xsp+20h] [xbp-70h]
  __int64 *v19; // [xsp+28h] [xbp-68h]
  __int64 v20; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v21; // [xsp+38h] [xbp-58h]
  __int64 v22; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v23)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v24)(); // [xsp+50h] [xbp-40h]
  id v25; // [xsp+58h] [xbp-38h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v4 = objc_retain(a3);
  v20 = 0LL;
  v21 = &v20;
  v22 = 0x3032000000LL;
  v23 = sub_100008390;
  v24 = sub_1000083A0;
  v5 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurityXPCFeatureProvider resolvedFeaturesDict](self, "resolvedFeaturesDict"));
  v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v4));
  objc_release(v5);
  v6 = (void *)v21[5];
  if ( v6 )
  {
    v7 = objc_retain(v6);
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurityXPCFeatureProvider clientProxy](self, "clientProxy"));
    v9 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurityXPCFeatureProvider uniqueKeyForProvider](self, "uniqueKeyForProvider"));
    v14 = _NSConcreteStackBlock;
    v15 = 3254779904LL;
    v16 = sub_1000086E4;
    v17 = &unk_100010388;
    v10 = objc_retain(v4);
    v18 = v10;
    v19 = &v20;
    -[CoreMLModelSecurityServiceToClientProtocol clientFeatureValueForName:uniqueKeyForProvider:withReply:](
      v8,
      "clientFeatureValueForName:uniqueKeyForProvider:withReply:",
      v10,
      v9,
      &v14);
    objc_release(v9);
    objc_release(v8);
    v11 = v21[5];
    v12 = objc_retainAutoreleasedReturnValue(
            -[CoreMLModelSecurityXPCFeatureProvider resolvedFeaturesDict](
              self,
              "resolvedFeaturesDict",
              v14,
              v15,
              v16,
              v17));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v12, "setObject:forKeyedSubscript:", v11, v10);
    objc_release(v12);
    v7 = objc_retain((id)v21[5]);
    objc_release(v18);
  }
  _Block_object_dispose(&v20, 8);
  objc_release(v25);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}