-[SiriNCAlertViewController .cxx_destruct]
void __cdecl -[SiriNCAlertViewController .cxx_destruct](SiriNCAlertViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_audioManager, 0LL);
  objc_storeStrong((id *)&self->_idleDelayTimer, 0LL);
  objc_storeStrong((id *)&self->_lastDialogPhase, 0LL);
  objc_storeStrong((id *)&self->_siriViewController, 0LL);
  objc_storeStrong((id *)&self->_heater, 0LL);
  objc_destroyWeak((id *)&self->_hostViewService);
  objc_destroyWeak((id *)&self->_service);
  objc_storeStrong((id *)&self->_viewHostingInstrumentationHandler, 0LL);
  objc_storeStrong((id *)&self->_visibilityEndowmentAssertion, 0LL);
  objc_storeStrong(&self->_eventMonitor, 0LL);
  objc_storeStrong((id *)&self->_lockStateNotifier, 0LL);
  objc_storeStrong((id *)&self->_autodismisser, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_siriViewHeightConstraint, 0LL);
}