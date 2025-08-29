+[MacOSSharingExtensionContext _allowedErrorClasses]
id __cdecl +[MacOSSharingExtensionContext _allowedErrorClasses](id a1, SEL a2)
{
  id v2; // x19
  void *v3; // x0
  void *v4; // x20
  id v5; // x0
  void *v6; // x21
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8.receiver = a1;
  v8.super_class = (Class)&OBJC_METACLASS___MacOSSharingExtensionContext;
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSendSuper2(&v8, "_allowedErrorClasses"));
  v3 = objc_retainAutoreleasedReturnValue(+[NSSharingService _cloudSharingErrorClasses](&OBJC_CLASS___NSSharingService, "_cloudSharingErrorClasses"));
  v4 = v3;
  if ( v2 )
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "setByAddingObjectsFromSet:", v3));
  else
    v5 = objc_retain(v3);
  v6 = v5;
  objc_release(v4);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}