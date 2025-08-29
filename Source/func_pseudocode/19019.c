-[SiriNCAlertViewController siriViewControllerTextInputDidInsertAccentVariant:]
void __cdecl -[SiriNCAlertViewController siriViewControllerTextInputDidInsertAccentVariant:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  -[SiriUIAutoDismissalController cancelClickOutsideOfContentHoldBackTimerIfNeeded](
    self->_autodismisser,
    "cancelClickOutsideOfContentHoldBackTimerIfNeeded",
    a3);
}