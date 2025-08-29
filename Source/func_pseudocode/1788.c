-[DeviceAccessibleTextFieldCell accessibilityAttributeValue:forParameter:]
id __cdecl -[DeviceAccessibleTextFieldCell accessibilityAttributeValue:forParameter:](
        DeviceAccessibleTextFieldCell *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  __int64 v5; // x0
  id v6; // x0
  __int64 v7; // x0
  void *v8; // x20
  void *v9; // x21
  void *v10; // x20
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___DeviceAccessibleTextFieldCell;
  v4 = objc_retainAutoreleasedReturnValue(
         -[DeviceAccessibleTextFieldCell accessibilityAttributeValue:forParameter:](
           &v12,
           "accessibilityAttributeValue:forParameter:",
           a3,
           a4));
  v5 = objc_opt_class(&OBJC_CLASS___NSString);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByReplacingOccurrencesOfString:withString:", CFSTR("·"), CFSTR(" ")));
  }
  else
  {
    v7 = objc_opt_class(&OBJC_CLASS___NSAttributedString);
    if ( (objc_opt_isKindOfClass(v4, v7) & 1) != 0 )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "string"));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByReplacingOccurrencesOfString:withString:", CFSTR("·"), CFSTR(" ")));
      objc_release(v8);
      v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSAttributedString), "initWithString:", v9);
      objc_release(v9);
      goto LABEL_7;
    }
    v6 = objc_retain(v4);
  }
  v10 = v6;
LABEL_7:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}