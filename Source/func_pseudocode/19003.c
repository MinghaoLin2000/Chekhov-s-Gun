-[SiriNCAlertViewController lockStateForSiriViewController:]
unsigned __int64 __cdecl -[SiriNCAlertViewController lockStateForSiriViewController:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  if ( (unsigned int)-[SRFLockStateNotifier isLocked](self->_lockStateNotifier, "isLocked", a3) )
    return 2LL;
  else
    return 0LL;
}