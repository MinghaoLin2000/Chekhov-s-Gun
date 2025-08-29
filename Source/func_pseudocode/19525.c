-[IFDBundle allocateLun:]
id __cdecl -[IFDBundle allocateLun:](IFDBundle *self, SEL a2, id a3)
{
  id v4; // x19
  NSMutableArray *v5; // x20
  __int64 i; // x22
  NSMutableArray *v7; // x24
  NSNumber *v8; // x23
  NSMutableArray *usedLuns; // x21
  NSNumber *v10; // x23
  os_log_s *v11; // x20
  NSNumber *v12; // x20
  CFURLRef v13; // x22
  os_log_s *v14; // x23
  unsigned int maxDevices; // w8
  int v17; // [xsp+0h] [xbp-70h] BYREF
  id v18; // [xsp+4h] [xbp-6Ch]
  __int16 v19; // [xsp+Ch] [xbp-64h]
  CFURLRef v20; // [xsp+Eh] [xbp-62h]
  __int16 v21; // [xsp+16h] [xbp-5Ah]
  unsigned int v22; // [xsp+18h] [xbp-58h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self->_usedLuns);
  objc_sync_enter(v5);
  if ( !-[NSMutableArray count](self->_usedLuns, "count") )
  {
    i = 0LL;
LABEL_7:
    usedLuns = self->_usedLuns;
    v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", i));
    -[NSMutableArray addObject:](usedLuns, "addObject:", v10);
    objc_release(v10);
    objc_sync_exit(v5);
    objc_release(v5);
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08());
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
      sub_1000058DC(v4, i, v11);
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", i));
    goto LABEL_13;
  }
  if ( (unsigned __int64)-[NSMutableArray count](self->_usedLuns, "count") < self->_maxDevices )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 0x10000) )
    {
      v7 = self->_usedLuns;
      v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", i));
      LODWORD(v7) = (unsigned int)-[NSMutableArray containsObject:](v7, "containsObject:", v8);
      objc_release(v8);
      if ( !(_DWORD)v7 )
        break;
    }
    goto LABEL_7;
  }
  v13 = CFBundleCopyBundleURL(self->_bundle);
  v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08());
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
  {
    maxDevices = self->_maxDevices;
    v17 = 138543874;
    v18 = v4;
    v19 = 2114;
    v20 = v13;
    v21 = 1024;
    v22 = maxDevices;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_ERROR,
      "%{public}@: ignoring, %{public}@ supports only %u devices at a time",
      (uint8_t *)&v17,
      0x1Cu);
  }
  objc_release(v14);
  objc_release(v13);
  objc_sync_exit(v5);
  objc_release(v5);
  v12 = 0LL;
LABEL_13:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}