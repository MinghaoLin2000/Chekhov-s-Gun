-[SiriNCAlertViewController autodismisser]
id __cdecl -[SiriNCAlertViewController autodismisser](SiriNCAlertViewController *self, SEL a2)
{
  SiriUIAutoDismissalController *autodismisser; // x0
  SiriUIAutoDismissalController *v4; // x0
  SiriUIAutoDismissalController *v5; // x8
  AFUISiriViewController *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  autodismisser = self->_autodismisser;
  if ( !autodismisser )
  {
    v4 = (SiriUIAutoDismissalController *)objc_msgSend(
                                            objc_alloc((Class)&OBJC_CLASS___SiriUIAutoDismissalController),
                                            "initWithViewController:",
                                            self);
    v5 = self->_autodismisser;
    self->_autodismisser = v4;
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    -[SiriUIAutoDismissalController setDelegate:](self->_autodismisser, "setDelegate:", v6);
    objc_release(v6);
    -[SiriUIAutoDismissalController setClickOutsideContentDelegate:](
      self->_autodismisser,
      "setClickOutsideContentDelegate:",
      self);
    autodismisser = self->_autodismisser;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(autodismisser);
}