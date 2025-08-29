-[SiriNCService setLocalObjectProxy:]
void __cdecl -[SiriNCService setLocalObjectProxy:](SiriNCService *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_localObjectProxy, a3);
}