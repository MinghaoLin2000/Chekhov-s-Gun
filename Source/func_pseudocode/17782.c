-[CoreMLModelSecurityXPCFeatureProvider featureNames]
NSSet *__cdecl -[CoreMLModelSecurityXPCFeatureProvider featureNames](
        CoreMLModelSecurityXPCFeatureProvider *self,
        SEL a2)
{
  NSSet *featureNames; // x0
  NSSet **p_featureNames; // x19
  CoreMLModelSecurityServiceToClientProtocol *v5; // x20
  NSNumber *v6; // x21
  _QWORD v8[5]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v9; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v10; // [xsp+38h] [xbp-48h]
  __int64 v11; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v12)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v13)(); // [xsp+50h] [xbp-30h]
  id v14; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  p_featureNames = &self->_featureNames;
  featureNames = self->_featureNames;
  if ( !featureNames )
  {
    v9 = 0LL;
    v10 = &v9;
    v11 = 0x3032000000LL;
    v12 = sub_100008390;
    v13 = sub_1000083A0;
    v14 = 0LL;
    v5 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurityXPCFeatureProvider clientProxy](self, "clientProxy"));
    v6 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurityXPCFeatureProvider uniqueKeyForProvider](self, "uniqueKeyForProvider"));
    v8[0] = _NSConcreteStackBlock;
    v8[1] = 3254779904LL;
    v8[2] = sub_1000083A8;
    v8[3] = &unk_100010358;
    v8[4] = &v9;
    -[CoreMLModelSecurityServiceToClientProtocol clientFeatureNames:withReply:](
      v5,
      "clientFeatureNames:withReply:",
      v6,
      v8);
    objc_release(v6);
    objc_release(v5);
    objc_storeStrong((id *)p_featureNames, (id)v10[5]);
    _Block_object_dispose(&v9, 8);
    objc_release(v14);
    featureNames = *p_featureNames;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(featureNames);
}