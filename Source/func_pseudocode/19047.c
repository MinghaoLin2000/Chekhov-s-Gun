-[SiriNCAlertViewController isSiriListening]
bool __cdecl -[SiriNCAlertViewController isSiriListening](SiriNCAlertViewController *self, SEL a2)
{
  AFUISiriViewController *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v3 = (unsigned __int8)-[AFUISiriViewController isListening](v2, "isListening");
  objc_release(v2);
  return v3;
}