-[AMPCapacityBarView mouseExited:]
void __cdecl -[AMPCapacityBarView mouseExited:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  void *v6; // x21
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___AMPCapacityBarView;
  v4 = objc_retain(a3);
  -[AMPCapacityBarView mouseExited:](&v7, "mouseExited:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trackingArea", v7.receiver, v7.super_class));
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "userInfo"));
    objc_release(v6);
    if ( !v6 )
      -[AMPCapacityBarView hidePopover](self, "hidePopover");
  }
  objc_release(v5);
}