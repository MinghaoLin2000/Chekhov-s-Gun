-[AMPCapacityBarView createPopover]
void __cdecl -[AMPCapacityBarView createPopover](AMPCapacityBarView *self, SEL a2)
{
  AMPCapacityBarPopover *v3; // x20
  NSBundle *v4; // x22
  unsigned __int8 v5; // w23
  NSArray *v6; // x21
  AMPCapacityBarPopover *pop; // x22
  AMPCapacityBarPopover *v8; // x20
  NSArray *popObjects; // x0
  uint8_t v10[8]; // [xsp+0h] [xbp-40h] BYREF
  id v11; // [xsp+8h] [xbp-38h] BYREF

  if ( !self->_pop )
  {
    v3 = objc_alloc_init(&OBJC_CLASS___AMPCapacityBarPopover);
    v4 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
    v11 = 0LL;
    v5 = -[NSBundle loadNibNamed:owner:topLevelObjects:](
           v4,
           "loadNibNamed:owner:topLevelObjects:",
           CFSTR("AMPCapacityBarPopover"),
           v3,
           &v11);
    v6 = (NSArray *)objc_retain(v11);
    objc_release(v4);
    if ( (v5 & 1) == 0 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_WORD *)v10 = 0;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Failed to load category popover",
          v10,
          2u);
      }
      objc_release(v3);
      v3 = 0LL;
    }
    pop = self->_pop;
    self->_pop = v3;
    v8 = objc_retain(v3);
    objc_release(pop);
    popObjects = self->_popObjects;
    self->_popObjects = v6;
    objc_release(popObjects);
    objc_release(v8);
  }
}