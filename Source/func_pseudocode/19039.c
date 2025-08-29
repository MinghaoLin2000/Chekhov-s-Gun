-[SiriNCAlertViewController _isDelayingSessionEnd]
// attributes: thunk
bool __cdecl -[SiriNCAlertViewController _isDelayingSessionEnd](SiriNCAlertViewController *self, SEL a2)
{
  return -[SiriNCAlertViewController delaySessionForTTS](self, "delaySessionForTTS");
}