+[NSKeyedUnarchiver tsu_securelyUnarchiveRoot:forClass:]
id __cdecl +[NSKeyedUnarchiver tsu_securelyUnarchiveRoot:forClass:](id a1, SEL a2, id a3, Class a4)
{
  id v6; // x21
  void *v7; // x20
  NSSet *v8; // x19
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (void *)objc_opt_class(a1);
  v8 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", a4));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "tsu_securelyUnarchiveRoot:forClasses:", v6, v8));
  objc_release(v6);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}