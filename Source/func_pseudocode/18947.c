-[SiriNCService .cxx_destruct]
void __cdecl -[SiriNCService .cxx_destruct](SiriNCService *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_viewServices, 0LL);
  objc_storeStrong((id *)&self->_enqueuedMyriadActionsOnAlertViewControllerAvailable, 0LL);
  objc_storeStrong((id *)&self->_presentationDependentBlocksLock, 0LL);
  objc_storeStrong((id *)&self->_presentationDependentBlocks, 0LL);
  objc_storeStrong((id *)&self->_currentSCDAContext, 0LL);
  objc_storeStrong((id *)&self->_scdaCoordinator, 0LL);
  objc_storeStrong((id *)&self->_currentMyriadContext, 0LL);
  objc_storeStrong((id *)&self->_myriadCoordinator, 0LL);
  objc_storeStrong((id *)&self->_alertStateLock, 0LL);
  objc_destroyWeak((id *)&self->_localObjectProxy);
  objc_storeStrong((id *)&self->_alertViewController, 0LL);
  objc_storeStrong((id *)&self->_alert, 0LL);
  objc_destroyWeak((id *)&self->_connection);
  objc_storeStrong((id *)&self->_audioDeviceManager, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_dismissalWatchdogTimer, 0LL);
}