-[SiriNCService setConnection:]
void __cdecl -[SiriNCService setConnection:](SiriNCService *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_connection, a3);
}