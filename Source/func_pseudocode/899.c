-[AMPCapacityBarView mouseEntered:]
void __cdecl -[AMPCapacityBarView mouseEntered:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  void *v6; // x21
  void *v7; // x21
  void *v8; // x22
  void *v9; // x23
  NSString *v10; // x0
  NSString *popoverLabelString; // x8
  NSString *v12; // x0
  NSString *popoverSizeString; // x8
  CGFloat v14; // d0
  CGFloat v15; // d1
  CGFloat v16; // d2
  CGFloat v17; // d3
  objc_super v18; // [xsp+0h] [xbp-40h] BYREF

  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___AMPCapacityBarView;
  v4 = objc_retain(a3);
  -[AMPCapacityBarView mouseEntered:](&v18, "mouseEntered:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trackingArea", v18.receiver, v18.super_class));
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarView window](self, "window"));
    objc_release(v6);
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "userInfo"));
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("NAME")));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("SIZE")));
      if ( objc_msgSend(v8, "length") && objc_msgSend(v9, "length") )
      {
        v10 = (NSString *)objc_msgSend(v8, "copy");
        popoverLabelString = self->_popoverLabelString;
        self->_popoverLabelString = v10;
        objc_release(popoverLabelString);
        v12 = (NSString *)objc_msgSend(v9, "copy");
        popoverSizeString = self->_popoverSizeString;
        self->_popoverSizeString = v12;
        objc_release(popoverSizeString);
        objc_msgSend(v5, "rect");
        self->_popoverRect.origin.x = v14;
        self->_popoverRect.origin.y = v15;
        self->_popoverRect.size.width = v16;
        self->_popoverRect.size.height = v17;
        -[AMPCapacityBarView showPopover](self, "showPopover");
      }
      objc_release(v9);
      objc_release(v8);
      objc_release(v7);
    }
  }
  objc_release(v5);
}