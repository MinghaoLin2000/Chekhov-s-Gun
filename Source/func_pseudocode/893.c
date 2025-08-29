-[AMPCapacityBarView _showPopover:]
void __cdecl -[AMPCapacityBarView _showPopover:](AMPCapacityBarView *self, SEL a2, id a3)
{
  id v4; // x19
  NSPopover *v5; // x21
  unsigned __int8 v6; // w22
  NSPopover *v7; // x21
  NSString *popoverLabelString; // x21
  NSTextField *v9; // x22
  NSString *popoverSizeString; // x21
  NSTextField *v11; // x20
  void *v12; // x0
  NSString *v13; // x21
  NSTextField *v14; // x22
  NSString *v15; // x21
  NSTextField *v16; // x22
  NSPopover *v17; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover popover](self->_pop, "popover"));
  v6 = -[NSPopover isShown](v5, "isShown");
  objc_release(v5);
  if ( (v6 & 1) != 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover popover](self->_pop, "popover"));
    -[NSPopover showRelativeToRect:ofView:preferredEdge:](
      v7,
      "showRelativeToRect:ofView:preferredEdge:",
      self,
      3LL,
      self->_popoverRect.origin.x,
      self->_popoverRect.origin.y,
      self->_popoverRect.size.width,
      self->_popoverRect.size.height);
    objc_release(v7);
    popoverLabelString = self->_popoverLabelString;
    v9 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover categoryField](self->_pop, "categoryField"));
    -[NSTextField setStringValue:](v9, "setStringValue:", popoverLabelString);
    objc_release(v9);
    popoverSizeString = self->_popoverSizeString;
    v11 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover sizeField](self->_pop, "sizeField"));
    -[NSTextField setStringValue:](v11, "setStringValue:", popoverSizeString);
    v12 = v11;
  }
  else
  {
    v13 = self->_popoverLabelString;
    v14 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover categoryField](self->_pop, "categoryField"));
    -[NSTextField setStringValue:](v14, "setStringValue:", v13);
    objc_release(v14);
    v15 = self->_popoverSizeString;
    v16 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover sizeField](self->_pop, "sizeField"));
    -[NSTextField setStringValue:](v16, "setStringValue:", v15);
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarPopover popover](self->_pop, "popover"));
    -[NSPopover showRelativeToRect:ofView:preferredEdge:](
      v17,
      "showRelativeToRect:ofView:preferredEdge:",
      self,
      3LL,
      self->_popoverRect.origin.x,
      self->_popoverRect.origin.y,
      self->_popoverRect.size.width,
      self->_popoverRect.size.height);
    v12 = v17;
  }
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}