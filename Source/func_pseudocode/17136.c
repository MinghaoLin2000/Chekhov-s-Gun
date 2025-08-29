-[AMActionLoaderServiceListener loaderServiceActionForActionUUID:]
id __cdecl -[AMActionLoaderServiceListener loaderServiceActionForActionUUID:](
        AMActionLoaderServiceListener *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  os_unfair_lock_s *p_xpcServicesLock; // x21
  NSMapTable *v7; // x22
  NSEnumerator *v8; // x23
  NSArray *v9; // x24
  void *v10; // x20
  id v11; // x21
  NSAssertionHandler *v13; // x22
  _QWORD v14[4]; // [xsp+10h] [xbp-90h] BYREF
  id v15; // [xsp+30h] [xbp-70h]
  __int64 *v16; // [xsp+38h] [xbp-68h]
  __int64 v17; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v18; // [xsp+48h] [xbp-58h]
  __int64 v19; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v20)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v21)(); // [xsp+60h] [xbp-40h]
  id v22; // [xsp+68h] [xbp-38h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( v5 )
  {
    p_xpcServicesLock = &self->__xpcServicesLock;
    os_unfair_lock_lock(&self->__xpcServicesLock);
    v7 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceListener _xpcServicesByConnection](self, "_xpcServicesByConnection"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSMapTable objectEnumerator](v7, "objectEnumerator"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSEnumerator allObjects](v8, "allObjects"));
    v10 = -[NSArray copy](v9, "copy");
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
    os_unfair_lock_unlock(p_xpcServicesLock);
    v17 = 0LL;
    v18 = &v17;
    v19 = 0x3032000000LL;
    v20 = sub_1000064F0;
    v21 = sub_100006500;
    v22 = 0LL;
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100006508;
    v14[3] = &unk_10001C3D8;
    v16 = &v17;
    v15 = objc_retain(v5);
    objc_msgSend(v10, "enumerateObjectsUsingBlock:", v14);
    v11 = objc_retain((id)v18[5]);
    objc_release(v15);
    _Block_object_dispose(&v17, 8);
    objc_release(v22);
    objc_release(v10);
  }
  else
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v13,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceListener.m"),
      71LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("actionUUID"));
    objc_release(v13);
    v11 = 0LL;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}