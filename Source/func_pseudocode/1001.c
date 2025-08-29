-[DeviceManageBackupsViewController contextualMenuItems]
NSArray *__cdecl -[DeviceManageBackupsViewController contextualMenuItems](
        DeviceManageBackupsViewController *self,
        SEL a2)
{
  NSArray *contextualMenuItems; // x0
  void *v4; // x20
  id v5; // x21
  NSBundle *v6; // x23
  NSString *v7; // x24
  void *v8; // x21
  id v9; // x23
  NSBundle *v10; // x24
  NSString *v11; // x25
  void *v12; // x23
  id v13; // x24
  NSBundle *v14; // x25
  NSString *v15; // x26
  void *v16; // x22
  NSArray *v17; // x0
  NSArray *v18; // x8
  __int64 vars8; // [xsp+58h] [xbp+8h]

  contextualMenuItems = self->_contextualMenuItems;
  if ( !contextualMenuItems )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v5 = objc_alloc((Class)&OBJC_CLASS___NSMenuItem);
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v6,
             "localizedStringForKey:value:table:",
             CFSTR("Delete"),
             &stru_1000BA220,
             0LL));
    v8 = objc_msgSend(v5, "initWithTitle:action:keyEquivalent:", v7, "selectDeleteMenuItem:", &stru_1000BA220);
    objc_release(v7);
    objc_release(v6);
    v9 = objc_alloc((Class)&OBJC_CLASS___NSMenuItem);
    v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v10,
              "localizedStringForKey:value:table:",
              CFSTR("Archive"),
              &stru_1000BA220,
              0LL));
    v12 = objc_msgSend(v9, "initWithTitle:action:keyEquivalent:", v11, "selectArchiveMenuItem:", &stru_1000BA220);
    objc_release(v11);
    objc_release(v10);
    v13 = objc_alloc((Class)&OBJC_CLASS___NSMenuItem);
    v14 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v15 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v14,
              "localizedStringForKey:value:table:",
              CFSTR("Show In Finder"),
              &stru_1000BA220,
              0LL));
    v16 = objc_msgSend(v13, "initWithTitle:action:keyEquivalent:", v15, "selectShowInFinderMenuItem:", &stru_1000BA220);
    objc_release(v15);
    objc_release(v14);
    objc_msgSend(v4, "addObject:", v8);
    objc_msgSend(v4, "addObject:", v12);
    objc_msgSend(v4, "addObject:", v16);
    v17 = (NSArray *)objc_msgSend(v4, "copy");
    v18 = self->_contextualMenuItems;
    self->_contextualMenuItems = v17;
    objc_release(v18);
    objc_release(v16);
    objc_release(v12);
    objc_release(v8);
    objc_release(v4);
    contextualMenuItems = self->_contextualMenuItems;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(contextualMenuItems);
}