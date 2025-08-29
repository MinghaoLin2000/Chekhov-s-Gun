-[DeviceFinderTabContainerViewController barChoiceFor:]
id __cdecl -[DeviceFinderTabContainerViewController barChoiceFor:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x0
  void *v6; // x21
  id v7; // x20
  __int64 v8; // x0
  id v9; // x0
  __int64 v10; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___NSPopUpButton);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) != 0 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "selectedItem"));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoiceForMenuItem:](self, "barChoiceForMenuItem:", v6));
    objc_release(v6);
    goto LABEL_9;
  }
  v8 = objc_opt_class(&OBJC_CLASS___NSButton);
  if ( (objc_opt_isKindOfClass(v4, v8) & 1) != 0 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoiceForButton:](self, "barChoiceForButton:", v4));
LABEL_7:
    v7 = v9;
    goto LABEL_9;
  }
  v10 = objc_opt_class(&OBJC_CLASS___NSMenuItem);
  if ( (objc_opt_isKindOfClass(v4, v10) & 1) != 0 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController barChoiceForMenuItem:](self, "barChoiceForMenuItem:", v4));
    goto LABEL_7;
  }
  v7 = 0LL;
LABEL_9:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}