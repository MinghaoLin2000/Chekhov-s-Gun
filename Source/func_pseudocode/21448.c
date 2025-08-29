-[LSRLanguageModel metrics]
id __cdecl -[LSRLanguageModel metrics](LSRLanguageModel *self, SEL a2)
{
  return -[_EARAppLmData metrics](self->_appLmData, "metrics");
}